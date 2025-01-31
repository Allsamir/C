#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *left = NULL;
    int val;
    Node *right = NULL;

    Node(int value) : val(value) {}
};

void level_wise_print(Node *root)
{
          queue<Node *> btree;
          btree.push(root); // pushing root node first;

          while(!btree.empty())
          {
                    Node *f = btree.front(); // root node;

                    cout << f->val << " "; // root node operation

                    btree.pop(); // after operation poping it from the queue

                    // pushing root's left if there is
                    if(f->left)
                       btree.push(f->left);

                    // pushing root's right if there is
                    if(f->right)
                       btree.push(f->right);
          }
}

int main (void)
{
          Node *root = new Node(10);
          Node *a = new Node(20);
          Node *b = new Node(30);
          Node *c = new Node(40);
          Node *d = new Node(50);
          Node *e = new Node(60);


          root->left = a;
          root->right = b;

          a->left = c;
          a->right = d;

          b->left = e;

          level_wise_print(root);
          return 0;
}
