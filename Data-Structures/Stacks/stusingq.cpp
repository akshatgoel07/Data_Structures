#include <bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int> q2;
    queue<int> q1;
    public:
    Stack(){
        N=0;
    }
        void push(int val){
            q2.push(val);
            N++; 
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            queue<int> temp;
            temp=q1;
            q1=q2;
            q2=temp;
        }
        void pop(){
            if(q1.empty() && q2.empty()){
                cout<<"Queue Empty"<<endl;
                return;
            }
            q1.pop();
            N--;
        }
        int top(){
            return q1.front();
        }
        int size(){
            return N;
        }
};

int main()
{
    Stack q;
    q.push(5);
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(7);
    cout<<q.top()<<endl;


    return 0;
}