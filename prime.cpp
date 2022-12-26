#include<iostream>

using namespace std;

int main()
{
    int i;
    int n;
    cout << "Enter a number : "; 
    cin >> n;
    bool isprime= true;
    if(n < 2)
    {
        isprime = false;
    }
    else
    {
        for(i=2;i < n;i++)
        {
            if(n % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }

    string result = isprime ? "Prime" : "not Prime";
    cout<<"The number " << n << " is : " << result;
    
    return 0;
}