solution-1]using sorting

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
            sort(nums.begin(),nums.end());
             int maxi=nums[n-1]*nums[n-2]*nums[n-3];
            int posneg=nums[0]*nums[1]*nums[n-1];
            int res=max(maxi,posneg);
            return res;
            
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
solution 2 without sorting
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1=INT_MIN; //without sorting
        int max2=INT_MIN;
        int max3=INT_MIN;
        int min1=INT_MAX;
        int min2=INT_MAX;
        long res;
            for(int i=0;i<nums.size();i++)
            {
                    if(nums[i]>=max1)
                    {
                            max3=max2;
                            max2=max1;
                            max1=nums[i];
                    }
                   else if(nums[i]<=max1 && nums[i]>=max2)
                    {
                            max3=max2;
                            max2=nums[i];
                    }
                    
                     else if(nums[i]<=max2 && nums[i]>=max3)
                    {
                            max3=nums[i];
                    }
                    
                    if(nums[i]<=min1)
                    {
                            min2=min1;
                            min1=nums[i];
                    }
                   else if(nums[i]>=min1 && nums[i]<=min2)
                    {
                            min2=nums[i];
                    }
                   
            }
               
         res=max(max1*max2*max3,min1*min2*max1);   
         return res;   
    }
};
