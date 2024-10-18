#include <iostream>
#include <vector>
using namespace std;

// Function to find the vertex with the minimum key value
int minKey(vector<int> &key, vector<bool> &mstSet, int V)
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
    {
        if (!mstSet[v] && key[v] < min)
        {
            min = key[v], min_index = v;
        }
    }

    return min_index;
}

// Function to print the MST
void printMST(vector<int> &parent, vector<vector<int> > &graph, int V)
{
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
    {
        cout << parent[i] << " - " << i << "\t" << graph[i][parent[i]] << " \n";
    }
}

// Function to construct the MST
void primMST(vector<vector<int> > &graph, int V)
{
    vector<int> parent(V);
    vector<int> key(V, INT_MAX);
    vector<bool> mstSet(V, false);

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minKey(key, mstSet, V);
        mstSet[u] = true;

        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
            {
                parent[v] = u, key[v] = graph[u][v];
            }
        }
    }

    printMST(parent, graph, V);
}

int main()
{
    int V = 5;

    // Explicitly initialize the 2D vector without brace-enclosed lists
    vector<vector<int> > graph(V, vector<int>(V, 0));

    graph[0][1] = 2;
    graph[0][3] = 6;
    graph[1][0] = 2;
    graph[1][2] = 3;
    graph[1][3] = 8;
    graph[1][4] = 5;
    graph[2][1] = 3;
    graph[2][4] = 7;
    graph[3][0] = 6;
    graph[3][1] = 8;
    graph[3][4] = 9;
    graph[4][1] = 5;
    graph[4][2] = 7;
    graph[4][3] = 9;

    primMST(graph, V);

    return 0;
}
