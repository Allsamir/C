#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    Node *prev;
    int value;
    Node *next;

    Node(int val) : prev(NULL), value(val), next(NULL) {}
};

void insert_at_position(Node *&head, Node *&tail, int pos, int value, int *flag);
void print(Node *head);
void print_reverse(Node *tail);

int main(void)
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    int flag;
    cin >> q;

    for (int x = 0; x < q; x++)
    {
        int i, v;
        flag = 1;
        cin >> i >> v;

        if (i < 0)
        {
            cout << "Invalid" << endl;
            flag = 0;
        }

        if (flag)
        {
            insert_at_position(head, tail, i, v, &flag);

            if(flag)
            {
                print(head);
                print_reverse(tail);
            }
        }
    }

    return 0;
}

void print(Node *head)
{
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_position(Node *&head, Node *&tail, int pos, int value, int *flag)
{
    Node *newNode = new Node(value);

    // insert at head
    if (pos == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        return;
    }

    Node *temp = head;
    int currentPosition = 0;

    // going to the position that is given
    while (temp != NULL && currentPosition < pos - 1)
    {
        temp = temp->next;
        currentPosition++;
    }

    if (temp == NULL) // Invalid position
    {
        cout << "Invalid" << endl;
        *flag = 0;
        return;
    }

    // if temp->next is NULL so that's mean it is tail
    // Insert at the tail

    if (temp->next == NULL)
    {
        newNode->prev = temp;
        temp->next = newNode;
        tail = newNode;
    }
    // Insert in the middle
    else
    {
        newNode->next = temp->next;
        temp->next->prev = newNode;
        newNode->prev = temp;
        temp->next = newNode;
    }
}
