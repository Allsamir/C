#include<bits/stdc++.h>

using namespace std;

void insert_heap(vector<int> &v, int val)
{
          v.push_back(val);

          int curr_index = v.size() - 1;

          while(curr_index != 0)
          {
                    int par_index = (curr_index - 1) / 2;

                    if(v[par_index] < v[curr_index])
                    {
                        swap(v[par_index], v[curr_index]);
                    }

                    curr_index = par_index;
          }
}

void print_heap(vector<int> v)
{
          for(const auto e : v)
             cout << e << " ";

          cout << endl;
}

void delete_heap(vector<int> &v)
{
          cout << "Delete value: " << v[0] << " -> ";
          v[0] = v.back(); // root a vector er last element add
          v.pop_back(); // then pop the last element from back of vector

          int curr_index = 0;

          while(true)
          {
                    int left_index = curr_index * 2 + 1;
                    int right_index = curr_index * 2 + 2;

                    int left_value = INT_MIN, right_value = INT_MIN;

                    if(left_index < v.size()) // index is 0 base;
                    {
                              left_value = v[left_index];
                    }

                    if(right_index < v.size())
                    {
                              right_value = v[right_index];
                    }

                    if(left_value >= right_value && left_value > v[curr_index])
                    {
                              swap(v[curr_index], v[left_index]);
                              curr_index = left_index;
                    }
                    else if(right_value > left_value && right_value > v[curr_index])
                    {
                              swap(v[curr_index], v[right_index]);
                              curr_index = right_index;
                    }
                    else
                    {
                              break; // the root value is greater then left and right
                    }
          }


}

int main(void)
{
          int n;
          cin >> n;

          vector<int> vc;

          for(int x = 0; x < n; x++)
          {
                    int val;
                    cin >> val;
                    insert_heap(vc, val);
          }

          print_heap(vc);
          delete_heap(vc);
          print_heap(vc);
        
          return 0;
}
