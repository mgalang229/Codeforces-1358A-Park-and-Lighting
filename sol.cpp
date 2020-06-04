#include <bits/stdc++.h>
 
using namespace std;

void decode(){
	int n, m;
	cin >> n >> m;
	if(n%2==0||m%2==0){
		cout << (n*m)/2;
	}else {
		cout <<((n*m)+1)/2;
	}
	cout << "\n";
}	

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		decode();
	}
	return 0;
}
