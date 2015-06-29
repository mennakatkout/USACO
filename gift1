/*
 ID: menna.k2
 PROG: gift1
 LANG: C++
 */

#include<iostream>
#include<string>
#include<fstream>
#include<map>
using namespace std;

int main() {
	//for testing
//	freopen("input/gift1.in", "r", stdin);
	//for submitting
	freopen("gift1.in", "r", stdin);
	freopen("gift1.out", "w", stdout);
	int N;
	cin >> N;
	int gifts, to;
	string *names = new string[N]();
	map<string, int> money;
	string curr;
	string friends;
	for (int i = 0; i < N; i++) {
		cin >> names[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> curr;
		cin >> gifts >> to;
		int div = 0;
		if(to!=0)
			div = gifts/to;
		for (int j = 0; j < to; j++) {
			cin>>friends;
			money[friends]+= div;
		}
		int rem = gifts-(div*to);
		money[curr] -=(gifts-rem);
	}
	for(int i = 0 ; i < N ; i++)
		cout<<names[i]<<" "<<money[names[i]]<<endl;
	delete[] names;
	return 0;
}
