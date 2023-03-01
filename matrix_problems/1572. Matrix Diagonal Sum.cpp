class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=mat.size();
        int sum=0,j=row-1;
            
            //for primary diagonal
            for(int i=0;i<row;i++)
            {
                    sum=sum+mat[i][i];
            }
            
            //for sec diagonal
            for(int i=0;i<row;i++)
            {
                   
                            if(i!=j)
                            {
                                    sum=sum+mat[i][j];
                            }
                    j--;                    
            }
            return sum;
    }
};
