class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n=piles.size();
        priority_queue<int> pq;
         int ans=0;   
          for(int i=0;i<n;i++)
          {
                  pq.push(piles[i]);
          }
            
            while(k>0)
            {
                    int top=pq.top();
                    pq.pop();
                    int pile=top-(top/2);
                    pq.push(pile);
                    k--;
            }
            while(!pq.empty())
            {
                    ans=ans+pq.top();
                    pq.pop();
            }
            return ans;
            
    }
};
