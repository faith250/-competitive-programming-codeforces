#include<bits/stdc++.h>
using namespace std;
int main()
{
	//enter the number of problems
	int p;
	cin>>p;
	int count=0;
	int sum;
	int friends[3];
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>friends[j];
			sum=friends[0]+friends[1]+friends[2];
			if(sum>=2)
			{
				count++;
			}
		}

		

	}
	cout<<count;
}