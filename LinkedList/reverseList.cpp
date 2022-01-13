struct Node* reverseList(struct Node *head)
{
        if(head->next==NULL)return head;
        struct Node* ptr,*before,*after;
        before=head;
        ptr=head->next;
        after=ptr->next;
        head->next=NULL;
        while(after)
        {
            ptr->next=before;
            before=ptr;
            ptr=after;
            after=after->next;
        }
        ptr->next=before;
        return ptr;
}