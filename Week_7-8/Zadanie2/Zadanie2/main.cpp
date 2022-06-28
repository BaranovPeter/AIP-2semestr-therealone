#include <iostream>
#include <cmath>
#include <math.h>
/*y = -0.1x^2 + 2x+1 */ //условие

using namespace std;

int main()
{
    int d;
        int n;
        int x;
        float y;
        std::cout<<"Enter the range, increment and argument";
        std::cin>>n>>d>>x;
        for(int i = 0; i < n; i+=d ){
        y= (-.1*x)*(-.1*x)+2*x+1;
        x=x+1;
        std::cout<<"\t"<<x<<"\t"<<y<<std::endl;
        }
    return 0;
}
