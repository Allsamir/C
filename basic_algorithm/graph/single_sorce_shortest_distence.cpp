#include <bits/stdc++.h>

using namespace std;

int BFS(vector<int> adj_list[], int n, int start, int dst)
{
          bool visited[n];
          int level[n];
          memset(visited, false, sizeof(visited));
          memset(level, -1, sizeof(level));

          queue<int> q;
          q.push(start);
          visited[start] = true;
          level[start] = 0;

          while (!q.empty())
          {
                    int par = q.front();
                    q.pop();

                    // cout << par << " ";

                    for (auto child : adj_list[par]) // adj_list[par] is a vector
                    {
                              if (!visited[child])
                              {
                                        q.push(child);
                                        visited[child] = true;
                                        level[child] = level[par] + 1;
                              }
                    }
          }

          return level[dst];

}

int main(void)
{
          int n, e;

          cin >> n >> e;

          vector<int> adj_list[n];

          while (e--)
          {
                    int a, b;
                    cin >> a >> b;

                    // undirected graph input done
                    adj_list[a].push_back(b);
                    adj_list[b].push_back(a);
          }

          int src, dst;
          cin >> src >> dst;

          int count = BFS(adj_list, n, src, dst);

          cout << "Shortest path from " << src << " to " << dst << " is: " << count << endl;

          return 0;
}