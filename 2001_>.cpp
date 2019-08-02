#include<iostream>
#include<cstdio>
using namespace std;
class Input{
    public:
    string str;
    int position;
    int result;
};
int main()
{
    Input input[20];
    int nums=0;
    while(scanf("%s",input[nums].str.c_str())!=EOF)
        {input[nums].position=nums;nums++;}
    for(int i=0;i<nums;i++)
    {
        for(int j=i;j<nums;j++)
        {
            cout<<input[i].str;
            if(input[i].str>input[j].str)
            {
                Input temp=input[i];
                input[i]=input[j];
                input[j]=temp;
            }
        }
    }
    for(int i=0;i<nums;i++)
    {
        int j=0,k=0;
        while(input[i].str[j]==input[i-1].str[j]) j++;
        while(input[i].str[k]==input[i+1].str[k]) k++;
        input[i].result=max(j,k);
    }
    for(int i=0;i<nums;i++)
    {
        int j;
        for(j=0;j<nums;j++)
        {
            if(input[j].position==i)
                break;
        }
        cout<<input[j].str;
        for(int k=0;k<=input[j].result+1;k++)
        {
            cout<<input[j].str[k];
        }

    }
}
