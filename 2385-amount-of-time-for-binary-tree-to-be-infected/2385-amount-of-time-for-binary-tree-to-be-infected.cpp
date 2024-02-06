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
    using ull = unsigned long long;
public:
    /*Binary tree is like a directed graph and we need to make this graph undirected to make this tree undirected graph we have to make adjacency list of all the nodes after that we simply need to do bfs 
    step 1: make unordered map of int and vector<int> int is node val vector is its neighbour.
    Inside vector firstly we will add parent of node then left and right child of nodde.
    TC=0(N)+0(N) ONE FOR BFS AND ANOTHER FOR MAKING MAKE GRAPHQ
    */
    void BuildAdj(TreeNode* root,unordered_map<ull,vector<ull>> &mp,ull parent) {
        if(!root) return;
        if(parent!=-1)  mp[root->val].push_back(parent);
        if(root->left)  mp[root->val].push_back(root->left->val);
         if(root->right)  mp[root->val].push_back(root->right->val);
        BuildAdj(root->left,mp,root->val);
        BuildAdj(root->right,mp,root->val);
    }
    int ans=0;
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<ull,vector<ull>> mp;
        BuildAdj(root,mp,-1);
        queue<ull> q;
        q.push(start);
        unordered_set<ull>visited;
        visited.insert(start);
        while(!q.empty()) {
            ull n = q.size();
            
            while(n--) {
                int temp = q.front();
                q.pop();
                for(ull & child : mp[temp]) {
                    if(visited.find(child)==visited.end())  {
                        q.push(child);
                        visited.insert(child);
                    }
                }
            }
            ans++;
        }
        return ans-1;
    }
};