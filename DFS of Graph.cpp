	class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int x, vector<int> adj[], vector<int> &a, vector<bool> &vis){
        if(vis[x]){
           return; 
        }
        vis[x]=1;
        a.push_back(x);
        for(int k : adj[x]){
            if(vis[k]) continue;
            else dfs(k, adj, a, vis);
        }
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[]){
        vector<int> a;
        vector<bool> vis(v,0);
        dfs(0,adj,a,vis);
        return a;
    }
};