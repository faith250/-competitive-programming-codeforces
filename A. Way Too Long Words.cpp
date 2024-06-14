#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		//enter the strings and find the characters
		cin>>s;
		if(s.length()>10)
		{
			int len=s.length();
			cout<<s[0]<<s.length()-2<<s[len-1];;
			
		}
		else{
			cout<<s;
		}
		cout<<"\n";

	}

}