class Solution {
  public:
  vector<vector<int>> adj;
    void fn(vector<vector<int>>gr, int v){
        adj.resize(v);
        for(int i=0; i<gr.size(); i++){
            for(int j=0; j<gr[0].size(); j++){
                if(gr[i][j]==1 and i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                    gr[j][i]=0;
                }
            }
        }
    }
    void dfs(int i, vector<vector<int>> adj, vector<bool> &vis){
        vis[i]=1;
        for(int x:adj[i]){
            if(vis[x]==0){
                dfs(x,adj,vis);
            }
        }
    }
    int numProvinces(vector<vector<int>> gr, int v){
        vector<vector<int>> grph = gr;
        fn(grph,v);
        vector<bool> vis(v,0);
        int a=0;
        for(int i=0; i<v; i++){
            if(vis[i]==0){
                a++;
                dfs(i,adj,vis);
            }
        }
        return a;
    }
};