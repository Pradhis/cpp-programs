#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long octal;
    cout << "Enter a octal value : "; 
    cin >> octal;
    int i = 0, decimal = 0;
    int base = 8;
    while (octal!=0)
    {
        int digit = octal % 10;
        decimal += digit * pow(base, i);

        octal /= 10;
        i++;
    }
    cout << octal;
    return 0;
}