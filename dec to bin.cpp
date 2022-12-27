#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter num: "; 
    cin >> n;
    int binaryArray[32];
    int i = 0;
    while (n > 0)
     {
        binaryArray[i] = n% 2;
        n= n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binaryArray[j];
        return 0;
}
 
 