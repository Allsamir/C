#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *left = NULL;
    int val;
    Node *right = NULL;

    Node(int value) : val(value) {}
};

void outer_level_b_l(Node *root)
{
          if(root == NULL)
             return;

          if(!root->left)
          {
              outer_level_b_l(root->right);
          }
          else
          {
              outer_level_b_l(root->left);
          }

          cout << root->val << " ";
}

void outer_level_b_r(Node *root)
{
          if(root == NULL)
            return;

          cout << root->val << " ";

          if(!root->right)
          {
              outer_level_b_r(root->left);
          }
          else
          {
              outer_level_b_r(root->right);
          }
}

int main(void)
{
    int x;
    cin >> x;

    Node *root = NULL;
    queue<Node *> btree;

    if (x != -1)
        root = new Node(x);

    if (root)
        btree.push(root);

    while (!btree.empty())
    {
        Node *f = btree.front();

        int y, z;
        cin >> y >> z;
        Node *l = NULL, *r = NULL;

        if (y != -1)
            l = new Node(y);

        if (z != -1)
            r = new Node(z);

        if (l)
            f->left = l;

        if (r)
            f->right = r;

        btree.pop();

        if (f->left)
        {
            btree.push(f->left);
        }

        if (f->right)
        {
            btree.push(f->right);
        }
    }

    if(root->left)
    {
        outer_level_b_l(root->left);
    }

    if(root)
       cout << root->val << " ";

    if(root->right)
        outer_level_b_r(root->right);
}
