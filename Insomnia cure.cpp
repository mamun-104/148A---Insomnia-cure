#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,total=0;


    cin>>k>>l>>m>>n>>d;

    int a[d+5];

    int i;

    for(i=1;i<=d;i++)
    {
        a[i]= 0;
    }

    for(i=k;i<=d;i=i+k)
    {
        a[i]= 1;
    }

    for(i=l;i<=d;i=i+l)
    {
        a[i]= 1;
    }

    for(i=m;i<=d;i=i+m)
    {
        a[i]= 1;
    }

    for(i=n;i<=d;i=i+n)
    {
        a[i]= 1;
    }

    for(i=1;i<=d;i++)
    {
        if(a[i]==1){total++;}
    }

    cout<<total<<endl;





    return 0;
}
