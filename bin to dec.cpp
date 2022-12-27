#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long binary;
    cout << "Enter a binary value : "; 
    cin >> binary;
    int i = 0, decimal= 0;
    while (binary!=0)
    {
        int digit = binary % 10;
        decimal += digit * pow(2,i);

        binary /= 10;
        i++;
    }
    cout << decimal;
    return 0;
}
 