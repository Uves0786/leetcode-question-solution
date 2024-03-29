class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
         vector<int> res;
        if(!root) return res;
    queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
           vector<int>  level;
            int size = q.size();
            for(int i=0; i<size; i++){
                TreeNode*  node = q.front();
            q.pop();
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                level.push_back(node->val);  
            }
            int max_value = *max_element(level.begin(), level.end());
            res.push_back(max_value);
        }
        return res;
    }
};