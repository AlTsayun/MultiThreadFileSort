//
// Created by RedmiBook on 24.11.2020.
//

#ifndef LAB4_MULTITHREADTASKSMANAGER_H
#define LAB4_MULTITHREADTASKSMANAGER_H

#include "MultithreadQueue.h"
#include "ThreadPool.h"

class MultithreadTasksManager {
private:
public:
    MultithreadTasksManager(MultithreadQueue<Task>* tasks, ThreadPool* threadPool);
    void setTasks(MultithreadQueue<Task>* tasksQueue);
    void setThreadPool(ThreadPool* threadPool);
    void runTasks();
    void abort();
    ThreadPoolState getState();
};


#endif //LAB4_MULTITHREADTASKSMANAGER_H
