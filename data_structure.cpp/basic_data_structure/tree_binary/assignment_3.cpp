#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *left = NULL;
    int val;
    Node *right = NULL;

    Node(int value) : val(value) {}
};

int max_height(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

int main(void)
{
    int x;
    cin >> x;

    Node *root = NULL;
    queue<Node *> btree;
    int sz = 1;

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
            sz++;
            btree.push(f->left);
        }

        if (f->right)
        {
            sz++;
            btree.push(f->right);
        }
    }

    int height = max_height(root);

    int formula = pow(2, height) - 1;

    formula == sz ? cout << "YES" << endl : cout << "NO" << endl;
}
