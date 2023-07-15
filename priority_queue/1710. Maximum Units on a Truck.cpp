class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<boxTypes.size();i++)
        {
            pq.push({boxTypes[i][1],boxTypes[i][0]});
        }
        
        int res=0;
        
        while(truckSize>=0 && !pq.empty())
        {
            int topfirst=pq.top().first;
            int topsecond=pq.top().second;
            pq.pop();
            
            int store=truckSize;
            truckSize=truckSize-topsecond;
            
            if(truckSize>=0)
              {
                  res=res+topfirst*topsecond;
              }
            else{
                    res=res+store*topfirst;
                break;
                }
            
            
            
            
        }
 
        return res;
    }
};
