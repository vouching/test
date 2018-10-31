#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
	stack <int> s;
	s.push(5);
	s.pop();
	s.push(0);
	int a=s.top();
	cout<<a;
	
}
