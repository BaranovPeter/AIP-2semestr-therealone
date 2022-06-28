#include <iostream>
#include <cmath>

const float PI = 3.14;

float calc_rings_area(float r1, float r2);

int main()
{
    float r1;
    float r2;

    for (int i = 0; i < INFINITY; ++i)
    {
        float result;
        std::cout << "Please enter two real numbers:\n";
        do
        {
            std::cin >> r1 >> r2;
            result = calc_rings_area(r1, r2);
            if (result)
                std::cout << "\nThe result is: " << result;
            else
                std::cout << "\nThe first number should be less than the second."
                             "\nTry again:\n";
        }
        while (!result);
        std::cout << "\n";
    }

    return 0;
}

float calc_rings_area(float r1, float r2)
{
    float area = 0;

    if (r1 < r2)
        area = (PI * pow(r2, 2)) - (PI * pow(r1, 2));

    return area;
}
