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
void print_link_list(Node *head);
void delete_at_any_p(Node *&head, int indx);

int main(void)
{

    int n;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> n;

        if (n == -1)
        {
            break;
        }

        inset_at_tail(head, tail, n);
    }

    delete_at_any_p(head, 0);
    print_link_list(head);
    return 0;
}

void delete_at_any_p(Node *&head, int indx)
{
  Node *temp = head;

  if(indx == 0)
  {
    head = temp->next;
    delete temp;
    return;
  }

  for(int x = 1; x < indx; x++)
  {
    temp = temp->next;
  }

  Node *delete_node = temp->next;

  temp->next = delete_node->next;

  delete delete_node;
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
