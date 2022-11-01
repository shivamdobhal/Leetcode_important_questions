73. Set Matrix Zeroes
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.


Example 1:
            input-[1,1,1],                       output= [1,0,1],
                  [1,0,1],                               [0,0,0],
                  [1,1,1]                                [1,0,1]

                    

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

Example 2:
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

solution---whereever you find 0 make that column and row 0
            approach---make two dummy array for row and one for column.
   class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
            int row=matrix.size();                   //calculate row size
            int col=matrix[0].size();                 //calculate column size
          
          vector < int > arr1(row,-1);              //dummy vector for row
          vector  <int> arr2(col,-1);                 //dummy vector for column
            //loop to enter 0 in the two dummy vector
                for(int i=0;i<row;i++)                    
            {
                    for(int j=0;j<col;j++)
                    {
                            if(matrix[i][j]==0)
                            {
                                    arr1[i]=0;
                                    arr2[j]=0;
                            }
                    }
            }
            
               //loops for sending values to matrix[][]
             for(int i=0;i<row;i++)
            {
                    for(int j=0;j<col;j++)
                    {
                            if(arr2[j]==0 || arr1[i]==0)
                            {
                                    matrix[i][j]=0;
                            }
                            
                    }
             }
            
     
    }
};
