class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        
       
           
        vector<vector<int>> adj[n+1];     //adj list
        
            for(int i=0;i<roads.size();i++)  //adj list
            {
                      adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
                      adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
                   
            }
            
            queue<int> q;
            vector<int> vis(n+1,0);
            q.push(1);
            
            while(!q.empty())  //BFS
            {
                    int node=q.front();
                    q.pop();
                   vis[node]=1;
                    
                    for(auto &it: adj[node])
                    {
                        if(!vis[it[0]])
                        {
                                vis[it[0]]=1;
                                q.push(it[0]);
                        }
                    }
            }
            
            int mini=INT_MAX;
            
            for(int i=0;i<roads.size();i++){
                    if(vis[roads[i][0]]==1 && vis[roads[i][1]]==1)
                    {
                            mini=min(mini,roads[i][2]);
                    }
                    
            }
            return mini;
                    
            
            
    }
};
