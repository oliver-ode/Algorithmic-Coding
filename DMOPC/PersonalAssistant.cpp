#include <iostream>

using namespace std;
typedef long long ll;
struct event {ll s, f, v;} a[100002];
int N; ll dp[100002];

bool cmp(event x, event y){ return x.f < y.f;}
bool cmp2(ll x, event y) {return x <= y.f;}

int main(){
  scanf("%d", &N);
  for(int i = 1; i <= N; i++){
    scanf("%lld %lld %lld", &a[i].s, &a[i].f, &a[i].v);
    a[i].f += a[i].s -1;
  }
  sort(a+1, a+N+1, cmp);
  for(int i = 1; i <= N; i++){
    int p = upper_bound(a, a+i, a[i].s, cmp2) - a - 1;
    dp[i] = max(dp[i-1], a[i].v + dp[p]);
  }
  printf("%lld\n", dp[N]);
}
