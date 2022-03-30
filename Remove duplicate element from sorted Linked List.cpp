//Editorial: Just keep on iterating the list if duplicate is found just append to the next value.
Node *removeDuplicates(Node *head)
{
    Node* temp;
    temp=head;
    while(temp)
    {
        while(temp->next and temp->data==temp->next->data)
        {
            temp->next=temp->next->next;
        }
        temp=temp->next;
    }
    return head;
}
