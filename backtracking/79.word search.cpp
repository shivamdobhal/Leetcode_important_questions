class Solution {
public:
    
    bool helper(vector<vector<char>>& board, string word,int drow[],int dcol[],int row,int col,int count)
    {
      if(count==word.size())
            return true;
        
        if(word.size()==1 && word[0]==board[row][col])
        {
            return true;
        }
        
         if(row<0 || row>=board.size() || col<0 || col>=board[0].size() || board[row][col]!=word[count] || board[row][col]=='*')
             return false;
        
        bool res=false;
        
        int temp=board[row][col]; 
        
       board[row][col]='*';
        
        for(int i=0;i<4;i++)
        {
            int newrow=row+drow[i];
            int newcol=col+dcol[i];
            
          res= res|| helper(board,word,drow,dcol,newrow,newcol,count+1);  
        
        }
      board[row][col]=temp;
     return res;     
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
       
        int drow[4]={-1,0,+1,0};
        int dcol[4]={0,+1,0,-1};
        
        int row=board.size();
        int col=board[0].size();
        
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                
               if(board[i][j]==word[0])
               {
                  if( helper(board,word,drow,dcol,i,j,0) )
                    return true;
               }
            }
        }
        
        return false;
     
    }
};
