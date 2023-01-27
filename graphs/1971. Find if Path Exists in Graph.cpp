 //BFS traversal
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
          
              vector<int> visited(n,0);  //visited vector
              vector<int> adj[n];       //list
              visited[source]=1;       //so that q does not remain empty in starting
              queue <int> q;
              q.push(source);
            
            //creating adjacency list
            for(int i=0;i<edges.size();i++)
            {
                    int x=edges[i][0];
                    int y=edges[i][1];
                    adj[x].push_back(y);
                    adj[y].push_back(x);
                    
            }
            
            while(!q.empty())
            {
                    int node=q.front();
                    q.pop();
                    visited[node]=1;
                    if(node==destination) return true;
              
                    for(auto it:adj[node])
                    {
                            if(!visited[it])
                            {
                                    visited[it]=1;
                                    q.push(it);
                            }
                    }
                    
            }
            return false;
            
    }
};
