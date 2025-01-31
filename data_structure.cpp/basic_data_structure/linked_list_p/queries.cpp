#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    long long int value;
    Node *next;

    Node(long long int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, long long int val);
void insert_at_tail(Node *&head, Node *&tail, long long int val);
void print_linked_list(Node *head);
void delete_at_any_p(Node *&head, Node *&tail, long long int indx, int *c);

int main(void)
{
    int t;
    int y;
    long long int v;
    cin >> t;
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;

    for (int x = 0; x < t; x++)
    {
        cin >> y >> v;

        if (y == 0)
        {
            // insert v to head;
            insert_at_head(head, tail, v);
            count++;
        }
        else if (y == 1)
        {
            // insert v to tail;
            insert_at_tail(head, tail, v);
            count++;
        }
        else
        {
            // delete the vth position;
            delete_at_any_p(head, tail, v, &count);
        }

        print_linked_list(head);
        cout << endl;
    }
}

void delete_at_any_p(Node *&head, Node *&tail, long long int indx, int *c)
{

    if (head == NULL || indx >= *c)
    {
        return;
    }

    Node *temp = head;

    if (indx == 0)
    {
        head = temp->next;
        delete temp;
        *c = *c - 1;
        return;
    }

    for (int x = 0; x < indx - 1; x++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;

    temp->next = deleteNode->next;

    delete deleteNode;


    // updating the tail if we delete last element; because we are counting from 1 that's why (*c - 1)

    if (indx == (*c - 1))
    {
        tail = temp;
    }

    *c = *c - 1;
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

void insert_at_head(Node *&head, Node *&tail, long long int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;

    // if we insert first at head we should initialize the tail to point head for the first time;
    if (tail == NULL)
    {
        tail = head;
    }
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
