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
void is_palindrome(Node *head, Node *tail);

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

          is_palindrome(head, tail);

          return 0;
}

void is_palindrome(Node *head, Node *tail)
{
          Node *temp = head;
          Node *temp2 = tail;

          while(temp != NULL && temp2 != NULL)
          {
                    if(temp->value != temp2->value)
                    {
                              cout << "Not a palindrome" << endl;
                              return;
                    }

                    temp = temp->next;
                    temp2 = temp2->prev;
          }

          cout << "Palindrome" << endl;
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
