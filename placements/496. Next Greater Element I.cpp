class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res(nums1.size());
        
        for(int i=0;i<nums1.size();i++)
        {
            bool found=false;
            for(int j=0;j<nums2.size();j++)
            {
                if(found==true && nums2[j]>nums1[i])
                {
                    res[i]=nums2[j];           
                    break;
                }
                
                if(nums2[j]==nums1[i])
                {
                    found=true;
                }
                
                if(j==nums2.size()-1 && found==true)
                {
                    res[i]=-1;                   
                }
        
            }
            
        }
      return res;
    }
};
