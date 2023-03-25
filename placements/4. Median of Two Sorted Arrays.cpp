brute force-----------------------------------------------------
  ------------------------------------------------------------------------------------------------------------------------------------------------------------------
  class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int> merge;
            for(int i=0;i<nums1.size();i++)
            {
                    merge.push_back(nums1[i]);
            }
            
            for(int j=0;j<nums2.size();j++)
            {
                    merge.push_back(nums2[j]);
            }
            
            sort(merge.begin(),merge.end());
            int size=merge.size();
            int l=0;
            int r=size-1;
            double ans;
            int mid= (l+r)/2;
            if(size%2==0) //even
            {
                 
                  ans=double(merge[mid]+merge[mid+1])/2; 
            }
            else if(size%2!=0) //odd 
            {                    
                    ans=merge[mid];
            }
            return ans;
            
    }
};



-----------------------------------------------------------------------------------------better solution----------------------------------------------------------
  class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {     
         if(nums2.size()<nums1.size())   
                 return findMedianSortedArrays(nums2,nums1);
        int s1=nums1.size();
        int s2=nums2.size();
            int l=0;
            int r=s1;
            int total=s1+s2;
         while(l<=r)
         {
                 int mid1=(l+r)/2;
                 int mid2=(s1+s2+1)/2-mid1;
                 
                 int l1=mid1==0?INT_MIN:nums1[mid1-1];
                 int r1=mid1==s1?INT_MAX:nums1[mid1];
                 
                 int l2=mid2==0?INT_MIN:nums2[mid2-1];
                 int r2=mid2==s2?INT_MAX:nums2[mid2];
                 
                 if(l1<=r2 && l2<=r1)
                 {
                         if(total%2==0) //even
                         {
                                 return (max(l1,l2)+min(r1,r2))/2.0;
                         }
                         else
                         {
                                 return max(l1,l2);
                         }
                                 
                         
                 }
                 
                 else if(l1>r2){
                         r=mid1-1;
                 }
                 
                 else
                 {
                         l=mid1+1;
                 }
                         
         }
          return 0.0;      
    }
};
