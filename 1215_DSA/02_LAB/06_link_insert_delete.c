#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next ;
}Node;

Node* createNode(int value);
Node* insertAtHead(Node* head , int value);
Node* insertAtTail(Node* head, int value);
Node* insertAtPosition(Node* head, int value, int pos);
Node* deleteNode(Node* head, int target);

void deleteList(Node* head);
void printList(Node* head);


int main(){
    freopen("data/input.txt", "r", stdin);
    struct Node* head = NULL;
    int value;

    for (int i = 0; i < 5; i++)
    {
        scanf(" %d", &value);
        head = insertAtTail(head, value);
    }
    // sohih printlist
    printList(head);
    //insert korar por printlist
    head = insertAtPosition(head, 100, 1);
    printList(head);
    // node delete korar por printlist
    head = deleteNode(head, 10);
    printList(head);
    // shob delete korar por printlist
    deleteList(head);
    head = NULL;
    printList(head);
    
    return 0;
}

Node* createNode(int value){
    Node* newNode = (struct Node* )malloc(sizeof(struct Node));
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

Node* insertAtPosition(Node* head, int value, int pos){
    if(pos == 0 ) return insertAtHead(head, value);
    if(pos < 0 ) return head;

    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp!= NULL; i++) temp = temp->next;
    if (temp == NULL) return head;

    Node* newNode = createNode(value);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

Node* deleteNode(Node* head, int target){
    if(head == NULL) return NULL;
    if(head->data == target){
        Node* toDelete = head;
        head = head->next;
        free(toDelete);
        return head;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != target)temp = temp->next;
    
    if(temp->next != NULL){
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        free(toDelete);
    }
    
    return head;
}

void deleteList(Node* head){
    Node* temp ;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    
}
void printList(Node* head){
    Node* temp = head;
    while (temp != NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    if(head != NULL) printf("END\n");
    
}
