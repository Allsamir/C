#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define lm LLONG_MAX

ll short_des[100005];
ll parent[100005];

void dijkstra_algorithm(vector<pair<ll, ll>> (&adj)[], ll src)
{
          priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;

          pq.push({0, src});
          short_des[src] = 0;

          while(!pq.empty())
          {
                    pair<ll, ll> par = pq.top();
                    pq.pop();

                    ll curr_dist = par.first;
                    ll curr_node = par.second;

                    if(curr_dist > short_des[curr_node])
                    {
                              continue;
                    }          

                    for(auto child : adj[curr_node])
                    {
                              ll child_node = child.first;
                              ll child_dis = child.second;

                              if(curr_dist + child_dis < short_des[child_node])
                              {
                                        short_des[child_node] = curr_dist + child_dis;
                                        pq.push({short_des[child_node], child_node});
                                        parent[child_node] = curr_node; // to trace the path back to source node
                              }
                    }
          }
}

int main(void)
{
          ll n, e;
          cin >> n >> e;

          vector<pair<ll, ll>> adj_list[n + 1];

          while(e--)
          {
                    ll a, b, w;
                    cin >> a >> b >> w;
                    adj_list[a].push_back({b, w});
                    adj_list[b].push_back({a, w});
          }

          for(int i = 1; i <= n; i++)
          {
                    short_des[i] = lm;
                    parent[i] = -1;
          }

          dijkstra_algorithm(adj_list, 1);

          if(short_des[n] == lm)
          {
                    cout << -1 << endl;
                    return 0;
          }

          ll node = n;
          vector<ll> path;
          while(node != -1)
          {
                    path.push_back(node);
                    node = parent[node];
          }

          for(auto it = path.rbegin(), end = path.rend(); it != end; it++)
          {
                    cout << *it << " ";
          }
          return 0;
}