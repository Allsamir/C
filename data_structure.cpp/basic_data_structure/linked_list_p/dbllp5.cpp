#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *prev;
    int value;
    Node *next;

    Node(int val) : prev(NULL), value(val), next(NULL) {}
};

void insert_at_tail(Node *&head, Node *&tail, int value);
void sort_the_list(Node *head);
void print_dbl(Node *head);

int main(void)
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
          
          sort_the_list(head);
          print_dbl(head);
          return 0;
}

void sort_the_list(Node *head)
{
          Node *temp = head;

          while(temp->next != NULL)
          {
                    Node *atemp = temp->next;

                    while(atemp != NULL)
                    {
                              if(temp->value > atemp->value)
                              {
                                        swap(temp->value, atemp->value);
                              }

                              atemp = atemp->next;
                    }

                    temp = temp->next;
          }
}

void print_dbl(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
