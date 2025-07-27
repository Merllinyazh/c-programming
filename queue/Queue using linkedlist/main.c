#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};


struct Node *front=NULL,*rear=NULL;

void enqueue(int val){
    struct Node *createNode=(struct Node*)malloc(sizeof(struct Node));
    createNode->data=val;
    createNode->next=NULL;
    if(front==NULL){
        front=createNode;
    }
    else{
        rear -> next=createNode;
    }
    rear -> createNode;
}

void dequeue(){
    struct Node *temp=front;
    front=front->next;
    free(temp);
}

int main()
{
    printf("Hello World");

    return 0;
}