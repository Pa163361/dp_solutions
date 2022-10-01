#include <bits/stdc++.h>
using namespace std;

void createEdge(vector<vector<int>>& adj, int u, int v){
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void dfs(vector<vector<int>>& adj, vector <bool> visited, int start) {
  visited[start] = true;
  cout << start << " ";
  for (auto it = adj[start].begin(); it != adj[start].end(); it++) {
    if (!visited[*it]) {
      dfs(adj, visited, *it);
    }
  }
}

int main (void){
  const int n = 5;
  int start = 0;
  vector<vector<int>> adj(n);
  vector <bool> visited(n, false);
  createEdge(adj, 0, 1);
  createEdge(adj, 0, 2);
  createEdge(adj, 1, 3);
  createEdge(adj, 1, 4);
  createEdge(adj, 3, 3);
  createEdge(adj, 4, 4);
  createEdge(adj, 2, 2);
  dfs(adj, visited, start);
  cout << endl;
}

