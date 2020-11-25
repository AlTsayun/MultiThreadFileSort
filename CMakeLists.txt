cmake_minimum_required(VERSION 3.17)
project(lab4)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab4 main.cpp Task.cpp Task.h MultithreadQueue.cpp MultithreadQueue.h MultithreadTasksManager.cpp MultithreadTasksManager.h ThreadPool.cpp ThreadPool.h)