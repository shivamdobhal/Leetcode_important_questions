using map
------------------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
         
            for(int i=0;i<nums.size();i++)
            {
                    map[nums[i]]++;
            }
            
            for(auto it:map)
            {
                    if(it.second==1)
                    {
                            return it.first;
                            break;
                    }
            }
            return 0;
    }
};


using bit manipulation
-------------------------------------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=0;
            for(int i=0;i<nums.size();i++)
            {
                    xorr=xorr^nums[i];
                    
            }
            return xorr;
    }
};
