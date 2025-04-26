#include <bits/stdc++.h>
using namespace std;

class Stack{
    private:
        int size;
        int *arr;
        int top = -1;
    public:
        Stack(int s) {
            size = s;
            arr = new int[size];
            top = -1;
        }
        void push(int x){
            top++;
            arr[top] = x;
        }
        int pop(){
            int n = arr[top];
            top--;
            return n;
        }
        int Top(){
            return arr[top];
        }
        int stack_size(){
            return top+1;
        }
};

int main()
{
    Stack s(10);
    cout << s.stack_size() << endl;
    s.push(5);
    cout << s.Top() << endl;
    s.push(10);
    cout << s.Top() << endl;
    s.pop();
    cout << s.stack_size() << endl;
    s.pop();
    cout << s.stack_size() << endl;
    s.push(100);
    cout << s.stack_size() << endl;
    return 0;
}
