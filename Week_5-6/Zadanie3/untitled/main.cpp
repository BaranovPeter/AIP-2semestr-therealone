/*Задача 2. Напишите программу, которая принимает от пользователя координаты точки
 и определяет, попала ли точка в заштрихованную область.
Б.Дана функция синусоиды y=sin(x).
Область синусоиды ограничена от y=0 до y=0,5.*/
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>



int main(){
    setlocale(LC_ALL, "Rus");
    float x, y;
    std::cout << "Enter 'x' and 'y':  ";
    std::cin >> x >> y;
    if ((x >= 0) && (x <= M_PI) && (y >= 0) && (y <= sin(x)) && (y <= 0.5))
        std::cout << "Point is in the area";

    else
        std::cout << "Point isn't in the area";

    return 0;
}
