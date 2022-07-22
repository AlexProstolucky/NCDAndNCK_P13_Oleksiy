#include <iostream>
using namespace std;

unsigned int NCD(unsigned int a, unsigned int b)
{
    if (a == b)
        return a;
    if (a > b)
        return NCD(a - b, b);
    return NCD(a, b - a);
}

unsigned int NCK(unsigned int a, unsigned int b) { return (a * b) / NCD(a, b); }

int main()
{
    int a = 50, b = 75;
    cout << NCD(a, b);
    cout << endl;
    cout << NCK(a, b);

    return 0;
}
