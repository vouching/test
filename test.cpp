#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
//#include "stdafx.h"
using namespace std;
void prv (vector <int>& as)
{
	int i=0;
	int g=as.size()-1;
	while(i<=g)
	{
		cout<<as[i]<<" ";
		i++;
	}
}
class stds
{
	public:
	int first;
	int second;
	stds(){
		a=4;
		b=5;
	}
	void ach(int& n)
	{
		a=n;
		
	}
	void pra()
	{
		cout<<a<<endl;
	}
	void bch(int& n)
	{
		b=n;
		
	}
	void prb()
	{
		cout<<b<<endl;
	}
	private:
	int a;
	int b;
};
class Box {  
public:  
    Box(int width, int length, int height){  
       m_width = width;  
       m_length = length;  
       m_height = height;  
    }  
  
private:  
    int m_width;  
    int m_length;  
    int m_height;  
};  
int main()
{
	stds f; 
	int g=7;
	f.ach(g);
	f.pra();
	f.bch(g);
	f.prb();
	vector <int> as;
	prv(as);
	
    sort(as.begin(),as.end());
    cout<<endl;
    prv(as);
    
}
