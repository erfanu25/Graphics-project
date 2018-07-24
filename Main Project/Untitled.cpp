#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,fact=1,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact *= i;
        sum += i*fact;
    }
    cout<<sum;
}
