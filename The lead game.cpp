#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b[a],c[a],d[a],e[a];
    int sum1=0;
    int sum2=0;
    int y=0;
    for(int i=0;i<a;i++)
    {
        cin>>b[i]>>c[i];
    }
    for(int i=0;i<a;i++)
    {
        sum1+=b[i];
        sum2+=c[i];
        if(sum1>sum2)
        {
            d[i]=sum1-sum2;
            e[i]=1;
        }
        if(sum2>sum1)
        {
            d[i]=sum2-sum1;
            e[i]=2;
        }
    }
    int o=0,g=0;
    for(int i=0;i<a;i++)
    {
        if(d[i]>g)
        {
            g=d[i];
            o=e[i];
        }
    }
     cout<<o<<" "<<g;
    return 0;
}
