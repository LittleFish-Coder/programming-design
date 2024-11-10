#include<iostream>

using namespace std;

class Node {
    int data;
    Node* next = nullptr;

    public:
        Node(int val) {
            data = val;
        }
};

class LinkedList {
    Node* head;
    Node* tail;

    LinkedList() {
        // init the list with a dummy node which makes removing a node from the beginning of list easier
        head = new Node(-1);
        tail = head;
    }

    void insertEnd() {}
};

int main(){


    return 0;
}