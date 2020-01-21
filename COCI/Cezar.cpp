#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, in[26], ans[26], cnt, tot; vector<int> adj[26]; string b[102], a[102]; bool vis[26];

int main(){
  //Input
  cin>>N;
  for(int i = 1; i <= N; i++) cin>>b[i];
  for(int i = 1, x; i <= N; i++){
    cin>>x; a[i] = b[x];
  }
  //Check every 2 adjacent
  for(int i = 1; i < N; i++){
    int j = i+1; bool dif = false;
    for(int k = 0; k < min(a[i].size(), a[j].size()); k++){
      if(a[i][k] != a[j][k]){
        int u = a[i][k] - 'a', v = a[j][k] - 'a';
        if(!vis[u]) cnt++;
        if(!vis[v]) cnt++;
        adj[u].push_back(v); in[v]++; vis[u]=vis[v]=true;
        dif = true; break;
      }
    }
    if(!dif && a[i].size() > a[j].size()){
      cout<<"NE"<<endl; return 0;
    }
  }
  //Topological sort
  queue<int> q;
  for(int i = 0; i < 26; i++) if(vis[i] && in[i] == 0) q.push(i);
  while(!q.empty()){
    int u = q.front(); q.pop(); ans[u] = ++tot;
    for(int v: adj[u]){
      if(--in[v] == 0) q.push(v);
    }
  }
  //Output
  if(tot != cnt){
    cout<<"NE"<<endl; return 0;
  }
  cout<<"DA"<<endl;
  for(int i = 0; i < 26; i++){
    if(ans[i] != 0) cout<<(char)(ans[i] + 'a' -1);
    else{
      cout<<(char)(tot + 'a'); tot++;
    }
  }
  cout<<endl;
}
