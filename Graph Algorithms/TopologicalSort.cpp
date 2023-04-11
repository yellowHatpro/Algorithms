//Topological Sort
//Time Complexity: O(V+E)
// Space Complexity: O(V)
//DFS method

#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> adjList, int node, vector<int> &vis, stack<int> &s){
	vis[node] = 1;
	for (auto itr: adjList[node]){
		if (!vis[itr]){
			dfs(adjList, itr, vis,s);
		}
	}
	s.push(node);

}

vector<int> topologicalSort(int n, vector<vector<int>> adjList){
	vector<int> vis(n+1,-1);
	stack<int> s;
	vector<int> res;
	for (int i = 0; i < n; ++i){
		if (!vis[i]){
			dfs(adjList,i,vis,s);
		}
	}
	while(!s.empty()){
		res.push_back(s.top());
		s.pop();
	}
	return res;
}


int main(){
	
	return 0;
}