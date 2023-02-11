ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return {};
        int count=0;
        ListNode *ptr=head;
        ListNode *last=ptr;                       //stores the address of last node          
        while(ptr!=NULL)                          //counting total nodes in list and getting the address of last node
        {
                last=ptr;
                count++;
                ptr=ptr->next;
        }
        
         if(k%count==0)          //means no reversals possible
        {
                return head;
        }
        
        int no_of_reversals;
        
        if(count>k)
        {
              no_of_reversals=count-k;  
        }
       else if(count<k)
        {
              no_of_reversals=count-(k%count);  
        }
        
        ListNode *ptr2=head;
       int n=1;
        
        
        while(n!=no_of_reversals)
        {
                n++;
                ptr2=ptr2->next;
                
        }
        
        last->next=head;                   //put address of head to the next of last node
        head=ptr2->next;
        ptr2->next=NULL;                 //for the last node
        
        return head;
        
}
};
