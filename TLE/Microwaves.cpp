#include <iostream>
using namespace std;

typedef long long ll;

struct P {int s, f;} p[100002];
int N, M, T, t[102];
bool cmp(P a, P b){return a.s < b.s;}

int main(){
  scanf("%d %d %d", &N, &M, &T);
  for(int i = 0; i < M; i++){
    scanf("%d %d", &p[i].s, &p[i].f);
  }
  sort(p, p+M, cmp);
  for(int i = 0; i < M; i++){
    ll s = p[i].s, d = p[i].f, e = s+d;
    int id = upper_bound(t, t+N, s) - t - 1;
    if(id<0){
      t[0] += d;
    }
    else{
      if(s - t[0] >= T) {
        printf("%lld\n", t[0]); return 0;
      }
      t[id] = e;
    }
    sort(t, t+N);
  }
  printf("%lld\n", t[0]);
}
