#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <climits>
using namespace std;
typedef pair<int, int> pii;

// Function to implement Djikstra's algorithm
void dijkstra(int source, vector<vector<pii>>& adj, vector<int>& dist) {
    
    priority_queue<pii, vector<pii>, greater<pii>> pq; // Min-heap priority queue
    pq.push({0, source});
    dist[source] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto& neighbor : adj[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            // If a shorter path to v is found
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<pii>> adj(V);
    vector<int> dist(V, INT_MAX);

    cout << "Enter the edges (u, v, w) where u and v are vertices and w is the weight:" << endl;
    for (int i = 0; i < E; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // Comment this line if the graph is directed
    }

    int source;
    cout << "Enter the source vertex: ";
    cin >> source;

    dijkstra(source, adj, dist);

    cout << "Shortest distances from source vertex " << source << ":" << endl;
    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << " : " << dist[i] << endl;
    }

    return 0;
}
