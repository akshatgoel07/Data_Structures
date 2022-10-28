#include <iostream>
using namespace std;

#define n 100

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow " << endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void pop()
    {
        if(top==-1){
            cout<<"stack underflow "<<endl;
            return ;
        }
        else{
            top--;
        }
    }
    void empty(){
        if(top==-1){
            cout<<"oui"<<endl;
        }
        else {
            cout<<"non"<<endl;
        }
    }
    int Top(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return -1 ;
        }
        else{
            return arr[top];
        }

    }
};
int main(){
    stack st;
    st.push(1);
    st.push(6);
    st.push(3);
    st.push(7);
    st.push(1);
    st.push(8);
    st.pop();
    cout<<st.Top()<<endl; 
    st.empty();

    return 0;

}