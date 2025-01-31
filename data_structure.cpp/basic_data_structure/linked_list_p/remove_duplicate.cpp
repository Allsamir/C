#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int value;
    Node *next;

    Node(long long int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, long long int val);
void remove_duplicate(Node *head);
void print_link_list(Node *head);

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

          remove_duplicate(head);
          print_link_list(head);
          return 0;
}


void remove_duplicate(Node *head)
{
          Node *temp = head;

          while(temp != NULL)
          {
                    Node *stemp = temp->next;

                    // to store the ager pointer of which element will be deleted
                    Node *thtemp = temp;

                    while(stemp != NULL)
                    {
                              int flag = 1;

                              if(temp->value == stemp->value)
                              {
                                Node *sstemp = stemp;
                                thtemp->next = sstemp->next;
                                delete sstemp;

                                stemp = thtemp->next;
                                flag = 0;
                              }

                              if(flag)
                                  stemp = stemp->next;
                              if (flag)
                                  thtemp = thtemp->next;
                    }

                    temp = temp->next;
          }
}

void print_link_list(Node *head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}

void insert_at_tail(Node *&head, Node *&tail, long long int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}
