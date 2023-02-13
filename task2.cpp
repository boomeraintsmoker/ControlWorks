#include <iostream>
#include "task2.h"

void Task2::testMinMax(Task2* tasker) {

    std::cout << "---- TASK №2 ----" << std::endl;

    { /* test_1 */ std::cout << "---- Test №1 ----" << std::endl;
        const int SIZE1 = 10; int ar1[SIZE1]; const int MAXELEM1 = 500;	//хорошо, что хоть всё остальное не на этой строчке....
//такая функция есть
        srand(time(nullptr));
        for(int i = 0; i < SIZE1; i++) {
            ar1[i] = rand() % MAXELEM1;
            std::cout << ar1[i] << "  ";
        }
        std::cout << std::endl;
//--------------------------------
        tasker->maxSearch(&ar1[0], SIZE1);	//
        tasker->minSearch(&ar1[0], SIZE1);
    }

    { /* test_1 */ std::cout << "---- Test №1 ----" << std::endl;
        const int SIZE1 = 10; int ar1[SIZE1]; const int MAXELEM1 = 500;	//хорошо, что хоть всё остальное не на этой строчке....
//такая функция есть
	
        srand(time(nullptr) + 1);
        for(int i = 0; i < SIZE1; i++) {
            ar1[i] = rand() % MAXELEM1;
            std::cout << ar1[i] << "  ";
        }
        std::cout << std::endl;
//--------------------------------
        tasker->maxSearch(&ar1[0], SIZE1);	//
        tasker->minSearch(&ar1[0], SIZE1);
    }

//КОММЕНТИРОВАТЬ КОД и ВЫКЛАДЫВАТЬ ЕГО В РЕПУ КАТЕГОРИЧЕСКИ ЗАПРЕЩЕНО!!!! И ВООБЩЕ ОСТАВЛЯТЬ ЗАКОММЕНТИРОВАННЫЙ КОД ЭТО ДУРНАЯ ПРИВЫЧКА!!!


//    { /* test_2 */ std::cout << "---- Test №2 ----" << std::endl;
//        const int SIZE2 = 10; int ar2[SIZE2]; const int MAXELEM2 = 17890;
//        srand(time(nullptr));
//        for(int i = 0; i < SIZE2; i++) {
//            ar2[i] = rand() % MAXELEM2;
//            std::cout << ar2[i] << "  ";
//        }
//        std::cout << std::endl;
//        tasker->maxSearch(&ar2[0], SIZE2);
//        tasker->minSearch(&ar2[0], SIZE2);
//    }
//    { /* test_3 */ std::cout << "---- Test №3 ----" << std::endl;
//        const int SIZE3 = 10; int ar3[SIZE3]; const int MAXELEM3 = 17890;
//        srand(time(nullptr));
//        for(int i = 0; i < SIZE3; i++) {
//            ar3[i] = rand() % MAXELEM3;
//            std::cout << ar3[i] << "  ";
//        }
//        std::cout << std::endl;
//        tasker->maxSearch(&ar3[0], SIZE3);
//        tasker->minSearch(&ar3[0], SIZE3);
//    }
    //оставлю один тест - ошибка сохранилась
    std::cout << std::endl;
}

int Task2::maxSearch(int* ar, int size)
{
    static int i = 0;
    static int depth = 0;
    depth++;
	static int maxElem = ar[0];
    if(i < size) {
        if(ar[i] > maxElem) {
            maxElem = ar[i];
        }
        i++;
        return maxSearch(ar, size);
    }
	std::cout << "Maximum - " << maxElem << std::endl;
	i = 0;
    depth = 0;
    maxElem = std::numeric_limits<int>::min();
	return 1;
}


int Task2::minSearch(int* ar, int size)
{
//ну потому что static юзать в рекурсивных функциях это плохо
    static int i = 0;
    static int depth = 0;
    depth++;
    static int minElem = ar[0];
    if(i < size) {
        if(ar[i] < minElem) {
            minElem = ar[i];
        }
        i++;
        return minSearch(ar, size);
    }
    std::cout << "Minimum - " << minElem << std::endl;
	i = 0;
	depth = 0;
	minElem = std::numeric_limits<int>::max();
    return 1;
}
