class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        queue<int> q;
        q.push(0);
        vector<int> a;
        vector<bool> vis(v,0);
        while(!q.empty()){
            int t = q.front();
            q.pop();
            vis[t]=1;
            for(int x:adj[t]){
                if(!vis[x]) q.push(x);
                vis[x]=1;
            }
            a.push_back(t);
        }
        return a;
    }
};