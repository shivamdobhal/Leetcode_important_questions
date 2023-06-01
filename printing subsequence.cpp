#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void helper(int index,vector<char> v,vector<char> &ans)
{
    if(index>=v.size())
    {
        for(auto it:ans)
        {
            cout<<it;
        }
        cout<<endl;
        return ;
    }

    ans.push_back(v[index]);            
    helper(index+1,v,ans);            //take
    ans.pop_back();
    helper(index+1,v,ans);    //not take
}

int main(){
    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    v.push_back('e');
    

    
    vector<char> ans;
    helper(0,v,ans);
    
    return 0;
}


