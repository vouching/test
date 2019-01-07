#include <iostream>
#include <vector>
#include <map> 
using namespace std;
int main()
{
    vector <int> cards;
    for (int i=0;i<=4;i++)
    {
		int a;
        cin>>a;
        cards.push_back(a);
    }
    int x=cards[0];
    if((cards[1]==x)&&(cards[2]==x)&&(cards[3]==x)&&(cards[4]==x))
    {
        cout<<"impossible";
    }
    map <int,vector<int> > comb;
    for(int i=0;i<=4;i++)
    {
        comb[cards[i]].push_back(1);
    }
}
