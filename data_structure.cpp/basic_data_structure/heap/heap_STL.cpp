#include<bits/stdc++.h>

using namespace std;

int main(void)
{
          priority_queue<int, vector<int>, greater<int>> pq;

          pq.push(10);
          pq.push(20);
          pq.push(5);
          pq.push(30);

          cout << pq.top() << endl;
          pq.push(100);
          pq.push(2);
          cout << pq.top() << endl;
          return 0;
}
