#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#endif //QUEUE_QUEUE_H
#include "../LinkedList/LinkedList.cpp"

template<typename DT>
class NODE {
public:
    DT data;
};

template<typename DT>
class Queue {
public:
    LinkedList<NODE<DT>> list;

    /*
     * Add value to queue
     * @param value
     * @return void
     */
    void enQueue(DT value);

    /*
     * Remove and return first value to queue
     * @param none
     * @return DT value
     */
    DT deQueue();

    /*
     * Displays first value in queue
     * @param none
     * @return void
     */
    void showFront();

    /*
     * Displays the entire Queue
     * @params none
     * @return none
     */
    void display();
};
