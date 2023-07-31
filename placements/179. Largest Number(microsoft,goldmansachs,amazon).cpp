class Solution {
public:
    
   static bool comparator(string a,string b)
    {
        if(a+b>b+a) 
            return true;
        else
            return false;
    }
    
    string largestNumber(vector<int>& nums) {
        
        vector<string> v;
        for(int i=0;i<nums.size();i++)             //first convert all numbers to string
        {
            v.push_back(to_string(nums[i]));
        }
        
        sort(v.begin(),v.end(),comparator);             //custom sort
        
        string str="";
        
        for(int j=0;j<v.size();j++)
        {
            str+=v[j];
        }
        if(str[0]=='0')
            return "0";
        
        
        return str;
        
    }
};
