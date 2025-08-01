#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data,priority;
    struct Node *next;
};

struct Node *head=NULL;

void enqueue(int val,int pri)
{
    struct Node *createNode = (struct Node*) malloc(sizeof(struct Node));
    createNode->data=val;
    createNode->priority=pri;
    createNode->next= NULL;
    
    if(head==NULL || pri>head->priority)
    {
        createNode->next=head;
        head=createNode;
    }
    else{
        struct Node *temp=head;
        while(temp!=NULL && temp->next->priority>pri)
        {
            temp=temp->next;
        }
        createNode->next=temp->next;
        temp->next=createNode;
    }
   
}



void display()
{a
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
   int n,val,pri;
   while(1)
   {
       printf(" 1)Insert Data\n 2)Delete Data\n 3)Display Data\n");
       printf("Enter your choice:  ");
       scanf("%d",&n);
       switch(n)
       {
           case 1:{
               printf("Enter the Data and priority");
               scanf("%d %d",&val,&pri);
               enqueue(val,pri);
               display();
               break;
           }
       }
   }

    return 0;
}