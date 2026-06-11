#include<iostream>
#include<queue>

class Stack {
    std::queue<int> q;

public:
    void push(int x){
        q.push(x);

        int n = q.size();

        for (int i = 0; i< n - 1; i++){
            q.push(q.front());
            q.pop();
        }
    }

    void pop(){
        if(q.empty()){
            std::cout << "stack underflow\n";
            return;
        }
        q.pop();
    }

    int top() {
        if(q.empty()){
            std::cout<<"stack is empty\n";
            return -1;
        }
        return q.front();
    }
    bool empty(){
        return q.empty();
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "top: " << s.top() << std::endl;

    s.pop();

    std::cout << "Top after pop: " << s.top() << std::endl;

    return 0;
}