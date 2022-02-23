#include <bits/stdc++.h>
#include <vector>
#include <math.h>       

using namespace std;


int main(){

	long long int a, b, c, d;

	cin >> a >> b >> c >> d;

	long long int MAX = 0;
	
	MAX = a * c;

	if (a * d > MAX){
		MAX = a * d;
	}

	if (b * c > MAX){
		MAX = b * c;
	}

	if (b * d > MAX){
		MAX = b * d;
	}

	cout << MAX;

	return 0;
}