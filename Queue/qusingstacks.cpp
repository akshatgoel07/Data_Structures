#include <bits/stdc++.h>
using namespace std;

class que{
    stack<int> s1;
    stack<int> s2;
public:
    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        if(s2.empty())
        {
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int hi = s2.top();
        s2.pop();
        return hi;
    }

    bool empty(){
         if(s1.empty() && s2.empty()){
            return true;
         }
         return false;
    }
};

int main()
{
    que q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(7);
    q.pop();
    q.pop();
    q.pop();
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;

    return 0;
}