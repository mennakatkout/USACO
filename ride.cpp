/*
 ID: menna.k2
 PROG: ride
 LANG: C++
 */
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	freopen("ride.in","r",stdin);
	freopen("ride.out","w",stdout);
	string a;
	string b;
	cin >> a >> b;

	long calcA = 1, calcB = 1;
	for (int i = 0; i < (int) a.size(); i++)
		calcA *= ((a[i] - 'A')+1);
	for (int i = 0; i < (int) b.size(); i++)
		calcB *= ((b[i] - 'A')+1);

	if( calcA%47 == calcB%47)
		cout<<"GO"<<endl;
	else
		cout<<"STAY"<<endl;
	return 0;
}
