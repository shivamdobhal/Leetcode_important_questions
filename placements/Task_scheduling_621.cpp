class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> map;
        int max_count=0;
            int size=tasks.size();
            for(int i=0;i<size;i++)
            {
                    map[tasks[i]]++;
                    max_count=max(max_count,map[tasks[i]]);
            }
            
            int ideal=(max_count-1)*(n+1);
            
             for(auto i:map)                  // second represents the value in the map and first signifies the corresponding key of the map
            {
                     if(i.second==max_count)
                             ideal++;
    }
            int ans=max(ideal,size);
            return ans;
    }
};
