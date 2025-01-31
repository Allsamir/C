#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int value);
void search_and_print_index(Node *head, int val);

int main(void)
{
          int t;

          cin >> t;

          for(int x = 0; x < t; x++)
          {
                    int n;

                    Node *head = NULL;
                    Node *tail = NULL;
                    while(true)
                    {
                              cin >> n;

                              if(n == -1)
                              {
                                        break;
                              }

                              insert_at_tail(head, tail, n);
                    }

                    int val;

                    cin >> val;

                    search_and_print_index(head, val);
          }
}

void search_and_print_index(Node *head, int val)
{
          Node *temp = head;
          int count = 0;
          int flag = 1;
          while(temp != NULL)
          {
                    if(temp->value == val)
                    {
                              cout << count << endl;
                              flag = 0;
                              break;
                    }

                    temp = temp->next;
                    count++;
          }

          if(flag)
          {
                    cout << -1 << endl;
          }
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
          Node *newNode = new Node(value);

          if(head == NULL)
          {
                    head = newNode;
                    tail = newNode;
                    return;
          }

          tail->next = newNode;
          tail = newNode;
}
