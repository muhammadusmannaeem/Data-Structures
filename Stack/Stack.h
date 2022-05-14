
#ifndef STACK_STACK_H
#define STACK_STACK_H

#endif //STACK_STACK_H
#include "../LinkedList/LinkedList.cpp"
#include <iostream>

template <typename DT>
class NODE {
public:
    DT data;
};

template <typename DT>
class Stack {
public:
    LinkedList<NODE<DT>> list;

    /*
     * Display the Stack
     * @param None
     * @return void
     */
    void display();

    /*
     * Add item to end (top) of stack
     * @param None
     * @return void
     */
    void push(DT value);

    /*
     * Remove item from end of stack
     * @param None
     * @return void
     */
    void pop();

    /*
     * Display the last element of Stack
     * @param None
     * @return void
     */
    void getLast();

    /*
     * Display the First element of Stack
     * @param None
     * @return void
     */
    void getFirst();

    /*
     * Return the size of stack
     * @param None
     * @return void
     */
    int length();
};

