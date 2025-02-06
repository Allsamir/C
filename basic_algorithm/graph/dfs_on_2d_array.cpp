#include <bits/stdc++.h>

using namespace std;

int n, e;
char grid[105][105];
bool visited[105][105];
pair<int, int> dx[] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void dfs(int si, int sj)
{
          cout << si << " " << sj << endl;
          visited[si][sj] = true;

          for (int x = 0; x < 4; x++)
          {
                    int ci, cj; // si and sj's next 4 direction: si sj means src row and src column
                    ci = si + dx[x].first;
                    cj = sj + dx[x].second;

                    //ci and cj is the next row and column
                    //ci and cj has to be in the grid or range of n and e;

                    if (!visited[ci][cj] && ci >= 0 && ci < n && cj >= 0 && cj < e)
                              dfs(ci, cj);
          }
}

int main(void)
{
          cin >> n >> e;

          for (int i = 0; i < n; i++)
          {
                    for (int j = 0; j < e; j++)
                    {
                              cin >> grid[i][j];
                    }
          }

          memset(visited, false, sizeof(visited));
          int sj, si;
          cin >> sj >> si;
          dfs(sj, si);
          return 0;
}