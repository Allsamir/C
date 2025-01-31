#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *left = NULL;
    int val;
    Node *right = NULL;

    Node(int value) : val(value) {}
};

int sumx = 0;

int upperNodes(Node *root)
{
    if(root == NULL)
      return 0;

    if(root->left == NULL && root->right == NULL)
       return 0;

    sumx+= root->val;

    int l = upperNodes(root->left);
    int r = upperNodes(root->right);

    return l + r + 1;
}

int main(void)
{
          int x;
          cin >> x;

          Node *root = NULL;
          queue<Node *> btree;

          if (x != -1)
             root = new Node(x);

          if(root)
            btree.push(root);

          while(!btree.empty())
          {
                    Node *f = btree.front();

                    int y,z;
                    cin >> y >> z;
                    Node *l = NULL, *r = NULL;

                    if(y != -1)
                       l = new Node(y);

                    if(z != -1)
                       r = new Node(z);

                    if(l)
                      f->left = l;

                    if(r)
                      f->right = r;

                    btree.pop();

                    if(f->left)
                      btree.push(f->left);

                    if(f->right)
                      btree.push(f->right);

          }


          int sum = upperNodes(root);

          cout << sumx << endl;
}
