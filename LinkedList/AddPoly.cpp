Node* addPolynomial(Node *p1, Node *p2)
    {
        //Your code here
        Node * head=NULL;
        Node * prev=NULL;
        while(p1&&p2)
        {
            if(!head)p1->pow<p2->pow?head=p2:head=p1;
            if(p1->pow>p2->pow)
            {
                prev=p1;
                while(p1&&p1->next)
                {
                    if(p1->next->pow>p2->pow)
                    {
                        p1=p1->next;
                        prev=p1;
                    }
                    else
                    {
                        break;
                    }
                }
                Node* temp=p1->next;
                p1->next=p2;
                p1=temp;
            }
            else if(p1->pow<p2->pow)
            {
                prev=p2;
                while(p2&&p2->next)
                {
                    if(p2->next->pow>p1->pow)
                    {
                        p2=p2->next;
                        prev=p2;
                    }
                    else
                    {
                        break;
                    }
                }
                Node* temp=p2->next;
                p2->next=p1;
                p2=temp;
            }
            else
            {
                if(prev)prev->next=p1;
                p1->coeff+=p2->coeff;
                prev=p1;
                p1=p1->next;
                p2=p2->next;
            }
        }
        if(p1&&!p2)
        {
            prev->next=p1;
        }
        if(!p1&&p2)
        {
            prev->next=p2;
        }
        return head;
    }