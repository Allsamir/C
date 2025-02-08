#include <bits/stdc++.h>
using namespace std;

char grid[1000][1000];
bool visited[1000][1000];

pair<int, int> dx[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(char grid[1000][1000], bool visited[1000][1000], int sr, int sc, int n, int m)
{
          visited[sr][sc] = true;

          for(int i = 0; i < 4; i++)
          {
                    int cr = sr + dx[i].first;
                    int cc = sc + dx[i].second;

                    if(cr >= 0 && cr < n && cc >= 0 && cc < m && grid[cr][cc] != '#' && !visited[cr][cc])
                    {
                              dfs(grid, visited, cr, cc, n, m);
                    }
          }
}

int main(void)
{
          int n,m;
          cin >> n >> m;

          int sr, sc, dr, dc;

          memset(visited, false, sizeof(visited));

          for(int x = 0; x < n; x++)
          {
                    for(int y = 0; y < m; y++)
                    {
                              cin >> grid[x][y];
                    }
          }

          for(int x = 0; x < n; x++)
          {
                    for(int y = 0; y < m; y++)
                    {
                              if(grid[x][y] == 'A')
                              {
                                        sr = x;
                                        sc = y;
                              }
                              else if(grid[x][y] == 'B')
                              {
                                        dr = x;
                                        dc = y;
                              }
                    }
          }

          dfs(grid, visited, sr, sc, n, m);

          if(visited[dr][dc])
          {
                    cout << "YES" << endl;
          }
          else 
          {
                    cout << "NO" << endl;
          }

          return 0;
}