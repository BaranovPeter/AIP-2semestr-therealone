#include <iostream>
void DigitCountSum(int K)
{
    int C(0), S(0);
    if (K < 0) {
        std::cout << "[Error] K < 0" << std::endl;
        return;
    }
    while (K%10) {
        S += K%10;
        C++;
        K/=10;
    }
    std::cout << "S: " << S << std::endl
                << "C: " << C << std::endl;
}

int main(void)
{
    int K(0);
    std::cout << "Enter the K: ";
    std::cin >> K;
    DigitCountSum(K);
    std::cin.get();
    return 0;
}
