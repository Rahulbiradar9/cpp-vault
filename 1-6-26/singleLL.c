#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int new_data){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    
    node->data = new_data;
    node->next = NULL;

    return node;
}

int main(){

    struct Node* head = createNode(10);

    head->next = createNode(20);

    head->next->next = createNode(30);

    head->next->next->next = createNode(40);

    struct Node* temp = head;

    while (temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL){
        struct Node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}