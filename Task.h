//
// Created by RedmiBook on 24.11.2020.
//

#ifndef LAB4_TASK_H
#define LAB4_TASK_H

#include <functional>

class Task {
private:
    std::function<void()> functionToRun;
public:
    void run();
    Task(std::function<void()> task);
};


#endif //LAB4_TASK_H
