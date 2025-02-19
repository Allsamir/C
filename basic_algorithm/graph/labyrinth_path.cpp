#include <bits/stdc++.h>
using namespace std;

bool visited[1000][1000];
int level[1000][1000];
char grid[1000][1000];
pair<int, int> dx[4] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
char path[4] = {'L', 'R', 'U', 'D'};

map<pair<int, int>, pair<pair<int, int>, char>> parent; // key(1,1) //(1,0), R;

void BFS(int si, int sj, int n, int m)
{
          queue<pair<int, int>> q;

          q.push({si, sj});

          visited[si][sj] = true;

          level[si][sj] = 0;

          while (!q.empty())
          {
                    pair<int, int> par = q.front();
                    q.pop();

                    for (int x = 0; x < 4; x++)
                    {
                              int ci = par.first + dx[x].first;
                              int cj = par.second + dx[x].second;

                              if (ci >= 0 && ci < n && cj >= 0 && cj < m && !visited[ci][cj] && grid[ci][cj] != '#')
                              {
                                        visited[ci][cj] = true;
                                        q.push({ci, cj});
                                        level[ci][cj] = level[par.first][par.second] + 1;
                                        parent[{ci, cj}] = {{par.first, par.second}, path[x]};

                                        if(grid[ci][cj] == 'B')
                                        {
                                                  return;
                                        }

                              }
                    }
          }
}

int main(void)
{
          int n, m;
          cin >> n >> m;

          for (int x = 0; x < n; x++)
          {
                    for (int y = 0; y < m; y++)
                    {
                              cin >> grid[x][y];
                    }
          }

          memset(level, -1, sizeof(level));
          memset(visited, false, sizeof(visited));

          int di, dj;
          int si, sj;

          for (int x = 0; x < n; x++)
          {
                    for (int y = 0; y < m; y++)
                    {
                              if (grid[x][y] == 'A' && !visited[x][y])
                              {
                                        BFS(x, y, n, m);
                                        si = x;
                                        sj = y;
                              }

                              if(grid[x][y] == 'B')
                              {
                                        di = x;
                                        dj = y;
                              }
                    }
          }

          visited[di][dj] ? cout << "YES" << endl : cout << "NO" << endl;

          if (visited[di][dj])
          {
                    cout << level[di][dj] << endl;
          }

          pair<int, int> start = {si, sj}, end = {di, dj};
          pair<int, int> curr = end;
          vector<char> m_path;

          while(start != curr)
          {
                    m_path.push_back(parent[curr].second);
                    curr = parent[curr].first;
          }

          for(auto it = m_path.rbegin(), end = m_path.rend(); it != end; it++)
          {
                    cout << *it;
          }

          return 0;
}