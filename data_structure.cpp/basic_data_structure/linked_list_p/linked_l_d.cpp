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

void print_link_list(Node *head);
void insert_at_head(Node *&head, int value);
bool is_any_duplicate(Node *head, int v);

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

    // checking if there is any duplicate in the linked list the time complexcity of this code is O(N * N)

    Node *temp = head;

    while(temp != NULL)
    {
        bool is_d = is_any_duplicate(temp, temp->value);

        if(is_d)
        {
          cout << "YES" << endl;
          return 0;
        }

        temp = temp->next;
    }

    cout << "NO" << endl;

}

bool is_any_duplicate(Node *head, int v)
{

    Node *temp = head->next;

    while (temp != NULL)
    {
        if (temp->value == v)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
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
