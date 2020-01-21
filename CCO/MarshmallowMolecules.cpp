#include <iostream>
#include <set>

using namespace std;

int N, M; set<int> adj[100001]; long long ans;
int main(){
  cin>>N>>M;
  for(int i = 1, u, v; i <= M; i++){
    cin>>u>>v;
    adj[u].insert(v);
  }
  for(int i = 1; i <= N; i++){
    if(adj[i].empty()) continue;
    ans += adj[i].size();
    int u = *adj[i].begin();
    adj[i].erase(adj[i].begin());
    if(adj[u].size() < adj[i].size()) swap(adj[u], adj[i]);
    adj[u].insert(adj[i].begin(), adj[i].end());
  }
  cout<<ans<<endl;
}
