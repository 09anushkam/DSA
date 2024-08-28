#include<bits/stdc++.h>
using namespace std;

// List-internally DLL
// push_front()
// emplace_front()
void List(){
    list<int>ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4} - cheap
    ls.emplace_front(); // {2,4}; - cheap

    // rest functions same as vector
    // begin,end,rbegin,rend,clear,insert,size,swap
}

// Deque-similar to list and vector
void Deque(){
    deque<int>dq;
    dq.push_front(1); // {1}
    dq.emplace_back(2); // {1,2}
    dq.push_front(4); // {4,1,2}
    dq.emplace_front(3); // {3,4,1,2}

    dq.pop_back(); // {3,4,1}
    dq.pop_front(); // {4,1}

    dq.back();

    dq.front();

    // rest functions same as vector
    // begin,end,rbegin,rend,clear,insert,size,swap
}

// Stack-LIFO
// All operations - O(1)
void Stack(){
    stack<int>st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout<<st.top(); // prints 5 "** st[2] is invalid **"

    st.pop(); // st looks like {3,3,2,1}

    cout<<st.top(); // 3
    cout<<st.size(); // 4
    cout<<st.empty(); // false

    stack<int>st1,st2;
    st1.swap(st2);
}

// Queue-FIFO
// rear=back,front=front
void Queue(){
    queue<int>q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}

    q.back()+=5;
    cout<<q.back(); // prints 9

    // Q is {1,2,9}
    cout<<q.front(); // prints 1

    q.pop(); // {2,9}

    cout<<q.front(); // prints 2

    // size,swap,empty same as stack
}

// PQ - internally tree data structure
// push,pop - O(log(n)),top - O(1)
void PriorityQueue(){
    priority_queue<int>pq;

    // Maximum Heap
    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout<<pq.top(); // prints 10

    pq.pop(); // {8,5,2}
    cout<<pq.top(); //prints 8

    // size,swap,empty same as others

    // Minimum Heap
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.push(8); // {2,5,8}
    pq.emplace(10); // {2,5,8,10}

    cout<<pq.top(); // prints 2
}

int main(){
    List();
    Deque();
    Stack();
    Queue();
    PriorityQueue();
    return 0;
}