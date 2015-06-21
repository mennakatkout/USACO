/*
 ID: menna.k2
 PROG: friday
 LANG: C++
 */

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int getDays(int monthNum, bool isLeap) {
	if (monthNum == 9 || monthNum == 11 || monthNum == 4 || monthNum == 6)
		return 30;
	if(monthNum == 2){
		if(!isLeap) return 28;
		else return 29;
	}
	return 31;
}
int main() {
	int month = 1;
	int day = 3;
	int year = 1900;
	int N;
	cin >> N;
	for(int i = year ; i <year+N ; i++){
		for(int j = 1; j <=12 ; j++){

		}
	}

	return 0;
}
