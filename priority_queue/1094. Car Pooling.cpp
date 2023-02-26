class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        unordered_map<int,int> map;

        for(int i=0;i<roads.size();i++)
        {
            map[roads[i][0]]++;
            map[roads[i][1]]++;
        }
       long long ans=0;
        priority_queue< long long> pq;
        
            for(auto it :map)
            {
                    pq.push(it.second);
            }
            
        while(!pq.empty())
        {
                ans=ans+pq.top()*n;
                pq.pop();
                n--;
                
        }
            
        return ans;
    }
};
