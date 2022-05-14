#include "Stack.h"

template <typename DT>
void Stack<DT>::push(DT value){
    auto* node = new NODE<DT>;
    node->data = value;
    list.add(*node);
}

template <typename DT>
void Stack<DT>::pop(){
    if (this->length() == 0) {
        cout << "Stack is Empty!" << endl;
        return;
    }
    list.remove(this->length() - 1);
}

template <typename DT>
void Stack<DT>::getLast(){
    cout << this->length() - 1 << ") " << list.get_at_index(this->length() - 1).data;
}

template <typename DT>
void Stack<DT>::getFirst(){
    cout << "0) " << list.get_at_index(0).data;
}

template <typename DT>
int Stack<DT>::length(){
    return list.size;
}

template <typename DT>
void Stack<DT>::display() {
    if (this->length() == 0) {
        cout << "Stack is Empty!" << endl;
        return;
    }
    for (int i = 0 ; i < this->length() ; i++ ) {
        cout << i << ") " << list.get_at_index(i).data << endl;
    }
}
