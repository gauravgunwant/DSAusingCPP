#include<bits/stdc++.h>
using namespace std;
#define MAX 5

int q[MAX];
int front =-1;
int rear = -1;

void Enqueue(int x){
    if ((rear +1)% MAX == front){
        cout << "Queue Overflow" << endl;
    }else {
        if (front ==-1){
            front =0;
            rear =0;
        } else {
            rear = (rear+1) % MAX; // increament!
        }
        q[rear] = x; 
    }
}
void Dequeue(){
    if (front ==-1 ){
        cout << "Queue Underflow!" << endl;
    } else {
        cout << q[front] << " is popped!" << endl;
        if (front == rear){
            front =-1;
            rear =-1;
        } else{
            front = (front+1) % MAX;
        }
    }
}

int Peek(){
    if (front == -1){
        cout << "Queue is empty" << endl;
        return -1;
    } else{
        return q[front];
    }
}

bool isEmpty(){
    return front == -1;
}

int main(){
    int ch, x;
    while (true){
        cout << "1.Enqueue\n2.Dequeue\n3.Peek\n4.Empty\n5.Exit"<< endl;
        cin >> ch;
        switch(ch){
            case 1: 
                cout << "Enter value you want to push! " ;
                cin >> x;
                Enqueue(x);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                if (Peek() ==-1){
                    cout << "Nothing is present at top" << endl;
                } else {
                    cout << Peek() << " is at the top!" << endl;
                }
                break;
            case 4:
                if (isEmpty()){
                    cout << "Empty!" << endl;
                } else{
                    cout << "Not Empty!" << endl;
                }
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid! Enter again: " << endl;
        }
    }
}