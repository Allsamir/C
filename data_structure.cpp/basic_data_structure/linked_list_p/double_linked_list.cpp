#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    Node *prev;
    int value;
    Node *next;

    Node(int value)
    {
        this->prev = NULL;
        this->value = value;
        this->next = NULL;
    }
};

void print_doubly_linked_list(Node *head);
void inset_at_head(Node *&head, int val);
void insert_at_tail(Node *&tail, int val);
void insert(Node *&head, Node *&tail, Node *&start, int val, char p);
void insert_at_any_position(Node *head, int index, int val);
void delete_at_head(Node *&head);
void delete_at_tail(Node *&tail);
void delete_at_any_position(Node *&head, int indx);

int main(void)
{
    Node *head = NULL;
    Node *tail = NULL;
    // tracking the start
    Node *start = NULL;

    int val;

    while(true)
    {
        cin >> val;

        if(val == -1)
        {
            break;
        }

        insert_at_tail(tail, val);
    }

    // insert(head, tail, start, 40, 't');
    // insert(head, tail, start, 50, 't');
    // insert(head, tail, start, 10, 'h');
    // insert(head, tail, start, 20, 'h');
    // insert(head, tail, start, 30, 'h');
    // insert_at_any_position(head, 2, 200);
    // insert_at_any_position(head, 4, 400);
    // insert_at_any_position(head, 5, 500);

    // delete_at_head(head);
    // delete_at_head(head);

    // delete_at_tail(tail);
    // delete_at_tail(tail);

    // delete_at_any_position(head, 1);
    // delete_at_any_position(head, 2);
    // Don't forget to change the next prev in print function of doubly_linked_list
    // if tail then update the temp value to prev in the funtion else next

    print_doubly_linked_list(tail); // print backward
    // print_doubly_linked_list(head); // print fovward

    cout << endl;
}

void delete_at_any_position(Node *&head, int indx)
{
    Node *temp = head;

    if(temp->next == NULL)
    {
        head = NULL;
        delete temp;
        return;
    }

    for (int x = 0; x < indx - 1; x++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;

    // currentNode er next will be deleteNode er next Node;
    temp->next = deleteNode->next;

    // deleteNoder er next Node er prev will be currentNode;
    deleteNode->next->prev = temp;

    // delete current Node er next Node;
    delete deleteNode;
}

void delete_at_tail(Node *&tail)
{
    Node *deleteNode = tail;

    if (tail->prev == NULL)
    {
        tail = NULL;
        delete deleteNode;
        return;
    }

    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}

void delete_at_head(Node *&head)
{
    Node *temp = head;

    if (head->next == NULL)
    {
        head = NULL;
        delete temp;
        return;
    }

    temp->next->prev = NULL;
    head = temp->next;
    delete temp;
}

void insert_at_any_position(Node *head, int index, int val)
{
    Node *temp = head;

    Node *newNode = new Node(val);

    for (int x = 0; x < index - 1; x++)
    {
        temp = temp->next;
    }

    // first change the index's prev to newNode otherwise you will lose it..
    temp->next->prev = newNode;

    // update newNode's next to temp's next;
    newNode->next = temp->next;
    // update newNode's prev to current temp;
    newNode->prev = temp;

    // temp next's would be newNode;
    temp->next = newNode;
}

void insert(Node *&head, Node *&tail, Node *&start, int val, char p)
{
    Node *newNode = new Node(val);

    if (p == 'h' && head == NULL)
    {
        head = newNode;

        // edge case
        if (start != NULL)
        {
            start->prev = head;
            head->next = start;
        }

        if (start == NULL)
        {
            start = head;
        }

        return;
    }

    else if (p == 't' && tail == NULL)
    {
        tail = newNode;

        // edge case
        if (start != NULL)
        {
            start->next = tail;
            tail->prev = start;
        }

        if (start == NULL)
        {
            start = tail;
        }

        return;
    }

    if (p == 'h')
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void inset_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    head->prev = newNode;

    newNode->next = head;

    head = newNode;
}

void insert_at_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if(tail == NULL)
    {
        tail = newNode;
        return;
    }

    newNode->prev = tail;

    tail->next = newNode;

    tail = newNode;
}

void print_doubly_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";

        temp = temp->prev;
    }
}
