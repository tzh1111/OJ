#include <iostream>

using namespace std;
int main()
{
	int k;
	int i=1;
	double sum=0;
	cin>>k;
	while(sum<=k)
    {
        sum+=1.0/i;
        i++;
    }
    i--;
	cout<<i;
	return 0;
}
