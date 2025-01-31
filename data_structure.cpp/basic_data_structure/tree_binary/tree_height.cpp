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

    while (!btree.empty())
    {
        Node *f = btree.front(); // root node;

        cout << f->val << " "; // root node operation

        btree.pop(); // after operation poping it from the queue

        // pushing root's left if there is
        if (f->left)
            btree.push(f->left);

        // pushing root's right if there is
        if (f->right)
            btree.push(f->right);
    }
}

int max_height(Node *root)
{
          if(root == NULL)
             return 0;

          if(root->left == NULL && root->right == NULL)
             return 0;

          int l = max_height(root->left);
          int r = max_height(root->right);

          return max(l, r) + 1;
}

int main(void)
{
          int r_value;
          cin >> r_value;

          Node *root = new Node(r_value);

          // pushing the first node manually
          queue<Node *> btree;

          if(root->val != -1)
              btree.push(root);

          while(!btree.empty())
          {
                    // first store the root to start the operations
                    Node *f = btree.front();

                    // start the operations
                    // in every iteration take 2 inputs at a time because it is a binary tree
                    int l,r;
                    cin >> l >> r;

                    // check if l or r is -1 or not
                    // create 2 new node with the value
                    Node *lN = NULL, *rN = NULL;
                    if (l != -1)
                        lN = new Node(l);

                    if(r != -1)
                       rN = new Node(r);

                    // connecting the created nodes with the root
                    if(lN)
                      f->left = lN;

                    if(rN)
                      f->right = rN;

                    // after operation pop the root
                    btree.pop();

                    // pushing the next nodes to queue
                    if(f->left)
                       btree.push(f->left);

                    if(f->right)
                      btree.push(f->right);
          }

          level_wise_print(root);

          cout << max_height(root) << endl;

          return 0;
}
