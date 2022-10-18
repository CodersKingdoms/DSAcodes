#include<stdio.h> 
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node* add_at_last (struct node*,int);
void certainpos (struct node*,int,int);
int main()
{
    struct node *head=malloc(sizeof(struct node));
   
    head->data=10;
    head->link=NULL;
    
    struct node *ptr ;
    ptr=malloc(sizeof(struct node));
    ptr->data=15;
    ptr->link=NULL;
    head->link=ptr;
    
    ptr= add_at_last (ptr,20);
    ptr= add_at_last (ptr,30);
    ptr= add_at_last (ptr,40);
    ptr= add_at_last (ptr,50);
    int d=77,position=3;
    certainpos (head,position,d);
      struct node *temp=head;
       while(temp!=NULL)
       {
           printf("entered data :%d \n",temp->data);
           temp=temp->link;
       }
     return 0;
}

struct node* add_at_last (struct node *ptr,int d)
{
    struct node *temp;
    temp=malloc(sizeof(struct node));
    temp->data=d;
    temp->link=NULL;
    ptr->link=temp;
    ptr=ptr->link;
    return ptr;
    
    
}
void certainpos (struct node *head,int d,int position)
{
    struct node *ptr=head;
    struct node *ptr2=malloc(sizeof(struct node));
    ptr2->data=d;
    ptr2->link=NULL;
    while(position!=2)
    {
        ptr=ptr->link;
        position--;
    }
    ptr2->link=ptr->link;
    ptr->link=ptr2;
}















