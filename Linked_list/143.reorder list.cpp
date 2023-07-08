
//brute force TLE 
// passed  9/12 test case

class Solution {
public:
    void reorderList(ListNode* head) {
        
    int count=0;
        ListNode* c=head;
        
        while(c!=NULL)
        {
            c=c->next;
            count++;
        }
        
        if(count==0 || count==1 || count==2)
            return ;
        
        if(count==3 || count==4)
        {
            ListNode *temp=head;
            ListNode *x=temp;
            while(x->next->next!=NULL)
            {
                x=x->next;
                
            }
             ListNode* s= new ListNode();
            s=temp->next;
            temp->next=x->next;
            x->next->next=s;
            x->next=NULL;
            return;
        }
        
        
      else{  
        ListNode *curr=head;
          
        while(curr->next!=NULL)
        {
            ListNode *ptr=curr;
            while(ptr->next->next!=NULL)
            {
                ptr=ptr->next;
            }
            
            ListNode* store= new ListNode();
            store=curr->next;
            ptr->next->next=store;
            curr->next=ptr->next;
            
            ptr->next=NULL;
            
            
            curr=store;
        }
      }
        
    }
};





//optimised by stack
class Solution {
public:
    void reorderList(ListNode* head) {
        
    int count=0;
        ListNode* ptr=head;
    
        stack<ListNode*> s;
        
        while(ptr!=NULL)
        {
            s.push(ptr);
            ptr=ptr->next;
            count++;
        }
        
        if(count==0 || count==1 || count==2)
            return ;
        
        ListNode* curr=head;
        for(int i=0;i<count/2;i++)
        {
            ListNode* topaddr=s.top();
            s.pop();
            topaddr->next=curr->next;
            curr->next=topaddr;
            curr=curr->next->next;
      
        }
        curr->next=NULL;
        
       
    }
};

