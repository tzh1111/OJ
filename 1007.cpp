#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    const int MAX=50000;
    int ro,co,j,k,m,min_num=MAX,min_j;
    char A[50][50];
    int cnt[50];
    cin>>ro>>co;
    for(int i=0;i<co;i++)
    {
        cnt[i]=0;
        for(j=0;j<ro;j++)
        {
            cin>>A[i][j];
        }
        for(k=0;k<j;k++)
        {
            for(m=k+1;m<=j;m++)
            {
                if(A[i][k]>A[i][m])
                    cnt[i]++;
            }
        }
    }
    for(int i=0;i<co;i++)
    {
        min_num=MAX;
        min_j=0;
        for(int j=0;j<co;j++)
        {
            if(cnt[j]<min_num)
            {min_num=cnt[j];min_j=j;}
        }
        cnt[min_j]=MAX;
        for(int k=0;k<ro;k++)
        {
             cout<<A[min_j][k];
        }
        cout<<endl;
    }
}
