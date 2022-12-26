#include <iostream>
using namespace std;

int Harshad(int num)
{
    
    int sum = 0;
    int temp = num;
    
    while(temp != 0){
        sum = sum + temp % 10;
        temp /= 10;
    }
    
    
}

int main ()
{
    int n;
    cout << "Enter num : "; 
    cin >> n;
    
    if(Harshad(n))
        cout << n << " is a hashad number";
    else
        cout << n << " is not a harshad number";

    return 0;
}