#include "task0.h"
#include "task1.h"
#include "task2.h"
#include "task3.h"

//функции лучше объединять то, что имеет отношение к одному...
//3 задачи одна функция....

void testAllTasks() {
    { /* task №0 */ 
	const int SIZE = 1000; 
	int ar[SIZE]; 
	int range = 200;	//imho range -> maxVal, range -- обозначает от и до...
        randomAr(&ar[0], SIZE, range);
        showAr(&ar[0], SIZE);
    }
    { /* task №1 */ 
	Task1 tasker1;
        tasker1.testAr(&tasker1);
    }
    { /* task №2 */ 
	Task2 tasker2;
        tasker2.testMinMax(&tasker2);
    }
    { /* task №3 */ 
	Task3 tasker3;
        tasker3.testMerge(&tasker3);
    }
}

int main()
{
    testAllTasks();
    return 0;
}
