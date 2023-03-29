class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
            int n=pattern.size();
            int count=0;
            for(int i=0;i<s.size();i++)
            {
                    if(s[i]==' ')
                            count++;
                            
            }
            if(count!=n-1)
            {
                    return false;
            }
            
            
        unordered_map<char,string> map;
         int index=0; 
         unordered_set<string> set;   
        for(int i=0;i<pattern.size();i++)
        {
                if(map.find(pattern[i])==map.end())
                {
                        string temp="";
                        while(s[index]!=' ' && index<s.size())
                        {
                        
                                temp=temp+s[index];
                         index++;       
                        }
                        map[pattern[i]]=temp; 
                        if(set.count(temp)>0)
                                return false;
                        set.insert(temp);
                        index++;
                }
                
                else
                {
                       string temp="";
                      while(s[index]!=' ' && index<s.size())
                        {
                        
                                temp=temp+s[index];
                         index++;       
                        }  
                        index++;
                      if(map[pattern[i]]!=temp  )
                              return false;
                }
        }
            return true;
    }
};
