#include <bits/stdc++.h>
using namespace std;

char mat[50][50];
bool visited[50][50];
int level[50][50];
pair< int, int > dx[4] = {{-1, 0},{0, 1},{1, 0},{0, -1}};

void BFS(int si, int sj, int n)
{
          queue< pair<int, int> > q;
          q.push({si, sj});
          visited[si][sj] = true;
          level[si][sj] = 0;

          while(!q.empty())
          {
                    pair<int, int> par = q.front();
                    q.pop();

                    for(int x = 0; x < 4; x++)
                    {
                              int cr = par.first + dx[x].first;
                              int cc = par.second + dx[x].second;

                              if(cr >= 0 && cr < n && cc >= 0 && cc < n && !visited[cr][cc] && (mat[cr][cc] == 'P' || mat[cr][cc] == 'E'))
                              {
                                        visited[cr][cc] = true;
                                        q.push({cr, cc});
                                        level[cr][cc] = level[par.first][par.second] + 1;
                              }
                    }
          }
}

int main(void)
{
          int n;
          int si, sj, di, dj;

          while (cin >> n)
          {
                    for (int i = 0; i < n; i++)
                    {
                              for (int j = 0; j < n; j++)
                              {
                                        cin >> mat[i][j];
                                        if (mat[i][j] == 'S')
                                        {
                                                  si = i;
                                                  sj = j;
                                        }

                                        if (mat[i][j] == 'E')
                                        {
                                                  di = i;
                                                  dj = j;
                                        }
                              }
                    }

                    memset(level, -1, sizeof(level));
                    memset(visited, false, sizeof(visited));
                    BFS(si, sj, n);
                    cout << level[di][dj] << endl;
          }

          return 0;
}
