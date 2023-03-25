class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<long long> adj[n];
        for(int i=0;i<edges.size();i++)   //adj list
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
          vector<long long> v;
          int count;  
          vector<long long> vis(n,0);
          int component=0;
         queue<long long> q;

         for(int i=0;i<n;i++)
         {
             q.push(i);
             if(!vis[i])
             {
                     count=1;
                 while(!q.empty())
                 {
                     int node=q.front();
                     q.pop();
                     vis[node]=1;

                     for(auto it:adj[node])
                     {
                         if(!vis[it])
                         {
                             vis[it]=1;
                             q.push(it);
                                 count++;
                         }
                     } 
                         
                 }
                 v.push_back(count);    
                //component++; 
             }
         }  //end of for loop
            
            
            long long ans=0;
         for(int i=0;i<v.size();i++)
         {
                long long temp=v[i]*(n-v[i]);
                         ans=ans+temp;
                 
         }
                   
         return ans/2;
    }
};
