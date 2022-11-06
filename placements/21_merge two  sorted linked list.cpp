example1
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:
Input: list1 = [], list2 = []
Output: []

Example 3:
Input: list1 = [], list2 = [0]
Output: [0]


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//space complexity=0(n) time complexity=0(n)

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
         if(list2==NULL) return list1;
            
            ListNode *list3=new ListNode(0);             // new node created=[0,null]
            ListNode *temp=list3;
           
            while(list1!=NULL && list2!=NULL)
            {
                    if(list2->val<=list1->val)
                    {
                            temp->next=list2;
                        
                         list2=list2->next;
                            temp=temp->next;
                            
                    }
                    
                    else if(list2->val>list1->val)
                    {
                            temp->next=list1;
                          
                         list1=list1->next; 
                            temp=temp->next;
                    }
            }
            
            if(list2==NULL)  temp->next=list1;
            if(list1==NULL)  temp->next=list2;
            return list3->next;
           
    }
};
