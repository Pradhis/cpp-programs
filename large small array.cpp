#include<bits/stdc++.h>
#define N 5
using namespace std;
int main()
{
    int a[N],i=0;
    for(i=0;i<N;i++)
    {
        cout << "Enter index : "; 
        cin >> a[i];
        int n = sizeof(a)/sizeof(a[0]);
        int smallest = INT_MAX, largest = INT_MIN;
        for(int i=0; i<n; i++)
        { 
            if(smallest > a[i])
            smallest = a[i];
            if(largest < a[i])
            largest = a[i];
        }
        cout<<smallest<<endl<<largest;
    }
}