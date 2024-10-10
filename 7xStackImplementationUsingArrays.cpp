#include<bits/stdc++.h>
using namespace std;
#define MAX 5

int st[MAX];
int top = -1;

void push(int value){
    if (top == MAX -1){
        cout << "Stack Overflow!"<< endl;
    }else {
        top++ ;
        st[top] = value;
    }
}

void pop(){
    if (top == -1){
        cout << "Underflow" << endl;
    } else {
        cout << st[top] << "is popped from array!" << endl; 
        top--;
    }
}

int peek(){
    if (top == -1){
        cout << "Underflow" << endl;
    } else {
        return st[top];
    }
    return 0;
}
bool isEmpty(){
    if (top == -1){
        return true;
    } else {
        return false;
    }
}
int main(){
    int ch, value;
    cout << "1.Push\n2.Pop\n3.Peek\n4.Empty\n5.Exit" << endl;
    while(ch!=0){
        cin >> ch;
        switch (ch) { 
            case 1:
                cout << "Enter what you want to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                cout << "Your top-most element is: " << peek() << endl ;
                break;
            case 4:
                if (isEmpty() == true){
                    cout << "Empty!" << endl;
                } else{
                    cout << "Not empty" << endl;
                }
                break;
            default: 
                exit(0);
        }
    }  
    return 0;     
}