//
// Created by RedmiBook on 24.11.2020.
//

#include "Task.h"

void Task::run() {
    functionToRun();
}

Task::Task(std::function<void()> task) {
    functionToRun = task;
}
