#include<stdio.h>
#include<stdlib.h>

// eikhane node disi jate eita bhitorer pointer re janiate pari re node bolteo ekta struct ache 

typedef struct Node {
    int data;
    struct Node *next ;
}Node;

Node* createNode(int value){
    Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

Node* insertAtHead(Node* head , int value){
    Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
    return head;
}

Node* insertAtTail(Node* head, int value){
    Node* newNode = createNode(value);
    if (head == NULL) return newNode;
    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
    return head;
}

void printList(Node* head){
    Node* temp = head;
    while (temp!= NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

int main(){
    struct Node* head = NULL;
    int value;

    for (int i = 0; i < 5; i++)
    {
        scanf(" %d", &value);
        head = insertAtTail(head, value);
    }
    printList(head);
    return 0;
}
