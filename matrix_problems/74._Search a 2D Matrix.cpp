Example 1:

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
  
Example 2:

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
  
  
  solution-------------------------------------------------------------------------------------------------------------------------------------------------------
                   brute force with time complextiy =o[n*n]
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
            
            for(int i=0;i<row;i++)
            {
                 for(int j=0;j<col;j++)
            {
              if(matrix[i][j]==target)
              {
                      return true;
              }
            }                   
            }
            return false;
    }
};

---------------------------------------------------------------------------------------------------------------------------------------------------------------------
                              using binary search                     time_complexity=O(log(n*m)   space_complexity=O(1) 
     bool searchMatrix(vector<vector<int>>& matrix, int target)    {
     
             int row=matrix.size();
             int col=matrix[0].size();
             int l=0;
             int h=(row*col)-1;
            int mid;
            while(l<=h)               //binary search
            { 
                    mid=(l+(h-l)/2);
                  if(matrix[mid/col][mid%col]==target)
                          return true;
                  if(matrix[mid/col][mid%col]<target)
                          l=mid+1;
                    else
                            h=mid-1;
            }
            return false;
    }                                                                                      
