#include <iostream>
using namespace std;

int Automorphic(int n){
    
    int square = n * n;
    
    while(n != 0)
    {
        
        if(n % 10 != square % 10){
            return 0;
        }
        
        
        n /= 10;
        square /= 10;
    }
    
    return 1;
}

int main ()
{
    int n , sq = n * n ;
    cout << "Enter a number : "; 
    cin >> n;
    
    if(Automorphic(n))
        cout << "Num: "<< n << ", Square: " << sq << " - is Automorphic";
    else
        cout << "Num: "<< n << ", Square: " << sq << " - is not Automorphic";
    

}