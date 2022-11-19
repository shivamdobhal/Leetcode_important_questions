Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
  
  class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
             
            sort(intervals.begin(),intervals.end());
            vector<vector<int>> res;
            vector<int> ans=intervals[0];
            if(intervals.size()==0)
                     return res;
            
            for(int i=1;i<intervals.size();i++) 
            {
                   if(ans[1]>=intervals[i][0])
                   {
                      ans[1]=max(ans[1],intervals[i][1]);     
                   }
                    else
                    {
                           res.push_back(ans);
                            ans=intervals[i];
                    }
            }
            res.push_back(ans);
            return res;
    }
};
