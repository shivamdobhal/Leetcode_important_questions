https://youtu.be/VG_TjZ9wWfE?t=813    (aryan mittal)
to connect n computers minimum n-1 wires are required; 
..........................................................................................................................................
  class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)
                return -1;
            
            vector<int> adj[n];
            for(int i=0;i<connections.size();i++)
            {
  adj[connections[i][0]].push_back(connections[i][1]);
  adj[connections[i][1]].push_back(connections[i][0]);
            }
              
           //vis
            vector<int> vis(n,0);
            queue<int> q;
            int count=0;
            
            for(int i=0;i<n;i++)
            {
                    q.push(i);
                    
                    if(!vis[i])
                    {
                            while(!q.empty())
                            {
                                    int node=q.front();
                                    q.pop();
                                    vis[node]=1;
                                    
                                    for(auto it: adj[node])
                                    {
                                            if(vis[it]==0)
                                            {
                                            vis[it]=1;
                                            q.push(it);
                                            }
                                    }
                            }
                            count++;
                    }
            }
            return count-1;
            
    }
};
