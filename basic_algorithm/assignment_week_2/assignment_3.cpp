#include <bits/stdc++.h>
using namespace std;

bool visited[105][105];
int parent[105][105];

pair<int, int> dx[8] = {{2, -1}, {2, 1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

void BFS(int si, int sj, int n, int m)
{
          queue<pair<int, int>> q;

          q.push({si, sj});

          visited[si][sj] = true;
          parent[si][sj] = 0;

          while(!q.empty())
          {
                    pair<int, int> par = q.front();

                    q.pop();

                    for(int x = 0; x < 8; x++)
                    {
                              int cr = par.first + dx[x].first;
                              int cc = par.second + dx[x].second;

                              if(cr >= 0 && cr < n && cc >= 0 && cc < m && !visited[cr][cc])
                              {
                                        visited[cr][cc] = true;
                                        parent[cr][cc] = parent[par.first][par.second] + 1;
                                        q.push({cr, cc});
                              }
                    }
          }
}

int main(void)
{
          int t;
          cin >> t;

          while(t--)
          {
                    int n,m;
                    cin >> n >> m;

                    int si, sj;
                    cin >> si >> sj;

                    int di, dj;
                    cin >> di >> dj;

                    memset(parent, -1, sizeof(parent));
                    memset(visited, false, sizeof(visited));

                    BFS(si, sj, n, m);

                    if (parent[di][dj] == -1)
                    {
                              cout << -1 << endl;
                    }
                    else 
                    {
                              cout << parent[di][dj] << endl;
                    }
          }
          return 0;
}