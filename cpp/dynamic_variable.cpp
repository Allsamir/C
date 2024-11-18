#include <bits/stdc++.h>
using namespace std;
int main(void)
{         
          // Dynamically allocate memory for an integer variable using the 'new' keyword
          int *p = new int;
          *p = 5;

          cout << *p << endl;

          // Free the dynamically allocated memory using the 'delete' keyword
          delete p;
          return 0;          
}