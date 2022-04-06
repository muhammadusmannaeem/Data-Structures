#include "Queue.h"

template<typename DT>
void Queue<DT>::enQueue(DT value) {
    auto* node = new NODE<DT>;
    node->data = value;
    list.add(node);
}

template<typename DT>
DT Queue<DT>::deQueue() {
    if (list.size == 0) {
        cout << "Queue Empty.";
        return -1;
    }
    data = list.get_at_index(list.size - 1).data;
    list.remove(list.size - 1);
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
        cout << list.get_at_index(i).data;
    }
}
