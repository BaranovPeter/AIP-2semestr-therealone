#include <iostream>

using namespace std;

int main()
{
    float x,  y;
    int n, q;
    cout<<"Enter 'x' and 'n'"<<endl;
    cin>>x>>n;
    q=1;
    for(int i=0; i<n;i++){
       if(q==1)
             y=1/x;
       else
       y=y+1/(q*x);
       q++;
    }
    cout<<y;
    return 0;
}
