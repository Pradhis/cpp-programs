#include<iostream>
using namespace std;

int getFactorial(int num)
{
    if(num == 0)
        return 1;
        
    return num * getFactorial(num-1);
}
int main ()
{
    int num;
    cout << "Enter a number : "; 
    cin >> num;
    
    int fact = getFactorial(num);
    
    cout << "Fact " << num << " : " << fact;
    
    return 0;
}