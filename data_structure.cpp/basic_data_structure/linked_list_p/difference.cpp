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

void print_linked_list(Node *head);
void insert_at_head(Node *&head, int value);
void free_all_nodes(Node *head);
void print_difference(Node *head);
int main(void)
{
    int n;
    Node *head = NULL;
    while (true)
    {
        cin >> n;

        if (n == -1)
        {
            break;
        }
        insert_at_head(head, n);
    }
//     print_linked_list(head);
    print_difference(head);
    free_all_nodes(head);
    return 0;
}

void print_difference(Node *head)
{
          Node *temp = head;
          int max_value = temp->value;
          int min_value = temp->value;

          while(temp->next != NULL)
          {
                    if(temp->next->value > max_value)
                    {
                              max_value = temp->next->value;
                    }

                    if(temp->next->value < min_value)
                    {
                              min_value = temp->next->value;
                    }

                    temp = temp->next;
          }

          int d = max_value - min_value;

          cout << d << endl;
}

void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void free_all_nodes(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    free_all_nodes(head->next);
    delete head;
}
