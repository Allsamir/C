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

void insert_at_tail(Node *&head, Node *&tail, int val);
bool is_sorted_ace(Node *&head, int count);

int main(void)
{
          int n;
          Node *head = NULL;
          Node *tail = NULL;
          int count = 0;
          while(true)
          {
                    cin >> n;

                    if(n == -1)
                    {
                              break;
                    }
                    
                    count++;
                    insert_at_tail(head, tail, n);
          }

          bool is_s_a = is_sorted_ace(head, count);

          if(is_s_a)
          {
                    cout << "YES" << endl;
          }
          else
          {
                    cout << "NO" << endl;
          }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
          Node *newNode = new Node(val);

          if(head == NULL)
          {
                    head = newNode;
                    tail = newNode;
                    return;
          }

          tail->next = newNode;
          tail = newNode;
}

bool is_sorted_ace(Node *&head, int count)
{
          Node *temp = head;

          for(int x = 1; x < count; x++)
          {
                    if(temp->next->value < temp->value)
                    {
                              return false;
                    }

                    temp = temp->next;
          }

          return true;
}
