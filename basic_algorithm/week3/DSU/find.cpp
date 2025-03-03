#include <bits/stdc++.h>
using namespace std;

int leader[105];

int find(int node) // O(logN)
{
          if(leader[node] == -1)
              return node;

          int par = find(leader[node]);  
          leader[node] = par; // updating the leader array
          return par;
}

int main(void)
{
          memset(leader, -1, sizeof(leader));

          leader[0] = 1;
          leader[1] = -1;
          leader[2] = 1;
          leader[3] = 1;
          leader[4] = 5;
          leader[5] = 3;

          cout << find(4) << endl;

          for(int x = 0; x < 6; x++)
              cout << x << " -> " << leader[x] << endl;
          return 0;
}