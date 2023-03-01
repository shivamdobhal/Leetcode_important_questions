class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        priority_queue<pair<int,int>> pq;
        int index;
        int extra=4;           // for other medals rather than gold,silver,bronze
            for(int i=0;i<n;i++)
            {
                    index=i;
                    pq.push({score[i],index});
            }
          vector<string> res(n);
           
           while(!pq.empty())
           {
                   int x=pq.top().first;
                   int y=pq.top().second;
                   if(pq.size()==n)
                   {
                           res[y]="Gold Medal";
                           pq.pop();
                   }
                  else if(pq.size()==n-1)
                   {
                           res[y]="Silver Medal";
                           pq.pop();
                   }
                  else if(pq.size()==n-2)
                   {
                           res[y]="Bronze Medal";
                           pq.pop();
                   }
                 else
                 {
                         
                         string str=to_string(extra);
                         res[y]=str;
                         extra++;
                         pq.pop();
                 }
                           
                   
           }
            return res;
            
    }
};
