#include <bits/stdc++.h>
using namespace std;

char mtrx[1000][1000];
bool visited[1000][1000];

pair<int, int> dx[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

vector<int> nodes_in_connected_component;

void dfs(int sr, int sc, int n, int m, int &rooms)
{
          visited[sr][sc] = true;

          for(int i = 0; i < 4; i++)
          {
                    int cr = sr + dx[i].first;
                    int cc = sc + dx[i].second;

                    if(cr >= 0 && cr < n && cc >= 0 && cc < m && mtrx[cr][cc] != '#' && !visited[cr][cc])
                    {
                              rooms++;
                              dfs(cr, cc, n, m, rooms);
                    }
          }
}

int main(void)
{
          int n, m;
          cin >> n >> m;

          for (int x = 0; x < n; x++)
          {
                    for(int y = 0; y < m; y++)
                    {
                              cin >> mtrx[x][y];
                    }
          }

          for(int x = 0; x < n; x++)
          {
                    for(int y = 0; y < m; y++)
                    {
                              if(mtrx[x][y] == '.' && !visited[x][y])
                              {
                                        int rooms = 1;
                                        dfs(x, y, n, m, rooms);
                                        nodes_in_connected_component.push_back(rooms);
                              }
                    }
          }


          sort(nodes_in_connected_component.begin(), nodes_in_connected_component.end());

          for(auto x: nodes_in_connected_component)
          {
                    cout << x << " ";
          }

          // edge case if there is no node or . in the grid then print 0
          if(nodes_in_connected_component.size() == 0)
          {
                    cout << 0 << endl;
          }


          return 0;
}