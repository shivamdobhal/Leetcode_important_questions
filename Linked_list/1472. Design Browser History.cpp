class BrowserHistory {
public:
        struct listnode{
                listnode* prev;
                string val;
                listnode* next;
                
                listnode(string data)
                {
                        prev=NULL;
                        next=NULL;
                        val=data;
                }
             };
        
        int size=0;
        listnode* head;
        listnode* curr;
    BrowserHistory(string homepage) {
        head=new listnode(homepage);
            curr=head;
            size++;
    }
    
    void visit(string url) {
        listnode *newnode=new listnode(url);
            newnode->prev=curr;
            curr->next=newnode;
            curr=newnode;
            size++;
    }
    
    string back(int steps) {
        int newlen=size;
         while(newlen!=(size-steps) && curr->prev!=NULL)
         {
                 curr=curr->prev;
                 newlen--;
         }   
           return curr->val;
    }
    
    string forward(int steps) {
          while(steps!=0 && curr->next!=NULL)
         {
                 curr=curr->next;
                 steps--;
         }   
           return curr->val;
    }
};
