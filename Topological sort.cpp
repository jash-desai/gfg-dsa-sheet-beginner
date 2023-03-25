class Solution
{
	public:
	void rec(int v, vector<bool>&vis, stack<int>&s, vector<int> adj[]){
	    vis[v]=1;
	    for(auto x:adj[v]){
	        if(!vis[x]){
	            rec(x, vis, s, adj);
	        }
	    }
	    s.push(v);
	}
	vector<int> topoSort(int v, vector<int> adj[]){
	    stack<int> s;
	    vector<int> a;
	    vector<bool> vis(v,0);
	    for (int i = 0; i <v; i++){
            if (vis[i] == false) rec(i, vis, s, adj);
	    }
	    while (!s.empty()){
            a.push_back(s.top());
            s.pop();
        }
        return a;
	}
};