//brute force but TLE      [54/61 test case passed]
class Solution {
public:
    int maxArea(vector<int>& height) {
        int container=INT_MIN;
        for(int i=0;i<height.size()-1;i++)
        {
            for(int j=i+1;j<height.size();j++)
            {
                int index=abs(i-j);
                int mini=min(height[i],height[j]);
                int x=mini*index;
                container=max(x,container);
            }
        }
        return container;
    }
};


//optimised  two pointer
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int container=INT_MIN;
        
        while(l<r)
        {
          int index=abs(r-l);
            int mini=min(height[l],height[r]);
           int x=index*mini;
           container=max(container,x);
            
            if(height[l]<height[r])
                l++;
            
            else if(height[l]>height[r])
                r--;
            
            else if(height[l]==height[r])
                l++,r--;
            
        }
        return container;
    }
};
