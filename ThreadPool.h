//
// Created by RedmiBook on 24.11.2020.
//

#ifndef LAB4_THREADPOOL_H
#define LAB4_THREADPOOL_H

#include <queue>
#include <thread>
#include "MultithreadQueue.h"


enum ThreadPoolState{
    READY,
    EXECUTING,
    COMPLETED,
    ABORTED
};

class ThreadPool {
private:
    std::queue<std::thread> queueWithThreads;
    int threadsCount;
public:
    ThreadPool(int threadsCount);
    int getThreadsCount();
    int getFreeThreadsCount();
    std::thread* popThread();
    void retrieveThread(std::thread* thread);
};


#endif //LAB4_THREADPOOL_H
