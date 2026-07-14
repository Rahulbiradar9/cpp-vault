#include<iostream>

class Node{
    public:

    float data;

    Node* p;
    Node* n;

    Node(float d){
        data = d;
        p = nullptr;
        n = nullptr;
    }
};

int main() {

    Node* head = new Node(10);

    head->n = new Node(20);
    head->n->p = head;

    head->n->n = new Node(30);
    head->n->n->p = head->n->n;

    Node* temp = head;
    while ( temp != nullptr){
        std::cout << temp->data;
        if ( temp->n != nullptr){
            std::cout << "  ";
        }
        temp = temp->n;
    }
    return 0;
}