class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
              
            int n=isConnected.size();
                vector<int> vis(n+1,0);
                
                queue<int> q;
                
        vector<int> adj[n];
                                               //create an adjacency list from matrix
            for(int i=0;i<n;i++)
            {
                    for(int j=0;j<n;j++)
            {
                    
                            if(isConnected[i][j]==1 &&i!=j)
                            {
                            adj[i].push_back(j);
                            adj[j].push_back(i);
                            }
            }
            }
            
            int count=0;
            for(int i=0;i<n;i++)
            {
                    q.push(i);
                    if(!vis[i])
                    {
                             count++;                      
                            while(!q.empty())             //bfs start
                            {
                                int node=q.front();
                                q.pop();
                                vis[node]=1;
                                        for( auto it:adj[node])
                                        {
                                                if(!vis[it])
                                                {
                                                        vis[it]=1;
                                                        q.push(it);
                                                }
                                        }
                             }
                            
                    }
                   
            }
            return count;
    }
        
    
};
