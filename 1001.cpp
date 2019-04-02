#include<iostream>
#include<cstdio>
using namespace std;

typedef struct student
 {
 	char name[25];
	int qimo;
	int pingyi;
	char ganbu;
	char xibu;
	int paper_num;
	int money;
 };

int main(int argc, char const *argv[])
{
	int num=0;
	scanf("%d",&num);
	struct student stu[num];
	int M=0,Mnum=0,sum=0;
	for(int i=0;i<num;i++)
	{
		scanf("%s %d %d %c %c %d",
			stu[i].name,&stu[i].qimo,&stu[i].pingyi,&stu[i].ganbu,
			&stu[i].xibu,&stu[i].paper_num);
		stu[i].money=0;
		if(stu[i].qimo>80&&stu[i].paper_num>=1)
			stu[i].money=8000;
		if(stu[i].qimo>85&&stu[i].pingyi>80)
			stu[i].money+=4000;
		if(stu[i].qimo>90)
			stu[i].money+=2000;
		if(stu[i].qimo>85&&stu[i].xibu=='Y')
			stu[i].money+=1000;
		if(stu[i].pingyi>80&&stu[i].ganbu=='Y')
			stu[i].money+=850;
		if(stu[i].money>M)
			{Mnum=i; M=stu[i].money;}
		sum+=stu[i].money;
	}
	printf("%s\n%d\n%d\n", stu[Mnum].name,stu[Mnum].money,sum);
	return 0;
}
