//Editorial: Just iterate to the required node and return the value.
int getNthFromLast(Node *head, int n)
{
    Node* temp=head;
    int sz=0;
    while(temp)
    {
        temp=temp->next;
        sz+=1;
    }
    int req=sz-(n-1);
    if(req<0)
      return -1;
    int ans;
    temp=head;
    int i=1;
    while(temp)
    {
        if(i==req)
          return temp->data;
        temp=temp->next;
        i+=1;
    }
    return -1;
}
