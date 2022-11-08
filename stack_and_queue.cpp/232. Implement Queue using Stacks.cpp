Input
["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 1, 1, false]
.................................................................................................
  solution----using two stacks one for pushing and one for poping
  stack<int>stack1,stack2;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack1.push(x);
    }
    
    int pop() {
            int x,y,p;
        while(!stack1.empty())                        //putting all the values of stack 1 to stack 2 
        {
                x=stack1.top();
                stack2.push(x);
                stack1.pop();
        }
            p=stack2.top();
            stack2.pop();                           //poping takes place
            while(!stack2.empty())
            {
                   y=stack2.top();
                    stack1.push(y);
                    stack2.pop();
            }
          
            return p;
    }
    
    int peek() {          
          int x,y,p;
        while(!stack1.empty())
        {
                x=stack1.top();
                stack2.push(x);
                stack1.pop();
        }
          
            p=stack2.top(); 
             while(!stack2.empty())
            {
                   y=stack2.top();
                    stack1.push(y);
                    stack2.pop();
            }
            return p;
    }
    
    bool empty() {
        if(stack1.empty())                            //if stack is empty then return true else false
                return true;
            else 
                return false;    
    }
