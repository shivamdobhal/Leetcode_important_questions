class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<int> vis(arr.size(),false);
        vis[start]=true;
        queue<int> q;
        q.push(start);
        
        
        while(!q.empty())
        {
            int i=q.front();
            q.pop();
            
            
            int plusres=i+arr[i];
            int minusres=i-arr[i];
            
          
      /* not use 
      if(  arr[plusres]==0  || arr[minusres]==0)
      return true;
                   ----------------------------------------------------->because it will give runtime error  as plusres AND minusres can contain negative values also           
        */  
          if(arr[i]==0 )                                            
                return true;
      
            
            if(plusres>=0 && plusres<arr.size() && vis[plusres]!=true)
            {
                q.push(plusres);
                vis[plusres]=true;
            }
            
            
             if(minusres>=0 && minusres<arr.size() && vis[minusres]!=true)
            {
                q.push(minusres);
                vis[minusres]=true;
            }
            
        }
        return false;
            
        
    }
}; 
