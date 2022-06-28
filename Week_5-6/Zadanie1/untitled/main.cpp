#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y;
    std::cin >> x;
    if (x>3)
        y=5*x-10;
    if (x==3)
        y=1;
    if (x<3)
        y=2*abs(x)-5;
    std::cout << y;
    return 0;
}
