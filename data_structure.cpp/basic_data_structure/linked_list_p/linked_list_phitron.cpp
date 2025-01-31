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

// void print_link_list(Node *head);
void print_link_list_r(Node *head);

// void inset_at_head(Node *&head, int value);
// void inset_at_tail(Node *&head, int value);
// void inset_at_any_position(Node *head, int index, int value);
// optimized insert at tail
void inset_at_tail(Node *&head, Node *&tail, int value);

int main(void)
{
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *tail = b;
    // head->next = a;
    // a->next = b;
    // Node *head = NULL;
    // inset_at_tail(head, tail, 40);
    // inset_at_tail(head, 40);
    // inset_at_any_position(head, 1, 40);
    // print_link_list(head);

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

        inset_at_tail(head, tail, n);
    }

    // printing linked list in reverse order
    print_link_list_r(head);
    cout << endl;
    return 0;
}

// void inset_at_any_position(Node *head, int index, int value)
// {
//     Node *newNode = new Node(value);

//     Node *temp = head;

//     // 1. take the temp pointer to index - 1 position
//     for(int x = 0; x < index - 1; x++)
//     {
//         temp = temp->next;
//     }

//     // 2. take another temp to store the pointer of index node's pointer
//     Node *another_temp = temp->next;
//     // 3. update the index - 1 node's pointer to point at new node
//     temp->next = newNode;
//     // 4. update the newNode's next pointer to point the index + 1 node or you can say to point to the right of newNode;
//     newNode->next = another_temp;

// }

// void inset_at_head(Node *&head, int value) // & passing the reference of the pointer head
// {
//     Node* newNode = new Node(value);
//     newNode->next = head;
//     head = newNode;
// }

// void inset_at_tail(Node *&head, int value)
// {
//     Node *newNode = new Node(value);

//     if(head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     Node *temp = head;

//     while(temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->next = newNode;
// }

// insert at tail optimized:

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

// void print_link_list(Node *head)
// {
//     Node *temp = head;

//     while(temp != NULL)
//     {
//         cout << temp->value << " ";
//         temp = temp->next;
//     }

//     cout << endl;
// }

// printing linked list in reverse order
void print_link_list_r(Node *temp)
{
    if(temp == NULL)
    {
        return;
    }

    print_link_list_r(temp->next);
    cout << temp->value << " ";
}
