// enqueue, dequeue, front, rear, and isEmpty
#include<iostream>
#define MAX 1000

using namespace std;

class Queue{

    int front;
    int rear;
    int size;
    int arr[MAX];

public:
    Queue() {front = 0; rear = -1; size = 0;}
    
    bool isEmpty(){
        if (size == 0)
            return true;
        else 
            return false;
    }

    bool isFull(){
        if (size == MAX)
            return true;
        else
            return false;
    }

    bool enqueue(int x){
        if (isFull()) {
            cout << "Queue Overflow\n";
            return false;
        } else {
            rear = (rear + 1) % MAX; // Circular increment
            arr[rear] = x;
            size++;
            cout << x << " enqueued into queue\n";
            return true;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue Underflow\n";
            return 0;
        }
        else {
            int item = arr[front];
            front = (front+1) % MAX;
            size--;
            return item;
        }
    }

    // Get the front item of the queue
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return 0;
        } else {
            return arr[front];
        }
    }

    // Get the rear item of the queue
    int getRear() {
        if (isEmpty()) {
            std::cout << "Queue is Empty\n";
            return 0;
        } else {
            return arr[rear];
        }
    }


};


int main(){

    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << queue.dequeue() << " dequeued from queue\n";
    std::cout << "Front item is " << queue.getFront() << "\n";
    std::cout << "Rear item is " << queue.getRear() << "\n";

    return 0;
}