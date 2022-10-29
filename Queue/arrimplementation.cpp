#include <iostream>
using namespace std;
#define n 100

class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        int front = -1;
        int back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Overflow " << endl;
            return;
        }
            back++;
            arr[back] = x;
            if (front == -1)
            {
                front++;
            }
        }
        void pop()
        {
            if (front == -1 || front > back)
            {
                cout << "Underflow" << endl;
                return;
            }
            front++;
        }
        int peek()
        {
            if (front == -1 || front > back)
            {
                cout << "No elements " << endl;
                return -1;
            }
                return arr[front];

        }
        bool empty()
        {
            if (front == -1 || front > back)
            {
                return true;
            }
            return false;
        }
};

    int main()
    {
        queue q;
        q.push(2);
        q.push(4);
        q.push(7);
        q.push(1);
        q.push(8);

        cout << q.peek() << endl;
        q.pop();
        cout << q.peek() << endl;
        q.pop();
        cout << q.peek() << endl;
        q.pop();
        
        return 0;
    }
