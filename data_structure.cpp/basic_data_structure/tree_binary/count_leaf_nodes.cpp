#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *left = NULL;
    int val;
    Node *right = NULL;

    Node(int value) : val(value) {}
};

void leve_wise_printing(Node *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";

    leve_wise_printing(root->left);
    leve_wise_printing(root->right);
}

int count_leaf_nodes_b_tree(Node *root)
{
    if (root == NULL)
        return 0;

    if(root->left == NULL && root->right == NULL)
    {
          return 1;
    }

    int l = count_leaf_nodes_b_tree(root->left);
    int r = count_leaf_nodes_b_tree(root->right);

    return l + r;
}

int main(void)
{
    int root_value;
    cin >> root_value;

    Node *root = NULL;
    if (root_value != -1)
        root = new Node(root_value);

    queue<Node *> btree;

    if (root)
        btree.push(root);

    while (!btree.empty())
    {
        // taking out
        Node *f = btree.front();

        // working with f;
        int l, r;
        cin >> l >> r;

        Node *lN = NULL, *rN = NULL;

        if (l != -1)
            lN = new Node(l);

        if (r != -1)
            rN = new Node(r);

        if (lN)
            f->left = lN;

        if (rN)
            f->right = rN;

        // after working poping the f;
        btree.pop();

        // if there is child nodes then push to work with the child nodes
        if (f->left)
            btree.push(f->left);

        if (f->right)
            btree.push(f->right);
    }

    leve_wise_printing(root);
    cout << endl;
    cout << count_leaf_nodes_b_tree(root) << endl;
    return 0;
}
