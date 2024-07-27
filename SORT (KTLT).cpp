#include<bits/stdc++.h>
using namespace std;

bool compare(const string &a, const string &b){
	if(a.size() != b.size()){
		return a.size() < b.size();
	}
	return a < b;
}

int main(){
	int n; cin >> n;
	vector<string> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end(), compare);
	for(string x : a){
		cout << x << endl;
	}
	return 0;
}
