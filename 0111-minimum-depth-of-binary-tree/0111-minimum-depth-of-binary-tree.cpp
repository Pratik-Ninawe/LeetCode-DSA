/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepths(TreeNode *root)
    {
        if(root == NULL)
        {
            return INT_MAX;
        }
        if(root->left == NULL && root->right == NULL)
        {
            return 1;
        }
        return min(minDepths(root->left),minDepths(root->right))+1;
    }
    int minDepth(TreeNode* root) {
        int res=minDepths(root);
        return (res == INT_MAX)?0:res;
    }
};