class Solution {
public:
        void sum(int index,vector<int>& candidates,int target,vector<vector<int>> &v,vector<int> &ds)
        {
                if(target==0)
                {
                        v.push_back(ds);
                        return;
                }
                for(int i=index;i<candidates.size();i++)
                {
                        if(i>index && candidates[i]==candidates[i-1])  continue;
                        if(candidates[i]>target) break;
                        ds.push_back(candidates[i]);
                        sum(i+1,candidates,target-candidates[i],v,ds);
                        ds.pop_back();
                }
        }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> v;
        vector<int> ds;    
           sum(0,candidates,target,v,ds);
            return v; 
    }
};
