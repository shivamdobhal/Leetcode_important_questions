ques-Given an array, rotate the array to the right by k steps, where k is non-negative.

  test case 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]


code-
        void rotate(vector<int>& nums, int k) {
            if(k>=nums.size())                //to maintain bounding
            {
              k=k%nums.size();
            }
            reverse(nums.begin(),nums.end());                  //reverse all
            reverse(nums.begin(),nums.begin()+k);              //reverse begin to [k-1]
            reverse(nums.begin()+k,nums.end());                //reverse  [k] to end
             
                                            }
    
  
