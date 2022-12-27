#include<iostream>
using namespace std;
int main()
{
    int num1, num2, lcm;
    cout << "Enter a num1 : "; 
    cin >> num1;
    cout << "Enter a num2 : "; 
    cin >> num2;
    int max = (num1 > num2)? num1 : num2;
    
    for(int i = max ; i <= num1*num2 ; i++)
        {
            if(i % num1 == 0 && i % num2 == 0){
                lcm = i;
                break;
            }
        }

    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm;

    return 0;
}