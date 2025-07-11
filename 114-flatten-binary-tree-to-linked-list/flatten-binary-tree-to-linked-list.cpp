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
    void flatten(TreeNode* root) {
        if(!root || (!root->left && !root->right))
            return;
        while(root){
            if(root->left){
                TreeNode* temp=root->left;
                while(temp->right){
                    temp=temp->right;
                }
                temp->right=root->right;
                root->right=root->left;
                root->left=nullptr;
            }
            root=root->right;
        }
        
    }
};