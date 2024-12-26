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

void inset_at_tail(Node *&head, Node *&tail, int value);
void print_linked(Node *head);
void reverse_linked_list(Node *temp, Node *&head, Node *&tail);

int main(void)
{
          int val;

          Node *head = NULL;
          Node *tail = NULL;

          while(true)
          {
                    cin >> val;

                    if(val == -1)
                    {
                              break;
                    }

                    inset_at_tail(head, tail, val);
          }

          reverse_linked_list(head, head, tail);
          cout << endl;
          print_linked(head);
          cout << tail->value << endl;
          return 0;
}

void reverse_linked_list(Node *temp, Node *&head, Node *&tail)
{
          if(temp->next == NULL)
          {
                    head = temp;
                    // cout << temp->value << " ";
                    return;
          }

          reverse_linked_list(temp->next, head, tail);

          temp->next->next = temp;
          temp->next = NULL;
          tail = temp;
          // cout << temp->value << " ";
}

void inset_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_linked(Node *head)
{
          Node *temp = head;

          while(temp != NULL)
          {
                    cout << temp->value << " ";
                    temp = temp->next;
          }

          cout << endl;
}
