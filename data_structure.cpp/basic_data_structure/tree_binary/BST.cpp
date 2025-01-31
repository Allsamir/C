#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *left = NULL;
    int val;
    Node *right = NULL;

    Node(int value) : val(value) {}
};

void print_b_tree(Node *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";

    print_b_tree(root->left);
    print_b_tree(root->right);
}

bool search_b_tree(Node *root, int searchVal)
{
    if (root == NULL)
        return false; // this return is for value or if we not find the value

    if (root->val == searchVal)
        return true; // this return is for value or if we find the value

    if (searchVal > root->val)
    {
       return search_b_tree(root->right, searchVal); // this return is function return
    }
    else
    {
       return search_b_tree(root->left, searchVal); // this return is function return
    }
}

void inset_int_BST(Node *&root, int val)
{
    if(root == NULL)
    {
        root = new Node(val);
        return;
    }

    if(root->val > val)
    {
        if(root->left == NULL)
        {
            root->left = new Node(val);
            return;
        }
        else
           inset_int_BST(root->left, val);
    }
    else
    {
        if(root->right == NULL)
        {
            root->right = new Node(val);
            return;
        }
        else
          inset_int_BST(root->right, val);
    }
}

int main(void)
{
    int x;
    cin >> x;

    Node *root = NULL;

    if (x != -1)
        root = new Node(x);

    queue<Node *> btree;

    if (root)
        btree.push(root);

    while (!btree.empty())
    {
        Node *f = btree.front();
        btree.pop();

        int l, r;
        Node *lN = NULL, *rN = NULL;

        cin >> l >> r;

        if (l != -1)
            lN = new Node(l);

        if (r != -1)
            rN = new Node(r);

        if (lN)
            f->left = lN;

        if (rN)
            f->right = rN;

        if (f->left)
            btree.push(f->left);

        if (f->right)
            btree.push(f->right);
    }


    int searchVal;
    cin >> searchVal;

    bool is_there = search_b_tree(root, searchVal);

    inset_int_BST(root, searchVal);

    cout << is_there << " ";
    cout << endl;
    print_b_tree(root);
    return 0;
}
