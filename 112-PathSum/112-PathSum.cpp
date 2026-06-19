// Last updated: 6/19/2026, 7:42:49 PM
1class Solution {
2public:
3    bool hasPathSum(TreeNode* root, int targetSum) {
4
5        if (root == NULL)
6            return false;
7
8        if (root->left == NULL && root->right == NULL) {
9
10            return targetSum == root->val;
11        }
12
13        return hasPathSum(root->left, targetSum - root->val) ||
14               hasPathSum(root->right, targetSum - root->val);
15    }
16};