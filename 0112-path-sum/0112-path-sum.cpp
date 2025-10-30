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
    bool hasPathSumHelper(TreeNode *root, int targetSum, int currentSum){
        // base case
        if(root==NULL){
            return false;
        }
        currentSum += root->val;
        if(root->left == NULL && root->right == NULL){
            if(currentSum == targetSum)return true;
            else return false;
        }
        // recursive case
        return hasPathSumHelper(root->left,targetSum,currentSum)||hasPathSumHelper(root->right,targetSum,currentSum);

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return false;
        if(root->left == NULL && root->right == NULL){
            if(root->val == targetSum)return true;
            else return false;
        }
        int currentSum = 0;
        return hasPathSumHelper(root,targetSum,currentSum);
    }
};