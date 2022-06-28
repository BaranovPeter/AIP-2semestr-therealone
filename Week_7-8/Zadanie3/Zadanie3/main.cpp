#include <iostream>
#include <cmath>
#include <math.h>
//условие: y=√(5+3/x)+11x+ctg(2x+15)

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
        y=sqrt(5+3/x)+11*x+1/tan(2x+15);
        x=x+1;
        std::cout<<"\t"<<x<<"\t"<<y<<std::endl;
        }
    return 0;
}
