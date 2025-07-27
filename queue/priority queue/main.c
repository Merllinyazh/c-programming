#include <stdio.h>
int size;
int data[100];
int priority[100];
int index=0;
int max=0;

void enqueue(int val,int pri)
{
    if(index==size)
    {
        printf("the queue is full\n");
        return;
    }
    data[index]=val;
    priority[index]=pri;
    index++;
    //printf("%d %d/n",val,pri);
}

void dequeue()
{
    if (index=0){
        printf("the queue is empty");
    }
    for(int i=0;i<index;i++){
        if(priority[i]>priority[max]) max=i;
        
    }
    for(int i=0;i<index-1;i++){
        data[i]=data[i+1];
        priority[i]=priority[i+1];
    }
    index--;
}

void display(){
    for(int i=0;i<index;i++){
        printf("%d\t",data[i]);
    }printf("\n");
}


int main()
{
    int n,val,pri;
    printf("Enter the size of the arrays: ");
    scanf("%d",&size);
    while(1)
    {
        printf("1)Enter the Data and Priority\n 2)Delete the Data\n 3)Display\n");
        printf("Enter Your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:{
                printf("Enter the Value and Priority: ");
                scanf("%d %d",&val,&pri);
                enqueue(val,pri);
                break;
            }
            case 2:{
                dequeue();
                break;
            }
            case 3:{
                display();
                break;
            }
        }
    }

    return 0;
}