/*
Enqueue: Adds a new element to the queue.
Dequeue: Removes and returns the first (front) element from the queue.
Peek: Returns the first element in the queue.
isEmpty: Checks if the queue is empty.
Size: Finds the number of elements in the queue.
*/
#include <bits/stdc++.h>
using namespace std;

class Queue{
    private:
        int maxSize;
        int* arr;
        int start;
        int end;
        int currentSize;
    public:
        Queue(int s){
            maxSize = s;
            arr = new int[maxSize];
            start = 0;
            end = 0;
            currentSize = 0;
        }
        void enqueue(int val){
            if(currentSize == maxSize) return;
            // if(end == -1){
            //     start = 0;
            //     end = 0;
            //     end = (end+1) % maxSize;
                
            // }
            arr[end] = val;
            end++;
            currentSize++;
        }
        int dequeue(){
            start++;
            return arr[start-1];
        }
        void peek(){
            cout << arr[start] << endl;
        }
        bool isEmpty(){
            return currentSize == 0;
        }
        int size(){
            return currentSize;
        }
};

int main()
{
    Queue q(5);
    q.enqueue(5);
    // q.peek();
    cout << "Current Size: " << q.size() << endl;
    q.enqueue(6);
    // q.peek();
    cout << "Current Size: " << q.size() << endl;
    q.enqueue(7);
    // q.peek();
    cout << "Current Size: " << q.size() << endl;
    int r = q.dequeue();
    cout << r << endl;
    cout << "Current Size: " << q.size() << endl;
    r = q.dequeue();
    cout << r << endl;
    cout << "Current Size: " << q.size() << endl;
    r = q.dequeue();
    cout << r << endl;
    cout << "Current Size: " << q.size() << endl;
    cout << q.size() << endl;
    

    return 0;
}
