#include "Queue.h"

template<typename DT>
void Queue<DT>::enQueue(DT value) {
    auto* node = new NODE<DT>;
    node->data = value;
    // the function list.add do not accept argument as pointer, so
    // we need to pass the node by de-referencing the pointer

    // Add at the end of queue
    list.add(*node);
}

template<typename DT>
DT Queue<DT>::deQueue() {
    if (list.size == 0) {
        cout << "Queue Empty!";
        return -1;
    }
    DT data = list.get_at_index(0).data;

    // Remove first value
    list.remove(0);
    return data;
}

template<typename DT>
void Queue<DT>::showFront() {
    if (list.size == 0) {
        cout << "Queue Empty.";
        return;
    }
    cout << "0) " << list.get_at_index(0).data << endl;
}

template<typename DT>
void Queue<DT>::display() {
    if (list.size == 0) {
        cout << "Queue Empty.";
        return;
    }
    for (int i = 0; i < list.size ; i++) {
        cout << i << ") " << list.get_at_index(i).data << endl;
    }
}
