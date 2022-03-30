//Editorial: https://www.geeksforgeeks.org/detect-and-remove-loop-in-a-linked-list/
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* fast=head,*slow=head;
        while(fast and fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
              break;
        }
        if(slow!=fast)
          return;
        slow=head;
        if(slow==fast)
        {
            while(fast->next!=slow)
              fast=fast->next;
        }
        else
        {
            while(fast->next!=slow->next)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        fast->next=NULL;
        return;
    }
};
