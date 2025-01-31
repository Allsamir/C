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
void is_samee(Node *head, Node *head2);

int main(void)
{
    int n;
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;
    while (true)
    {
        cin >> n;

        if (n == -1)
        {
            break;
        }
        insert_at_tail(head, tail, n);
        count++;
    }


    int n2;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int count2 = 0;
    while (true)
    {
        cin >> n2;

        if (n2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, n2);
        count2++;
    }

    if(count != count2)
    {
          cout << "NO" << endl;
          return 0;
    }

    is_samee(head, head2);
}

void is_samee(Node *head, Node *head2)
{
          Node *temp = head;
          Node *temp2 = head2;

          while(temp != NULL && temp2 != NULL)
          {
                    if(temp->value != temp2->value)
                    {
                              cout << "NO" << endl;
                              return;
                    }

                    temp = temp->next;
                    temp2 = temp2->next;
          }

          cout << "YES" << endl;
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
