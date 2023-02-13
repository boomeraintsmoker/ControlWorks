#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "often_used_functions.h"

void test_Task0() {
    std::cout << "---- TASK №0 ----" << std::endl;
    std::cout << std::endl;
    // ------------------
    const int SIZE = 1000;
    int ar[SIZE];
    int maxElement = 200;
    randomAr(&ar[0], SIZE, maxElement);
    showArForTask0(&ar[0], SIZE);
}

void test_Task1() { std::cout << std::endl;
    std::cout << "---- TASK №1 ----" << std::endl;
    // ------------------
    testsAr();
}

void test_Task2() {
    std::cout << "---- TASK №2 ----" << std::endl;
    // ------------------
    testMinMax();
}

void test_Task3() {
    std::cout << "---- TASK №3 ----" << std::endl;
    // ------------------
    testMerge();
}
