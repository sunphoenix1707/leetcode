/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    //BFS
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()) {
            int n = q.size();
            vector<int> level;
            while(n--) {
                Node* temp = q.front();
                q.pop();
                level.push_back(temp->val);
                for(Node* child: temp->children) 
                {
                    q.push(child);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};