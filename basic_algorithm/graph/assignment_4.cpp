#include <bits/stdc++.h>
using namespace std;

char mtrx[1000][1000];
bool visited[1000][1000];
int counter = 0;

pair<int, int> dx[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(int sr, int sc, int n, int m)
{
          visited[sr][sc] = true;

          for(int i = 0; i < 4; i++)
          {
                    int cr = sr + dx[i].first;
                    int cc = sc + dx[i].second;

                    if(cr >= 0 && cr < n && cc >= 0 && cc < m && mtrx[cr][cc] != '#' && !visited[cr][cc])
                    {
                              dfs(cr, cc, n, m);
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
                              cin >> mtrx[x][y];
                    }
          }

          for(int x = 0; x < n; x++)
          {
                    for(int y = 0; y < m; y++)
                    {
                              if(mtrx[x][y] == '.' && !visited[x][y])
                              {
                                        counter++;
                                        dfs(x, y, n, m);
                              }
                    }
          }

          cout << counter << endl;

          return 0;
}