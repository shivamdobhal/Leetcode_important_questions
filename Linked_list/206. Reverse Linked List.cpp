Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
.................................................................................................................................................................
  ListNode* reverseList(ListNode* head) {
        ListNode *ptr=NULL;         // ptr is an pointer which stores the previous address of head
         ListNode *temp;            // pointer which holds the next address of head so that link will not loss
            while(head!=NULL)
            {
                   temp=head->next;
                    head->next=ptr;
                     ptr=head;                 // updating ptr            
                     head=temp;                //updating head           
            }
            return ptr;
            
    }
