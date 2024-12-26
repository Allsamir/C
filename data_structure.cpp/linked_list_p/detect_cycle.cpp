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

void print_linked(Node *head);

int main(void)
{
    int val;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = e;

    // cycle detection code
    Node *slow = head;
    Node *fast = head;
    int flag = 0;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;       // will move 1 step
        fast = fast->next->next; // will move 2 setp

        if (slow == fast)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        cout << "Cycle Detected" << endl;
    else
        cout << "No Cycle Detected" << endl;

    return 0;
}

void print_linked(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}
