#include<bits/stdc++.h>
using namespace std;
bool lemonadeChange(vector<int> &bill) {
	// Write your code here.
	int five=0, ten=0,twenty=0;
	for(int i=0;i<bill.size();i++)
	{
		if(bill[i]==5)
		five++;
		if(bill[i]==10)
		{
			ten++;
			if(five<1)
			return false;
			five--;

		}
		if(bill[i]==20)
		{
		twenty++;
		if(five<=0)
		return false;
		if(five<3&&ten<1)
		return false;
		if(five>=1&&ten>1)
		{
			ten--;
			five--;
		}
	
		else if(ten<1&&five>3)
		five-=3;
	}
	}
	return true;
}
