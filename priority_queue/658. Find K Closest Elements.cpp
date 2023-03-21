class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;  //max heap
            
         for(int i=0;i<arr.size();i++)
         {
                 int diff=abs(arr[i]-x);
                 
                 if(pq.size()!=k)
                 {
                         pq.push({diff,arr[i]});        //sort pq according to difference
                 }
                 else
                 {
                         int peek=pq.top().first;
                         if(peek>diff)
                         {
                                 pq.pop();
                                 pq.push({diff,arr[i]});
                         }
                 }                 
         }
            vector<int> v;
            while(!pq.empty())
            {
                    int val=pq.top().second;
                    v.push_back(val);
                    pq.pop();
            }
            sort(v.begin(),v.end());
            
            return v;
            
            
    }
};
