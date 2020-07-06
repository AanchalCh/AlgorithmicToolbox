#include <bits/stdc++.h>

using namespace std;

int cmp(string a, string b) {
	string ab = a.append(b);
	string ba = b.append(a);
	return ab.compare(ba) > 0 ? 1: 0;
}

int main()
{
	int n;
	cin >> n;
	vector<string> arr(n);
	for(int i = 0; i < n ; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(),arr.end(),cmp);
	for(int i = 0; i < n; i++) {
		cout << arr[i];
	}
}
