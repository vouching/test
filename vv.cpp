#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
	int a,b;
	char c,o;
	cin>>a>>c;
	int i=0;
	while(3==i)
	{
		
	cin>>o;
	i=1;
	cin>>b;
	i=2;
	cin>>c;
	i=3;
	if(o=='+')
	a=a+b;
	if(o=='-')
	a=a-b;
	}	
	cout<<a;
	
	
}
