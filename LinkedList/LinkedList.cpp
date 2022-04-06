#include "LinkedList.h"

template<typename DT>
void LinkedList<DT>::add(DT value){
    auto *node = new Node<DT>();
    node->data = value;
    node->next = nullptr;

    if(head == nullptr) {
        head = node;
        tail = node;
        size++;
        return;
    }
    Node<DT>* temp = head;
    while (temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
    tail = node;
    size++;
}

template<typename DT>
void LinkedList<DT>::add(int index, DT value){
    if (head == nullptr || index >= size) {
        this->add(value);
        return;
    }
    if (index <= 0) {
        this->prepend(value);
        return;
    }
    auto* node = new Node<DT>();
    node->data = value;
    Node<DT>* temp = head;
    int i = 0;
    while (temp != nullptr) {
        if (i == index) {
            node->next = temp;
            node->prev = temp->prev;
            temp->prev->next = node;
            temp->prev = node;
            size ++;
            return;
        }
        temp = temp->next;
        i++;
    }
}

template<typename DT>
void LinkedList<DT>::prepend(DT value){
    // create node, set head to temp, set head to node, set temp as next
    auto* node = new Node<DT>();
    node->data = value;
    if(head == nullptr) {
        head = node;
        tail = node;
        size ++;
        return;
    }
    node->next = head;
    head->prev = node;
    head = node;
    size ++;
}

template<typename DT>
void LinkedList<DT>::display_all(bool reverse){
    if(head == nullptr) {
        cout << "List is Empty" << endl;
        return;
    }
    cout << "Size: " << size << endl;
    if(reverse) {
        Node<DT>* node = tail;
        int i = size-1;
        while (node != nullptr) {
            cout << "Index: " << i << " Data: " << node->data << "\n";
            node = node->prev;
            i--;
        }
    } else {
        Node<DT>* node = head;
        int i = 0;
        while (node != nullptr) {
            cout << "Index: " << i << " Data: " << node->data << "\n";
            node = node->next;
            i++;
        }
    }
}

template<typename DT>
DT LinkedList<DT>::get_at_index(int index){
    Node<DT>* node = head;
    int i = 0;
    while (node != nullptr) {
        if(i == index) {
            // need to return node from queue or stack.
            return node->data;
        }
        node = node->next;
        i++;
    }
    return {};
}

template<typename DT>
DT LinkedList<DT>::get_data_at_index(int index){
    return get_at_index(index)->data;
}

template<typename DT>
int LinkedList<DT>::get_index_of(DT node){
    Node<DT>* temp = head;
    int i = 0;
    while (temp != nullptr) {
        if(temp == node) {
            return i;
        }
        node = node->next;
        i++;
    }
    return -1;
}

template<typename DT>
void LinkedList<DT>::flush(){
    if(head == nullptr) {
        return;
    }
    Node<DT>* node = head;
    while(node != nullptr) {
        Node<DT>* temp = node;
        delete temp;
        node = node->next;
    }
    head = tail = nullptr;
    size = 0;
}

template<typename DT>
void LinkedList<DT>::remove(int index){
    if (head == nullptr || index >= size || index < 0 || size == 0) {
        return;
    }
    Node<DT>* node = head;
    int i = 0;
    while (node != nullptr) {
        if(i == index) {
            if (node == head) {
                node->next->prev = nullptr;
                head = node->next;
            } else if (node == tail) {
                node->prev->next = nullptr;
                tail = node->prev;
            } else {
                node->prev->next = node->next;
                node->next->prev = node->prev;
            }
            delete node;
            size --;
            return;
        }
        node = node->next;
        i++;
    }
}

template<typename DT>
void LinkedList<DT>::replace(int index, DT node){
    if (head == nullptr || index >= size || index < 0 || size == 0) {
        return;
    }
    Node<DT>* temp = head;
    int i = 0;
    while (temp != nullptr) {
        if(i == index) {
            node->next = temp->next;
            node->prev = temp->prev;
            temp->prev->next = node;
            temp->next->prev = node;
            delete temp;
            return;
        }
        temp = temp->next;
        i++;
    }
}

template<typename DT>
void LinkedList<DT>::update_value(int index, DT value){
    if (head == nullptr || index >= size || index < 0 || size == 0) {
        return;
    }
    Node<DT>* node = head;
    int i = 0;
    while (node != nullptr) {
        if(i == index) {
            node->data = value;
            return;
        }
        node = node->next;
        i++;
    }
}

template<typename DT>
void LinkedList<DT>::sort(){

}
