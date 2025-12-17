class Solution {
  public:
    void dfs_check(int node,vector<int>& vis,vector<int>& ans,vector<vector<int>>&adj){
        vis[node]=1;
        ans.push_back(node);
        for (int x : adj[node]){
            if(vis[x]==0){
                dfs_check(x,vis,ans,adj);        
            }
        }
    }
    
    vector<int> dfs(vector<vector<int>>& adj) {
        int i=0;
        vector<int> ans;
        vector<int> vis(adj.size(),0);
        for(i;i<adj.size();i++){
            if(vis[i]==0){
                dfs_check(i,vis,ans,adj); 
            }
        }
        return ans;
    }
};