class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0;
        int maxi=0;
        int curr=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            maxi=max(maxi,nums[i]+i);
            
            if(i==curr)
            {  jump++;
            
            curr=maxi;
            }
            
            
        }
            
            return jump;
        
    }
};
