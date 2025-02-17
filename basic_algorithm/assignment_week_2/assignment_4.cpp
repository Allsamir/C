#include <bits/stdc++.h>
using namespace std;

char matrix[1005][1005];
bool visited[1005][1005];
bool reached = false;

pair<int, int> dx[4] = {{0, 1},{0, -1},{-1, 0},{1, 0}};

vector<vector<pair<int, int>>> parent(1005, vector<pair<int, int>>(1005, {-1, -1}));

void makeX(int si, int sj, int di, int dj)
{
          int x = di, y = dj;

          while(!(x == si && y == sj))
          {
                    pair<int, int> TDindex = parent[x][y];

                    if (matrix[x][y] != 'D')
                    {
                              matrix[x][y] = 'X';
                    }

                    x = TDindex.first;
                    y = TDindex.second;
          }
}

void BFS(int si, int sj, int n, int m)
{
          queue<pair<int, int>> q;
          
          q.push({si, sj});

          while (!q.empty())
          {
                  pair<int, int> curr = q.front();
                  q.pop();

                  if(matrix[curr.first][curr.second] == 'D' )
                  {
                    makeX(si, sj, curr.first, curr.second);
                    return;
                  }

                  for(int x = 0; x < 4; x++)
                  {
                    int cr = curr.first + dx[x].first;
                    int cc = curr.second + dx[x].second;

                    if(cr >= 0 && cr < n && cc >= 0 && cc < m && matrix[cr][cc] != '#' && !visited[cr][cc])
                    {
                              visited[cr][cc] = true;
                              q.push({cr, cc});
                              
                              // storing the paths
                              parent[cr][cc] = curr;
                    }
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
                              if(matrix[x][y] == 'R')
                              {
                                        BFS(x, y, n, m);
                              }
                    }
          }

          for(int x = 0; x < n; x++)
          {
                    for(int y = 0; y < m; y++)
                    {
                              cout << matrix[x][y];
                    }

                    cout << endl;
          }
          

          return 0;
}