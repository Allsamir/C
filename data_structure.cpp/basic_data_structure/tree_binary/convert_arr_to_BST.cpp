#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *left = NULL;
    int val;
    Node *right = NULL;

    Node(int value) : val(value) {}
};


void print_tree(Node *root)
{
  if(root == NULL)
    return;

  queue<Node *> btree;
  btree.push(root);

  while(!btree.empty())
  {
    Node * f = btree.front();

    btree.pop();

    cout << f->val << " ";

    if(f->left)
      btree.push(f->left);

    if(f->right)
      btree.push(f->right);
  }
}

Node * convert_arr_BST(int arr[], int l_index, int r_index)
{
          if(l_index > r_index)
            return NULL;

          int mid = (l_index + r_index) / 2;

          Node *root = new Node(arr[mid]);

          Node * lN = convert_arr_BST(arr, l_index, mid - 1);
          Node * rN = convert_arr_BST(arr, mid + 1, r_index);
          
          root->left = lN;
          root->right = rN;

          return root;
}

int main(void)
{
    int n;
    cin >> n;

    int arr[n];

    for(int x = 0; x < n; x++)
    {
          cin >> arr[x];
    }

    Node *root = convert_arr_BST(arr, 0, n - 1);

    print_tree(root);

    return 0;
}
