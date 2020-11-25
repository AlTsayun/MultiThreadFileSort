//
// Created by RedmiBook on 24.11.2020.
//

#include "MultithreadQueue.h"

template<class T>
MultithreadQueue<T>::MultithreadQueue() {
    queueWithTasks = new std::queue<T>;
}

template<class T>
T MultithreadQueue<T>::pop() {
    queueMutex.lock();
    T res;
    if (queueWithTasks->empty()){
       res = NULL;
    } else {
        res = queueWithTasks->front();
        queueWithTasks->pop();
    }
    queueMutex.unlock();
    return res;
}

template<class T>
void MultithreadQueue<T>::push(T item) {
    queueMutex.lock();
    queueWithTasks->push(item);
    queueMutex.unlock();
}
