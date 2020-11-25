//
// Created by RedmiBook on 24.11.2020.
//

#ifndef LAB4_MULTITHREADQUEUE_H
#define LAB4_MULTITHREADQUEUE_H


#include "Task.h"
#include <queue>
#include <mutex>

template <class T>
class MultithreadQueue {
private:
    std::mutex queueMutex;
    std::queue<T>* queueWithTasks;
public:
    MultithreadQueue();
    void push(T item);
    T pop();
};


#endif //LAB4_MULTITHREADQUEUE_H
