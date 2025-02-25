#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n, e;
          cin >> n >> e;

          int adj_matrix[n][n];

          for(int x = 0; x < n; x++)
          {
                    for(int y = 0; y < n; y++)
                    {
                              if(x == y)
                              {
                                        adj_matrix[x][y] = 0;
                              }
                              else 
                              {
                                        adj_matrix[x][y] = INT_MAX;
                              }
                    }
          }

          while(e--)
          {
                    int u, v, w;
                    cin >> u >> v >> w;
                    adj_matrix[u][v] = w;
                    // for undirected graph
                    // adj[v][u] = w;
          }

          for(int k = 0; k < n; k++)
          {
                    for(int i = 0; i < n; i++)
                    {
                              for(int j = 0; j < n; j++)
                              {
                                        if(adj_matrix[i][k] != INT_MAX && adj_matrix[k][j] != INT_MAX && adj_matrix[i][k] + adj_matrix[k][j] < adj_matrix[i][j])
                                        {
                                                  adj_matrix[i][j] = adj_matrix[i][k] + adj_matrix[k][j];
                                        }
                              }
                    }
          }

          for (int x = 0; x < n; x++)
          {
                    for (int y = 0; y < n; y++)
                    {
                              if(adj_matrix[x][y] == INT_MAX)
                              {
                                        cout << "INF ";
                              }
                              else 
                              {
                                        cout << adj_matrix[x][y] << " ";
                              }
                    }

                    cout << endl;
          }

          return 0;
}