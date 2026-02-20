// User function Template for C++

class Solution {
  public:
    int countNodes(Node* root) {
        // Write your code here
        if(!root) return 0;
        int lh=countNodes(root->left);
        int rh=countNodes(root->right);
        return 1+lh+rh;
    }
};
