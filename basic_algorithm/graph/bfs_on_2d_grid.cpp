#include <bits/stdc++.h>
using namespace std;

int n,e;
char grid[105][105];
bool visited[105][105];
int level[105][105];
pair<int, int> dx[] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void bfs(int si, int sj)
{
          queue<pair<int, int>> q;
          q.push({si, sj});
          visited[si][sj] = true;
          level[si][sj] = 0;

          while(!q.empty())
          {
                    pair<int, int> par = q.front();
                    q.pop();

                    // cout << par.first << " " << par.second << endl;

                    for(int x = 0; x < 4; x++)
                    {
                              int ci = par.first + dx[x].first;
                              int cj = par.second + dx[x].second;

                              if(!visited[ci][cj] && ci >= 0 & ci < n && cj >= 0 && cj < e && grid[ci][cj] != '#')
                              {
                                        visited[ci][cj] = true;
                                        q.push({ci, cj});
                                        level[ci][cj] = level[par.first][par.second] + 1;
                              }
                    }
          }
}

int main(void)
{
          cin >> n >> e;
          // take input

          for(int x = 0; x < n; x++)
          {
                    for(int y = 0; y < e; y++)
                    {
                              cin >> grid[x][y];
                    }
          }

          memset(visited, false, sizeof(visited));
          memset(level, -1, sizeof(level));
          int si, sj, di, dj;
          cin >> si >> sj >> di >> dj;

          bfs(si, sj);
          cout << level[di][dj] << endl;
          return 0;
}