#include <iostream>

//Глобальный массив поезда
int TRAIN [10];

//Макросы
#define SIZE 10
#define CALL(func) { func(TRAIN); }
#define CYCLE for (int i=0; i<SIZE; i++)

//Функция ввода количества пассажиров в каждом вагоне
void input (int arr[10])
{
    CYCLE
    {
        std::cout << "How many passengers are in carriage number " << i+1 << ": ";
        std::cin >> arr[i];
    }
    std::cout << "----------------" << std::endl;
    return;
}

//Функция вывода информации о перегруженных вагонах
void overflow (int arr[10])
{
    CYCLE
    if (arr[i]>20) std::cout << "Carriage number " << i+1 << " is overcrowded!" << std::endl;
    std::cout << "----------------" << std::endl;
    return;
}

//Функция вывода информации о вагонах со свободными местами
void free (int arr[10])
{
    CYCLE
    if (arr[i]<20) std::cout << "There are free seats in carriage number " << i+1 << "!" << std::endl;
    std::cout << "----------------" << std::endl;
    return;
}

//Функция вывода информации о количестве пассажиров в поезде
void count (int arr[10])
{
    int sumPass = 0;
    CYCLE sumPass+=arr[i];
    std::cout << "There are " << sumPass << " passengers on the train." << std::endl;
    return;
}

int main()
{
    CALL(input);
    CALL(overflow);
    CALL(free);
    CALL(count);
    
    return 0;
}