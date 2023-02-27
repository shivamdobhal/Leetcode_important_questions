class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
     vector<vector<int>> v;
     int index;       
     int row=score.size();
      
     priority_queue<int> pq;
     for(int i=0;i<row;i++)
     {
             pq.push(score[i][k]);
     }
      
     while(!pq.empty())
     {
             int t=pq.top();
             for(int i=0;i<row;i++)
             {
                     if(t==score[i][k])
                     {
                             index=i;
                             break;
                     }                             
             }
             v.push_back(score[index]);
             pq.pop();
             
     }

         
            return v;
            
    }
};
