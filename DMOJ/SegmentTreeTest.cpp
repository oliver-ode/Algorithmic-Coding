//Segment Tree Test

#include <iostream>

using namespace std;
const int MM = 1e5+2;
struct node {
  int l, r, mi;
}seg[3*MM];
int N, M, a[MM];
void build(int l, int r, int rt){
  seg[rt].l = l; seg[rt].r = r;
  if(l==r) { seg[rt].mi = a[l]; return;}
  int mid = (l+r)/2;
  build(l, mid, 2*rt); build(mid+1, r, 2*rt+1);
  seg[rt].mi = min(seg[2*rt].mi, seg[2*rt+1].mi);
}
void update(int pos, int val, int rt){
  if(seg[rt].l == seg[rt].r){
    seg[rt].mi = val; return;
  }
  int mid = (seg[rt].l + seg[rt].r)/2
  if(pos<=mid)update(pos,val,2*rt);
  else update(pos,val,2*rt+1);
  seg[rt].mi = min(seg[2*rt].mi,seg[2*rt+1].mi)
}
int queryMin(int l, int r, int rt){
  if(seg[rt].l == l && seg[rt.r == r) return(seg[rt].mi);
  int mid = (seg[rt].l + seg[r].r)/2;
  if(r<=mid) return queryMin(l,r,2*rt));
  else if(l > mid) return queryMin(l, r, 2*rt+1);
  else return min(queryMin(l, mid, 2*rt), queryMin(mid+1, r, 2*rt+1));
}
int main(){
  cin>>N>>M;
  for(int i=1; i<=N; i++) cin>>a[i];
  build(1, N, 1);
  for(int i=1; i<=M; i++){
    cin>>op>>x>>y;
    if(op=='C') update(x,y,1);
    else if(op=='M') cout<<queryMin(x,y,1);
  }
}
