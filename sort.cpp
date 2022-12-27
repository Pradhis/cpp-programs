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
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            { 
                if(a[i]>a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    }
}



