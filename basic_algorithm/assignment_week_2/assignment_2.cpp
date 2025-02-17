#include <bits/stdc++.h>
using namespace std;

bool visited[1005][1005];
char matrix[1005][1005];
pair<int, int> dx[4] = {{-1, 0},{0, 1},{1, 0},{0, -1}};
vector<int> min_node;

void DFS(int si, int sj, int n, int m, int &count)
{
          visited[si][sj] = true;
          count++;

          for(int x = 0; x < 4; x++)
          {
                    int cr = si + dx[x].first;
                    int cc = sj + dx[x].second;

                    if(cr >= 0 && cr < n && cc >= 0 && cc < m && matrix[cr][cc] == '.' && !visited[cr][cc])
                    {
                              visited[cr][cc] = true;
                              DFS(cr, cc, n, m, count);
                    }
          }
}

int main(void)
{
          int n, m;
          cin >> n >> m;

          for(int x = 0; x < n; x++)
          {
                    for(int y = 0; y < m; y++)
                    {
                              cin >> matrix[x][y];
                    }
          }

          for (int x = 0; x < n; x++)
          {
                    for (int y = 0; y < m; y++)
                    {
                              if(!visited[x][y] && matrix[x][y] == '.')
                              {
                                        int count = 0;
                                        DFS(x, y, n, m, count);
                                        min_node.push_back(count);
                                        count = 0;
                              }
                    }
          }

          if(min_node.size() == 0)
          {
                    cout << -1 << endl;
          }
          else 
          {
                    cout << *min_element(min_node.begin(), min_node.end());
          }

          return 0;
}