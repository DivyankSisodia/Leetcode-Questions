//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

    bool solve(int st, vector<int>adj[], vector<int> &col){
        col[st] = 0;
        queue<int> q;
        q.push(st);
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto it: adj[node]){
                if(col[it] == -1){
                    col[it] =! col[node];
                    q.push(it);
                }
                else if( col[it] == col[node]){
                    return false;
                }
            }
        }
        return true;
    }

	bool isBipartite(int v, vector<int>adj[]){
	    // Code here
	    vector<int> col(v,-1);
	    for(int i=0; i<v; i++){
	        if(col[i] == -1){
	            if(solve(i, adj, col) == false){
	                return false;
	            }
	        }
	    }
	    return true;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends