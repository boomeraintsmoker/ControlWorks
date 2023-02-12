#ifndef TASK1_H
#define TASK1_H
class Task1 {
public:
    void arCounter(int*, int);
    void countingSort(int*, int, int*, int);
    void showAr(int*, int, int, int);
    void isSorted(int*, int);	//очень странная функция... если isSorted, то надо вернуть bool
    void testAr(Task1*);	//вообще жесть! т.е. ты создаёшь объект, а потом этот же объект передаёшь в член класса??? зачем так?
};
#endif // TASK1_H
