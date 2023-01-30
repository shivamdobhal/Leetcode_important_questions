210{leetcode} course scheduler 2
   topological sort + BFS
==>topological sort work on directed acyclic graphs.
  ==>in this instead of creating visited vector we create indegree vector to calculate indegree
     and if in degree is 0 push it to the queue and to the answer vector
............................................................................................................................
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
            int n=prerequisites.size();
            vector<int> indegree(numCourses,0);
            
            vector <int> adj[numCourses];
            vector<int> ans; 
            
            //put to indegree vector
            for(int i=0;i<n;i++)
            {
                    int k=prerequisites[i][0];
                    indegree[k]++;
           }
            
               //putting the value to queue whose indegree is 0
             queue<int> q;
            for(int i=0;i<numCourses;i++)
            {
                    if(indegree[i]==0)
                            q.push(i);
            }
            
            //creating adjacency list
            for(int i=0;i<n;i++)
            {
                    int x= prerequisites[i][0];
                    int y= prerequisites[i][1];
                    adj[x].push_back(y);
                    adj[y].push_back(x);
            }
            
       
            
            while(!q.empty())
            {
                    int node=q.front();
                    q.pop();
                    ans.push_back(node);
                    
                    for(auto it:adj[node])
                    {
                              indegree[it]--;              //decrement the indegree
                            if(indegree[it]==0)
                            {                                
                                    q.push(it);
                            }
                    }
            }
         if(ans.size()==numCourses) return ans;
         else
                 return {};
                 
            
    }
};
