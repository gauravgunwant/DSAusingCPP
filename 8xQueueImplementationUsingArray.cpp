#include<bits/stdc++.h>
using namespace std;
#define MAX 5

int q[MAX];
int front = -1;
int rear = -1;

void enqueue(int value){ 
    if (rear == MAX-1){
        cout << "OverFlow!!" << endl;
    }else{
        if (front == -1){
            front = 0;
        }
        rear++;
        q[rear] = value;
    }
}

void dequeue(){
    if (front > rear || front == -1){
        cout << "UnderFlow!" << endl;
    } else {
        cout << q[front] <<" is popped from queue" << endl;
        front++; 
        if (front > rear){
            front = -1;
            rear = -1;
        }
    }
}

int peek(){
    if (front > rear){
        cout << "Queue Underflow" << endl;
        return -1;
    }
    return q[front];
}

bool isEmpty(){
    return front == -1;
}

int main() {
    int ch, value;
    cout << "1.Enqueue\n2.Dequeue\n3.Peek\n4.Empty\n5.Exit" << endl;
    while (true) {
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "Enter what you want to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                cout << "The front-most element is: " << peek() << endl;
                break;
            case 4:
                if (isEmpty()) {
                    cout << "Queue is Empty!" << endl;
                } else {
                    cout << "Queue is not empty" << endl;
                }
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice, try again!" << endl;
        }
    }
    return 0;
}