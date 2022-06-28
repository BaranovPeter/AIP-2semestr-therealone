#include <iostream>
using namespace std;

void IncTime(int,int,int,int);

int main()
{
    IncTime(15,23,45,90);
    return 0;
}

void IncTime(int H,int M,int S,int T){
    int tm= 3600*H+60*M+S+T;
    H = tm/3600;
    tm %= 3600;
    M = tm/60;
    S = tm%60;
    cout << H<<":"<<M<<":"<<S;
}
