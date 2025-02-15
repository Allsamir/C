#include <bits/stdc++.h>
using namespace std;

// Problem statement
// Byteland has n cities, and m roads between them.The goal is to construct new roads so that there is a route between any two cities.Your task is to find out the minimum number of roads required, and also determine which roads should be built.Input The first input line has two integers n and m : the number of cities and roads.The cities are numbered 1, 2,\dots, n.After that, there are m lines describing the roads.Each line has two integers a and b : there is a road between those cities.A road always connects two different cities, and there is at most one road between any two cities.Output First print an integer k : the number of required roads.Then, print k lines that describe the new roads.You can print any valid solution

int visited[100000];

void DFS(vector<int> (&adj_list)[], int src)
{
          visited[src] = true;

          // cout << src << " ";

          for(auto child : adj_list[src])
          {
                    if(!visited[child])
                    {
                              DFS(adj_list, child);
                    }
          }
}

int main(void)
{
          int n, e;
          cin >> n >> e;

          vector<int> adj_list[n + 1];

          while(e--)
          {
                    int a, b;
                    cin >> a >> b;

                    adj_list[a].push_back(b);
                    adj_list[b].push_back(a);
          }

          DFS(adj_list, 1);

          int count = 0;
          vector<pair<int, int>> new_roads;

          for(int x = 1; x <= n; x++)
          {
                    if(!visited[x])
                    {
                              if(x == 1)
                              {
                                        adj_list[x].push_back(x + 1);
                                        new_roads.push_back({x, x + 1});
                              }
                              else 
                              {
                                        adj_list[x - 1].push_back(x);
                                        new_roads.push_back({x - 1, x});
                              }
                              
                              DFS(adj_list, x);
                              count++;
                    }
          }

          cout << count << endl;

          for(auto child : new_roads)
          {
                    cout << child.first << " " << child.second << endl;
          }

          return 0;
}