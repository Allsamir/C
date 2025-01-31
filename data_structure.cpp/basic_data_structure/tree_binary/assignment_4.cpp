#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *left = NULL;
    int val;
    Node *right = NULL;

    Node(int value) : val(value) {}
};

void level_wise_print(Node *root, int levell)
{
    queue<pair<Node *, int>> b_pair;
    vector<pair<int, int>> b_v;

    b_pair.push({root, 0});

    while (!b_pair.empty())
    {
        Node *node = b_pair.front().first;

        int level = b_pair.front().second;

        b_v.push_back({node->val, level});

        b_pair.pop();

        if (node->left)
            b_pair.push({node->left, level + 1});

        if (node->right)
            b_pair.push({node->right, level + 1});
    }
    bool f = true;
    for (const auto s : b_v)
    {
        if (s.second == levell)
        {
            f = false;
            cout << s.first << " ";
        }

        // cout << "Level: " << s.second << " Value: " << s.first << endl;
    }

    if(f)
    {
        cout << "Invalid" << endl;
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
    {
        btree.push(root);
    }

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

    int user_level;
    cin >> user_level;

    level_wise_print(root, user_level);
}
