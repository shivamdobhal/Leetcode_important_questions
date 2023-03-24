class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        set<pair<int,int>> set;
            vector<int> adj[n];
            
            for(int i=0;i<connections.size();i++)
            {
                    adj[connections[i][1]].push_back(connections[i][0]);
                    adj[connections[i][0]].push_back(connections[i][1]);
                    set.insert({connections[i][0],connections[i][1]});
                    
            }
            
            vector<int> vis(n,0);
            queue<int> q;
            int count=0;
            
            q.push(0);
            
            while(!q.empty())
            {
                    int node=q.front();
                    q.pop();
                    vis[node]=1;
                     for(auto it:adj[node])
                     {
                             if(vis[it]==0)   //unvisited
                             {
                                     if(set.count({node,it}))
                                             count++;
                                     vis[it]=1;
                                     q.push(it);
                             }
                     }
                     
            }
            
            return count;
    }
};
