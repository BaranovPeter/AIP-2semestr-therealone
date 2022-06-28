#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
        std::cout<<"Enter the date of the month  ";
        std::cin>>x;
        switch (x)
        {
        case 1:printf("tuesday");break;         //первая неделя
        case 2:printf("wednesday");break;
        case 3:printf("thursday");break;
        case 4:printf("friday");break;
        case 5:printf("saturday");break;
        case 6:printf("sunday");break;
        case 7:printf("monday");break;

        case 8:printf("tuesday");break;         //вторая неделя
        case 9:printf("wednesday");break;
        case 10:printf("thursday");break;
        case 11:printf("friday");break;
        case 12:printf("saturday");break;
        case 13:printf("sunday");break;
        case 14:printf("monday");break;

        case 15:printf("tuesday");break;        //третья неделя
        case 16:printf("wednesday");break;
        case 17:printf("thursday");break;
        case 18:printf("friday");break;
        case 19:printf("saturday");break;
        case 20:printf("sunday");break;
        case 21:printf("monday");break;

        case 22:printf("tuesday");break;        //четвёртая
        case 23:printf("wednesday");break;
        case 24:printf("thursday");break;
        case 25:printf("friday");break;
        case 26:printf("saturday");break;
        case 27:printf("sunday");break;
        case 28:printf("monday");break;

        case 29:printf("saturday");break;        //остаток(29-31 дня месяца)
        case 30:printf("sunday");break;
        case 31:printf("monday");break;
}
    return 0;
}
