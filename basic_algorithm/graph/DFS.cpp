#include <bits/stdc++.h>

using namespace std;


void DFS(vector<int> (&adj_list)[], int src, bool (&visited)[])
{
          // base case is that if all the nodes are visited then the recursion will stop or DFS won't be called
          cout << src << " ";
          visited[src] = true;

          for (auto child : adj_list[src])
          {
                    if(!visited[child])
                    {
                              DFS(adj_list, child, visited);
                    }
          }
}

int main(void)
{
          int n, e;
          cin >> n >> e;

          vector<int> adj_list[n];
          bool visited[n];
          memset(visited, false, sizeof(visited));

          while(e--)
          {
                    int a, b;
                    cin >> a >> b;

                    // undirected graph input done
                    adj_list[a].push_back(b);
                    adj_list[b].push_back(a);
          }

          DFS(adj_list, 0, visited);
          return 0;
}