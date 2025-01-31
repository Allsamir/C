#include <bits/stdc++.h>
using namespace std;

void print_list(list<long long int> &lst);
void print_list_reverse(list<long long int> &lst);

int main(void)
{
    int t;
    int y;
    long long int v;
    cin >> t;

    list<long long int> lst;

    int flag;

    for (int x = 0; x < t; x++)
    {
        cin >> y >> v;

        flag = 1;

        if (y == 0)
        {
            lst.push_front(v);
        }
        else if (y == 1)
        {
            lst.push_back(v);
        }
        else
        {
            if (v < 0 || v >= (long long int) lst.size())
            {
                // Not valid index
                flag = 0
            }

            if (flag)
            {
                auto it = lst.begin();
                for (long long int i = 0; i < v; i++)
                {
                    it++;
                }
                lst.erase(it);
            }
        }

        print_list(lst);
        print_list_reverse(lst);
    }

    return 0;
}

void print_list(list<long long int> &lst)
{
    cout << "L -> ";
    for (auto it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void print_list_reverse(list<long long int> &lst)
{
    cout << "R -> ";
    for (auto it = lst.end(); it != lst.begin();)
    {
        it--;
        cout << *it << " ";
    }
    cout << endl;
}
