#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float length;
    float width;
    float num1;
    float num2;
    float num3;
    std::cout <<    "***********" << std::endl // Вариант 2, задание 1: вывод первой буквы имени.
                 << "*         *" << std::endl
                 << "*         *" << std::endl
                 << "*         *" << std::endl
                 << "*         *" << std::endl
                 << "*         *" << std::endl
                 << "*         *" << std::endl;

    cout << "Enter length and width values." <<::endl; // Задание 2: вычисление периметра и площади прямоугольника.
    cin >> length >> width;
    cout << "Perimeter is " << length + width << endl;
    cout << "Area is " << length * width<<endl;

    cout << "Enter the first munber." << endl; // Задание 3: Вывод нового числа.
    cin >> num1;
    cout << "Enter the second number." <<endl;
    cin >> num2;
    cout << "Enter the third number." << endl;
    cin >> num3;
    cout << "New number is "<< num1*2 + (num2-3) + pow(num3,2) << endl;

    return 0;
}
