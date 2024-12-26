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
void inset_at_any_p(Node *&head, int val, int index);
void print_list(Node *node);

int main(void)
{
    int n;

    Node *tail = NULL;
    Node *head = NULL;

    int count = 0;

    while (true)
    {
        cin >> n;

        if (n == -1)
        {
            break;
        }

        count++;

        inset_at_tail(head, tail, n);
    }

    while(true)
    {
          int indx, value;

          cin >> indx >> value;

          if(indx > count)
          {
                    cout << "Invalid" << endl;
          }

          if(indx <= count)
          {
                    inset_at_any_p(head, value, indx);
                    print_list(head);
                    count++;
                    cout << endl;
          }
    }
}

void inset_at_any_p(Node *&head, int val, int index)
{
          Node *newNode = new Node(val);

          Node *temp = head;

          if(index == 0)
          {
                    newNode->next = head;
                    head = newNode;
                    return;
          }

          for(int x = 0; x < index - 1; x++)
          {
                    temp = temp->next;
          }

          newNode->next = temp->next;
          temp->next = newNode;
}

void print_list(Node *head)
{
    Node *temp = head;

    while(temp != NULL)
    {
          cout << temp->value << " ";
          temp = temp->next;
    }
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
