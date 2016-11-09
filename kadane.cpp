#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int max_Atual = 0, max_Total = -1;
	int n, myint;
	vector <int> v;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> myint;
		v.push_back(myint);
	};

	for (int i = 0; i < v.size(); i++) {
		max_Atual += v[i];
		
		if (max_Atual < 0)
			max_Atual = 0;
		if (max_Atual > max_Total)
			max_Total = max_Atual;
	};

	cout << max_Total << endl;

	/*
	 * chupa alisonlino kkkk
	*/
};
