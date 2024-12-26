#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *prev;
    int value;
    Node *next;

    Node(int val) : prev(NULL), value(val), next(NULL) {}
};

void insert_at_any_position(Node *&head, Node *&tail, int index, int *count, int value, int *flag);
void print_dbl(Node *head);
void print_dbl_reverse(Node *tail);

int main(void)
{
    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;
    for (int i = 0; i < q; i++)
    {
        int index, value;
        cin >> index >> value;
        int flag = 1;
        insert_at_any_position(head, tail, index, &count, value, &flag);
        if(flag)
        {
            print_dbl(head);
            print_dbl_reverse(tail);
        }
    }

    return 0;
}

void insert_at_any_position(Node *&head, Node *&tail, int index, int *count, int value, int *flag)
{
    Node *newNode = new Node(value);

    // intialize head and tail
    if (index == 0 && *count == 0)
    {
        head = newNode;
        tail = newNode;
        *count += 1;
        return;
    }

    if (index > *count)
    {
        cout << "Invalid" << endl;
        *flag = 0;
        return;
    }

    // insert at head
    if (index == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        *count += 1;
        return;
    }

    // insert at tail
    if(index == *count)
    {
          newNode->prev = tail;
          tail->next = newNode;
          tail = newNode;
          *count += 1;
          return;
    }


    // insert at any positon except head and tail
    Node *temp = head;

    for (int x = 0; x < index - 1; x++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
}

void print_dbl(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_dbl_reverse(Node *tail)
{
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }

    cout << endl;
}
