#include "Stack.cpp"

int main() {
    Stack<int> stack;
    stack.display();

    stack.push(10);
    stack.push(11);
    stack.push(12);
    stack.display();

    stack.pop();
    stack.display();

}
