class MedianFinder {
public:
        priority_queue<int> maxheap;
        priority_queue<int,vector<int>,greater<int>> minheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxheap.size()==0 || maxheap.top()>num)
        {
                maxheap.push(num);
        }          
           else
            {
                    minheap.push(num);
            }
            
         
             if(minheap.size()>maxheap.size()+1)
         {
                 int x=minheap.top();
                   minheap.pop();
                 maxheap.push(x);
         }
            
            else if(maxheap.size()>minheap.size()+1)
         {
                 int x=maxheap.top();
                   maxheap.pop();
                 minheap.push(x);
         }
            
    }
    
    double findMedian() {
double mid;
            if(maxheap.size()==minheap.size())
            {
                   double top1=maxheap.top();
                    double top2=minheap.top();
                    
                    mid=(top1+top2)/2;
            }
            
           else if(maxheap.size()<minheap.size())
            {
                   mid=minheap.top();
                   
            }
            
           else if(maxheap.size()>minheap.size())
            {
                   mid=maxheap.top();
            }
            
            return mid;
            
    }
};

