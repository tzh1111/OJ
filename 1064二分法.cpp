#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int had,need;
int input[10000],max_len=0;
int can()
{
    int low=0,high=max_len+1,mid=0;
    while(low+1<high)
    {
        int cnt=0;
        mid=(low+high)/2;
        for(int i=0;i<had;i++)
        {
            cnt+=input[i]/mid;
        }
        if(cnt<need)
            high=mid;
        else
            low=mid;
    }
    printf("%.2f\n",low/100.00);
}
int main()
{
    cin>>had>>need;
    float temp;
    for(int i=0;i<had;i++)
    {
        cin>>temp;
        input[i]=temp*100;
        max_len=max_len>input[i]?max_len:input[i];
    }
    sort(input,input+had);
    can();
    return 0;
}
