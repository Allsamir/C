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

void insert_at_head(Node *&head, int value);
void print_link_list(Node *head);

int main(void)
{
    int n;
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
        insert_at_head(head, n);
    }

    // print_link_list(head);
    cout << count << endl;
    return 0;
}

void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void print_link_list(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    print_link_list(head->next);
    cout << head->value << " ";
}
