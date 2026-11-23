#include<stdio.h>
#include<stdlib.h>

// eikhane node disi jate eita bhitorer pointer re janiate pari re node bolteo ekta struct ache 

typedef struct Node {
    int data;
    struct Node *next ;
}Node;

int main(){
    Node* head = NULL;

    Node* first = (struct Node*)malloc(sizeof(struct Node));
    Node* second = (struct Node*)malloc(sizeof(struct Node));

    head = first;
    first->next = second;
    second->next = NULL;
    
    first->data = 10;
    second->data = 20;

    Node* temp = head;
    while (temp!= NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }

    return 0;
}
