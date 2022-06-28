#include <iostream>

using namespace std;

int main()
{
    int N, M, S;
    cout << "Write first and last numbers of numerical series. Also write its increment" << endl;
    cin>>N>>M>>S;
    while (N<=M) {
        cout<<N<<' ';
        N=N+S;
    }


    return 0;
}
