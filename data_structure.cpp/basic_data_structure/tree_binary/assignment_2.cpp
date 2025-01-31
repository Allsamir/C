#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *left = NULL;
    int val;
    Node *right = NULL;

    Node(int value) : val(value) {}
};

vector<int> dc;

void print_leaf_nodes_dc(Node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        dc.push_back(root->val);
        return;
    }

    print_leaf_nodes_dc(root->left);
    print_leaf_nodes_dc(root->right);
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
            btree.push(f->left);

        if (f->right)
            btree.push(f->right);
    }

    print_leaf_nodes_dc(root);

    sort(dc.rbegin(), dc.rend());

    for (const auto i : dc)
    {
        cout << i << " ";
    }
}
