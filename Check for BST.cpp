//Editorial: https://youtu.be/f-sj7I5oXEI
bool check(Node* root,int mnval,int mxval)
    {
        if(!root)
          return true;
        if(root->data<=mnval or root->data>=mxval)
          return false;
        return check(root->left,mnval,root->data) and check(root->right,root->data,mxval);
    }
    bool isBST(Node* root) 
    {
        return check(root,INT_MIN,INT_MAX);
    }
