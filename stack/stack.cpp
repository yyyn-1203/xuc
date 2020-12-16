#include <cstdio>

class Stack{
    public:
        int a[100];
        int top;

    Stack() {
        for (int i = 0; i < 100; i++) a[i] = 0;
        top = 0;
    }

    void pop() {
        if (top == 0) puts("error");
        else top--;
    }

    void push(int x) {
        if (top >= 100) puts("error");
        else a[top++] = x;
    }

    int get_top() {
        if (top == 0) puts("error");
        else return a[top-1]; 
    }

};

int b;

int main() {
    Stack s = Stack();
    s.push(1);
    printf("%d\n", s.get_top());
    s.pop();
    s.pop();
    b = s.get_top();
    return 0;
}