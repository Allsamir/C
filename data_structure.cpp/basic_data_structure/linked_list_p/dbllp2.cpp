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
void print_dbl(Node *head);
void reverse_dbl(Node *head, Node *tail);

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

          reverse_dbl(head, tail);

          print_dbl(head);
}

void reverse_dbl(Node *head, Node *tail)
{
          for(Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
          {
                    swap(i->value, j->value);
          }
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

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void print_dbl(Node *head)
{
          Node *temp = head;

          while(temp != NULL)
          {
                    cout << temp->value << " ";
                    temp = temp->next;
          }

          cout << endl;
}
