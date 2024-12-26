#include <bits/stdc++.h>

using namespace std;

class Node {
          public:
          Node *prev;
          int value;
          Node *next;

          Node(int val): prev(NULL), value(val), next(NULL) {}
};

void insert_at_tail(Node *&head, Node *&tail, int value);
void is_same_dbl(Node *head, Node *head2);

int main(void)
{
          int n;

          Node *head = NULL;
          Node *tail = NULL;

          Node *head2 = NULL;
          Node *tail2 = NULL;

          while(true)
          {
                    cin >> n;

                    if(n == -1)
                    {
                              break;
                    }

                    insert_at_tail(head, tail, n);
          }

          while (true)
          {
              cin >> n;

              if (n == -1)
              {
                  break;
              }

              insert_at_tail(head2, tail2, n);
          }

          is_same_dbl(head, head2);
          return 0;
}

void is_same_dbl(Node *head, Node *head2)
{
          Node *temp = head;
          Node *temp2 = head2;

          while(temp != NULL && temp2 != NULL)
          {
                    if(temp->value != temp2->value)
                    {
                              cout << "Not Same" << endl;
                              return;
                    }

                    temp = temp->next;
                    temp2 = temp2->next;
          }

          if(temp == NULL && temp2 == NULL)
          {
                    cout << "Same" << endl;
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

          newNode->prev = tail;
          tail->next = newNode;
          tail = newNode;
}
