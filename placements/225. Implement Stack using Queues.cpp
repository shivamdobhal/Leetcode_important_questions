//using 2 queue

class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        
        if(q1.size()==1)
        {
            int p1=q1.front();
            q1.pop();
            return p1;
        }    
        
        else{
            while(q1.size()!=1)
            {
                int p2=q1.front();
                q1.pop();
                q2.push(p2);
            }
            int p3=q1.front();
            q1.pop();
            while(q2.size()!=0)
            {
                int p4=q2.front();
                q2.pop();
                q1.push(p4);
            }
            
            return p3;
            
        }
    }
    
    int top() {
         if(q1.size()==1)
        {
            return q1.front();
        }    
        
        else{
            while(q1.size()!=1)
            {
                int p2=q1.front();
                q1.pop();
                q2.push(p2);
            }
            int p3=q1.front();
            q2.push(p3);
            q1.pop();
            while(q2.size()!=0)
            {
                int p4=q2.front();
                q2.pop();
                q1.push(p4);
            }
            
            return p3;
            
        }
    }
    
    bool empty() {
        if(q1.size()==0)
            return true;
        
        return false;
    }
};

