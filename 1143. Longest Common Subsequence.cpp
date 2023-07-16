//brute force TLE 
//checks for all possible cases
class Solution {
public:
    
    void helper1(int index,string text1,vector<string> &v1,vector<char> temp)
    {
        
        if(index==text1.size())
        {
            string s="";
            for(auto it:temp)
            {
                s+=it;
            }
            v1.push_back(s);
            return;
        }
        
        //take
        temp.push_back(text1[index]);
        helper1(index+1,text1,v1,temp);
        
        //not take
        temp.pop_back();
        helper1(index+1,text1,v1,temp);
        
        
    }
    
    void helper2(int index,string text2,vector<string> &v2,vector<char> temp2)
    {
       
        if(index==text2.size())
        {
            string s="";
            for(auto it:temp2)
            {
                s+=it;
            }
            v2.push_back(s);
            return;
        }
        
        //take
        temp2.push_back(text2[index]);
        helper2(index+1,text2,v2,temp2);
        
        //not take
        temp2.pop_back();
        helper2(index+1,text2,v2,temp2);
        
        
    }
    
    
    int longestCommonSubsequence(string text1, string text2) {
        vector<string> v1;
        vector<char> temp;
        helper1(0,text1,v1,temp);
        
        
        vector<string> v2;
         vector<char> temp2;
        helper2(0,text2,v2,temp2);
       
       
     unordered_set<string> set;
         
        //put v1 to set 
        for(int i=0;i<v1.size();i++)
        {
            set.insert(v1[i]);
        }
        
        
        int maxi=0;
        for(int j=0;j<v2.size();j++)
        {
            if(set.find(v2[j])!=set.end())
            {
                int x=v2[j].size();
                maxi=max(maxi,x);
            }
        }
        
        
        return maxi;
    }
};




////////////////////////////////////////////////////////////////////////////////////recursion<TLE>/////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    
    int helper(int i,int j,string text1,string text2)
    {
        if(i==0 || j==0)
        {
            return 0;
        }
        if(text1[i-1]==text2[j-1])
        {
            
           return 1+helper(i-1,j-1,text1,text2);
        }
       else{
      return  max(helper(i,j-1,text1,text2),helper(i-1,j,text1,text2));
       }
    }
    
    int longestCommonSubsequence(string text1, string text2) {
     int i=text1.size();
     int j=text2.size();
        
       return helper(i,j,text1,text2);
       
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////optimised dp(recursion + memoization)/////////////////////////////////////////////////////////////////
class Solution {
public:
    
    int helper(int i,int j,string &text1,string &text2,vector<vector<int>> &dp)
    {
        if(i==0 || j==0)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(text1[i-1]==text2[j-1])
        {
            
           return dp[i][j]=1+helper(i-1,j-1,text1,text2,dp);
        }
       else{
      return dp[i][j] =max(helper(i,j-1,text1,text2,dp),helper(i-1,j,text1,text2,dp));
       }
    }
    
    int longestCommonSubsequence(string text1, string text2) {
  
        
        int i=text1.size();
     int j=text2.size();
        
         vector<vector<int>> dp(i+1, vector<int>(j+1, -1));
       return helper(i,j,text1,text2,dp);
       
    }
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////optimiesd dp///////////////////////////////////////////////
////////////////////tabulation method//////////////////////////////////////////
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
      int i=text1.size();
      int j=text2.size();
        
      int dp[i+1][j+1];
        
        for(int x=0;x<=i;x++)
        {
            for(int y=0;y<=j;y++)
        {
            if(x==0 || y==0)
            {
                dp[x][y]=0;
            }
                
                else if(text1[x-1]==text2[y-1])
                {
                    dp[x][y]=1+dp[x-1][y-1];
                }
             
            else{
                dp[x][y]=max(dp[x-1][y],dp[x][y-1]);
            }    
                
                
        }
        }     
        
        return dp[i][j];
    }
};


