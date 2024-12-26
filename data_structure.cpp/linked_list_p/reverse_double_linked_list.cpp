#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    Node *prev;
    int value;
    Node *next;

    Node(int value)
    {
        this->prev = NULL;
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val);
void reverse_tail(Node *head, Node *tail);
void print_doubly_linked_list(Node *head);

int main(void)
{
          Node *head = NULL;
          Node *tail = NULL;

          int val;

          while(true)
          {
                    cin >> val;

                    if(val == -1)
                    {
                              break;
                    }

                    insert_at_tail(head, tail, val);
          }

          reverse_tail(head, tail);
          print_doubly_linked_list(head);
}

void reverse_tail(Node *head, Node *tail)
{
          for(Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
          {
                    swap(i->value, j->value);
          }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

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

void print_doubly_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";

        temp = temp->next;
    }
}
