#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int data){
        this->size=size;
        arr= new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]= element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top== -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(56);
    st.push(26);
    st.push(54);
    st.push(11);
    st.push(99);

    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

}