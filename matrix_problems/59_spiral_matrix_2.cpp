
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>> res(n, vector<int> (n));
           // vector <vector<int>> res(n-1,-1);
            int r1,r2,c1,c2;
            r1=0;
            c1=0;
            r2=n-1;
            c2=n-1;
           int value=1;
         //  vector<int> res;
          
            
            while(r2>=r1 && c1<=c2)
            {
            
              
            //left to right traverse
              
            for(int i=c1;i<=c2;i++)
            {
                res[r1][i]=value;
                    value++;
            }
              
             //traverse up to down
              
             for(int j=r1+1;j<=r2;j++)
            {
                     res[j][c2]=value;
                     value++;
             }
              
            //traverse right to left
              
            for(int k=c2-1;k>=r1;k--)
            {
                     res[r2][k]=value;
                     value++;
             }
              
             //  traverse  down to up
              
             for(int m=r2-1;m>c1;m--)
            {
                     res[m][c1]=value;
                     value++;
             }
            r1++,r2--,c1++,c2--;
    }  
             return res;
    }
};
