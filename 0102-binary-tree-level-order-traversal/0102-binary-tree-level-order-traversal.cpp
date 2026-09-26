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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;  // Decalre the answer vector.
        if(root == NULL) return ans;
        queue<TreeNode*> q; //Decalre the queue.
        q.push(root); //push the root inside thr queue.
        while(!q.empty()){ //now after we will dot his until the queue gets empty.
            int n = q.size();
            vector<int> store; //datastructure to store the node.
            int i;
            for(i=0;i<n;i++){ //we will traverse till the size of queue.
                TreeNode* node = q.front(); // now we store the first node or front node to the node attribute.
                q.pop(); // then we pop it for comparison.
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                store.push_back(node->val); //push the root node.
            }
            ans.push_back(store); // then store the nodes int the answer.
        }
        return ans;
    }
};