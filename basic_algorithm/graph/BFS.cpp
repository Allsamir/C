#include <bits/stdc++.h>

using namespace std;

int BFS(vector<int> adj_list[], int n, int start)
{
          int count = 0;
          bool visited[n];
          memset(visited, false, sizeof(visited));

          queue<int> q;
          q.push(start);
          visited[start] = true;

          while(!q.empty())
          {
                    count++;
                    int par = q.front();
                    q.pop();

                    cout << par << " ";

                    for (auto child : adj_list[par]) // adj_list[par] is a vector
                    {
                              count++;
                              if(!visited[child])
                              {
                                        q.push(child);
                                        visited[child] = true;
                              }
                    }

          }

          return count;
}

int main(void)
{
          int n, e;

          cin >> n >> e;

          vector<int> adj_list[n];

          while(e--)
          {
                    int a, b;
                    cin >> a >> b;

                    // undirected graph input done
                    adj_list[a].push_back(b);
                    adj_list[b].push_back(a);
          }

          int count = BFS(adj_list, n, 0); // 0 is the starting node or you can say index

          cout << endl << "Total nodes visited: " << count << endl;
          return 0;
}