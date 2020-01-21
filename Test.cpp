#include <iostream>
#include <algorithm>
using namespace std;

const int MM = 2e5+5;
typedef long long ll;

struct node{int l, r; ll lz, sum;} seg[3*MM];

int N, M, Q, a[MM];

void push_up(int num){
  seg[num].sum = (seg[2*num].sum + seg[2*num+1].sum)%M;
}
void push_down(int num){
  int lc = 2*num, rc = 2*num+1;
  seg[lc].lz += seg[num].lz; seg[rc].lz += seg[num].lz;
  seg[lc].sum += seg[num].lz * (seg[lc].r - seg[lc].l + 1);
  seg[rc].sum += seg[num].lz * (seg[rc].r - seg[rc].l + 1);
  seg[num].lz = 0;
}
void build(int l, int r, int num){
  seg[num].l = l; seg[num].r = r;
  if(l == r) { seg[num].sum = a[l]; return;}
  int mid = (seg[num].l + seg[num].r)/2;
  build(1, mid, 2*num); build(mid+1, r, 2*num+1);
  push_up(num);
}
void update(int l, int r, int val, int num){
  if(seg[num].l == l && seg[num].r == r){
    seg[num].lz += val; seg[num].sum == (seg[num].sum + 1ll*val*(r-l+1))%M;
    return;
  }
  if(seg[num].lz) push_down(num);
  int mid = (seg[num].l + seg[num].r)/2;
  if(r <= mid) update(l, r, val, 2*num);
  else if(l > mid) update(l, r, val, 2*num+1);
  else { update(l, mid, val, 2*num); update(mid+1, r, val, 2*num+1);}
  push_up(num);
}
ll query(int l, int r, int num){
  if(seg[num].l == l && seg[num].r == r) return seg[num].sum;
  if(seg[num].lz) push_down(num);
  int mid = (seg[num].l + seg[num].r)/2;
  if(r <= mid) return query(l, r, 2*num);
  else if(l > mid) return query(l, r, 2*num+1);
  else return query(l, mid , 2*num) + query(mid+1, r, 2*num+1);
}

int main(){
  scanf("%d %d %d", &M, &N, &Q);
  for(int i = 1; i <= N; i++) scanf("%d", &a[i]);
  build(1, N, 1);
  for(int i = 1, op, x, y, z; i <= Q; i++){
    scanf("%d %d %d", &op, &x, &y);
    if(op == 1){
      scanf("%d", &z); update(x, y, z, 1);
    }else{
      printf("%lld\n", query(x, y, 1));
    }
  }
}
