#include <bits/stdc++.h>
#include <vector>
#include <math.h>       

using namespace std;


int main(){

	int t, n, m;

	cin >> t;

	for (int i = 0; i < t; i++){
		cin >> n >> m;

		if (n%m == 0){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}

	return 0;
}