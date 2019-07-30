#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int numbers;
    bool hasflag=false;
    char temp;
    char int_tel[100][15];
    int flag;
    bool value[100];
    cin>>numbers;
    scanf("%c",&temp);
    for(int i=0;i<numbers;i++)
    {
        int j=0;
        value[i]=true;
        while(true)
        {
            scanf("%c",&temp);
            if(temp=='\n')
            {
                int_tel[i][j]='\0';
             break;
            }
            if(temp>='0'&&temp<='9')
                int_tel[i][j++]=temp;
            else if(temp>='A'&&temp<='Z')
            {
                if(temp<'Q')
                    int_tel[i][j++]=(temp-'A')/3+2+'0';
                else if(temp=='P')
                    int_tel[i][j++]='5';
                else
                    int_tel[i][j++]=(temp-1-'P')/3+6+'0';
            }
        }
    }
    cout<<"-----"<<endl;
    for(int i=0;i<numbers;i++)
    {
            for(int j=0;j<3;j++)
                printf("%c",int_tel[i][j]);
            cout<<"-";
            for(int j=3;j<=6;j++)
                printf("%c",int_tel[i][j]);
            cout<<endl;
    }
    cout<<"-----"<<endl;
    for(int i=0;i<numbers;i++)
    {
        if(value[i]==true)
        {
            flag=1;
            for(int j=i+1;j<numbers;j++)
        {
            if(strcmp(int_tel[i],int_tel[j])==0)
            {
                if(flag==1)
                {
                    for(int k=0;k<3;k++)
                        printf("%c",int_tel[i][k]);
                    cout<<"-";
                    for(int k=3;k<=6;k++)
                        printf("%c",int_tel[i][k]);
                }
                flag++;
                value[j]=false;
                hasflag=true;
            }
        }
        cout<<flag<<endl;
        }
    }
    if(hasflag==false)
        cout<<"No duplicates."<<endl;
}
