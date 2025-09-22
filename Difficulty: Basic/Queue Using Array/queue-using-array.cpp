#include <bits/stdc++.h>
using namespace std;

class myQueue {
    int capacity;
    vector<int> arr;

public:
    myQueue(int n) {
        capacity = n;
    }

    bool isEmpty() {
        return arr.size() == 0;
    }

    bool isFull() {
        return arr.size() == capacity;
    }

    void enqueue(int x) {
        if (!isFull()) {
            arr.push_back(x);
        } else {
            cout << "Queue Overflow"<<endl;
        }
    }

    void dequeue() {
        if (!isEmpty()) {
            arr.erase(arr.begin()); 
        } else {
            cout << "Queue Underflow"<<endl;
        }
    }

    int getFront() {
        if (!isEmpty()) {
            return arr[0];
        } else {
            return -1;
        }
    }

    int getRear() {
        if (!isEmpty()) {
            return arr[arr.size() - 1];
        } else {
            return -1;
        }
    }
};
