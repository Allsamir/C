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
void print_list(Node *node);

int main(void)
{
          int n;

          Node *tail = NULL;
          Node *head = NULL;

          int count = 0;

          while(true)
          {
                    cin >> n;

                    if(n == -1)
                    {
                              break;
                    }

                    count++;

                    inset_at_tail(head, tail, n);

          }

          int middle_1;
          int middle_2;

          if(count % 2 == 0)
          {
                    middle_1 = count / 2;
                    middle_2 = middle_1 + 1;

                    Node *temp = head;

                    for(int x = 1; x <= middle_2; x++)
                    {
                              if(x == middle_1 || x == middle_2)
                              {
                                        print_list(temp);
                              }

                              temp = temp->next;
                    }
          }
          else
          {
                    middle_1 = (count / 2) + 1;
                    Node *temp = head;

                    for(int x = 1; x <= middle_1; x++)
                    {
                              if(x == middle_1)
                              {
                                        print_list(temp);
                              }

                              temp = temp->next;
                    }
          }
}


void print_list(Node *node)
{
          cout << node->value << " ";
}

void inset_at_tail(Node *&head, Node *&tail, int value)
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
