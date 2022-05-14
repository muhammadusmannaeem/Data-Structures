#include "Queue.cpp"

int main() {
    Queue<int> queue;
    queue.enQueue(10);
    queue.enQueue(11);
    queue.display();
    cout << "\n";
    queue.enQueue(12);
    queue.display();
    cout << "\n";

    queue.showFront();
}
