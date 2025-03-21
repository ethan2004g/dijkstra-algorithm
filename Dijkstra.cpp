#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <algorithm>
#include <climits>
using namespace std;

// Store edges as (neighbor, weight)
typedef pair<int, long long> Edge;

// Store (distance, node) in the priority queue
typedef pair<long long, int> DistNode;

pair<vector<int>, long long> dijkstra_path(const vector<vector<Edge>>& graph, int start, int end) {
    // How many nodes we have
    int n = (int)graph.size();

    // dist[node] = the shortest distance we know from 'start' to this node
    vector<long long> dist(n, LLONG_MAX);
    dist[start] = 0;

    // parent[node] = the node we came from on the best path to 'node'
    vector<int> parent(n, -1);
}
