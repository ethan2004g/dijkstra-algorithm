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

    // Using a min-heap: (current_distance, node)
    auto compare = [](const DistNode& a, const DistNode& b) {
        return a.first > b.first; // We want the smaller distance on top
    };
    priority_queue<DistNode, vector<DistNode>, decltype(compare)> pq(compare);

    // Push (0, start) onto our queue to begin
    pq.push({0, start});
    
}
