#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y;
        std::cin >> x;
        if (x>2)
            y = 2 * abs(x) - 15;
        if (x == 2)
            y = 5;
        if (x < 1)
            y = 3 * fabs(x - 1) - 8;
        std::cout << y;
    return 0;
}
