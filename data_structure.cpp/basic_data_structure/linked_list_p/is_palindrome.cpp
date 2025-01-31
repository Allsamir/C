#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *prev;
    int value;
    Node *next;

    Node(int val) : prev(NULL), value(val), next(NULL) {}
};

void insert_at_tail(Node *&head, Node *&tail, int val);
// void print_linked_list(Node *head);
void is_pailndrome(Node *head, Node *tail);

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

          // print_linked_list(head);
          is_pailndrome(head, tail);
}

// void print_linked_list(Node *head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->value << " ";
//         temp = temp->next;
//     }
// }

void is_pailndrome(Node *head, Node *tail)
{
          for(Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
          {
                    if(i->value != j->value)
                    {
                              cout << "NO" << endl;
                              return;
                    }
          }

          cout << "YES" << endl;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
          Node *newNode = new Node(val);

          if(head == NULL)
          {
                    head = newNode;
                    tail = newNode;
          }

          newNode->prev = tail;
          tail->next = newNode;
          tail = newNode;
}
