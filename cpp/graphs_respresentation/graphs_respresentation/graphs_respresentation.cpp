#include "pch.h"
#include <iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V) {
	for (int v = 0; v < V; ++v) {
		cout << "  \n Adjacency list of vertex" << v << endl << " head";
		for (auto x : adj[v])
			cout << "-> " << x;
		cout << endl;
	}
}

int main()
{
	const int V = 5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	printGraph(adj, V);
}
