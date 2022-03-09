#ifndef SINGLYLINKEDLIST_NODE_H
#define SINGLYLINKEDLIST_NODE_H
#endif //SINGLYLINKEDLIST_NODE_H

#include <iostream>
using namespace std;
// DT = DataType

template <typename DT>
class Node {
public:
    DT data;
    Node<DT>* next;
    Node<DT>* prev;

    explicit Node() {
        next = nullptr;
        prev = nullptr;
    }
};
