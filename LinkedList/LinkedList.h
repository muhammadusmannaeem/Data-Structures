#ifndef SINGLYLINKEDLIST_LINKEDLIST_H
#define SINGLYLINKEDLIST_LINKEDLIST_H
#endif //SINGLYLINKEDLIST_LINKEDLIST_H
#include "Node.h"

template <typename DT>
class LinkedList {
public:
    /// Properties of List
    Node<DT>* head;
    Node<DT>* tail;
    Node<DT>* prev;
    int size;

    /// Constructor to initialize values in properties
    explicit LinkedList(){
        head = nullptr;
        tail = nullptr;
        prev = nullptr;
        size = 0;
    }

    /**
     * Add the node at end end of list
     * @param node
     * @return void
     */
    void add(DT value);

    /**
     * Add the node at given index
     * @param index
     * @param node
     * @return void
     */
    void add(int index, DT value);

    /**
     * Add the node at the start of list
     * @param node
     * @return void
     */
    void prepend(DT node);

    /**
     * Display entire Linked List
     * @param reverse
     * @return void
     */
    void display_all(bool reverse);

    /**
     * Get node at specific index
     * @param index
     * @return Node
     */
    DT get_at_index(int index);

    /**
     * Get data of node at specific index
     * @param index
     * @return data
     */
    DT get_data_at_index(int index);

    /**
     * Get first occurrence (index) of given node
     * @param node
     * @return
     */
    int get_index_of(DT node);

    /**
     * Clear entire Linked List
     * @return void
     */
    void flush();

    /**
     * Remove node at given index from linked list
     * @param index
     * @return void
     */
    void remove(int index);


    /**
     *
     * @param index
     * @param node
     * @return void
     */
    void replace(int index, DT node);

    /**
     * update value of node at given index, with the one provided
     * @param index
     * @param value
     * @return void
     */
    void update_value(int index, DT value);

    /**
     * Sort the linked list
     * @return void
     */
    void sort();
};
