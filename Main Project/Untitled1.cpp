#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,a[100],x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    i=0;
    j=n;
    while(i<j)
    {
        m=(i+j)/2;
        if(a[m]==x)
        {
        cout<<"found in "<<m;
        break;
        }
        else if(x>a[m])
        {
            i=m+1;
        }
        else
        {
            j=m;
        }
    }

    if(a[m]!=x)
    {
        cout<<"not found";
    }




}
