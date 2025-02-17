#include <bits/stdc++.h>
using namespace std;

bool visited[1005][1005];
char matrix[1005][1005];

pair<int, int> dx[4] = {{-1, 0},{0, 1},{1, 0},{0, -1}};

void DFS(int si, int sj, int n, int m)
{
          visited[si][sj] = true;

          for(int x = 0; x < 4; x++)
          {
                    int cr = si + dx[x].first;
                    int cc = sj + dx[x].second;

                    if(cr >= 0 && cr < n && cc >= 0 && cc < m && matrix[cr][cc] == '.' && !visited[cr][cc])
                    {
                              visited[cr][cc] = true;
                              DFS(cr, cc, n, m);
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

          int si, sj, di, dj;

          cin >> si >> sj;
          cin >> di >> dj;

          DFS(si, sj, n, m);

          if(visited[di][dj])
          {
                    cout << "YES" << endl;
          }
          else 
          {
                    cout << "NO" << endl;
          }

          return 0;
}