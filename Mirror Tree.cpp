//Editorial: https://www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/
class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* root) {
        if(!root)
          return;
        mirror(root->left);
        mirror(root->right);
        swap(root->left,root->right);
    }
};
