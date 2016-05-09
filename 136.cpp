//#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<set>
using namespace std;
typedef long long L;
const int g[3] = { 2,3,5 };
int main()
{
	priority_queue<L, vector<L>, greater<L> > pq;
	set<L> s;
	pq.push(1);
	s.insert(1);
	for (int i = 1;; i++)
	{
		L x = pq.top();
		pq.pop();
		if (i == 1500)
		{
			cout << "The 1500'th ugly number is " << x <<"."<< endl;
			break;
		}
		for (int i = 0; i < 3; i++)
		{
			L x2= x*g[i];
			if (!s.count(x2))
			{
				s.insert(x2);
				pq.push(x2);
			}
		}
	}
	//system("PAUSE");
	return 0;
}