#include <bits/stdc++.h>

using namespace std;

int main(void)
{
          int n, e;
          cin >> n >> e;

          int adj_matrix[n][n];

          memset(adj_matrix, 0, sizeof(adj_matrix));

          for(int x = 0; x < n; x++)
            for(int y = 0; y < n; y++)
                if(x == y)
                    adj_matrix[x][y] = 1;

          while(e--)
          {
                    int a,b;
                    cin >> a >> b;

                    adj_matrix[a][b] = 1;
                    // because it is undirected graph we need to give both connection
                    adj_matrix[b][a] = 1;

                    // if it is directed graph then we need to give only one connection
                    // adj_matrix[a][b] = 1;
          }

          for (int x = 0; x < n; x++)
          {
                    for (int y = 0; y < n; y++)
                    {
                              cout << adj_matrix[x][y] << " ";
                    }

                    cout << endl;
          }
          return 0;
}