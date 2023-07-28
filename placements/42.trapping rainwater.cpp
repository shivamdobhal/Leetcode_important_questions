class Solution {
public:
    int trap(vector<int>& height) {
        int trap=0;
        int lmax[height.size()],rmax[height.size()];
        int maxi=0;
        for(int i=0;i<height.size();i++)
        {
            
            maxi=max(height[i],maxi);
                lmax[i]=maxi;
        }
        maxi=0;
        
         for(int i=height.size()-1;i>=0;i--)
        {
            
            maxi=max(height[i],maxi);
                rmax[i]=maxi;
        }
        
       for(int i=0;i<height.size();i++)
        {
            int x=min(lmax[i],rmax[i])-height[i];
            trap=trap+x;
        }
        return trap;
    }
};
