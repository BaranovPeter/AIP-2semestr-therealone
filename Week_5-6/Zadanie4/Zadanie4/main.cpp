/* Задача 3. Напишите программу, которая принимает от пользователя координаты точки
 Д.Дана окружность (x * x) + (y * y) = 1.
 и определяет, попала ли точка в заштрихованную область.
 Область окружности ограничена линией y=x/2.
 Линии начинаются в точке x=0, y=0.*/

#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    float x, y;
    const float r = 1;
    std::cout << "Eneter'x' and 'y': ";
    std::cin >> x >> y;
    float l = sqrt(x * x + y * y);
    bool area1 = (y<=x/2);
    bool area2 = (l<=r);
    if (area1 || area2)
        std::cout << "Point is in the area.";

    else
        std::cout << "Point isn't in the area.";

    return 0;
}
