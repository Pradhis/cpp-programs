#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[50] = "Pradhisha";
    cout << "Before reversing the string: " << str;
    int i, len, temp;
    len = strlen(str1);
    for(i = 0;i < len/2;i++)
    {
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
    cout<< "\nAfter reversing the string: " << str;
    return 0;
}

