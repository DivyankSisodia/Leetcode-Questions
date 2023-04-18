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
    int maxDepth(TreeNode* root) {
        vector<vector<int>> v;
        queue<TreeNode*> q;
        q.push(root);
        if(root == NULL) return 0;
        
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            for(int i=0; i<size; i++){
                TreeNode* top = q.front();
                q.pop();
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
                temp.push_back(top->val);
            }
            v.push_back(temp);
        }
        return v.size();
    }
};