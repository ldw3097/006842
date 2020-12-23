#include<bits/stdc++.h>
using namespace std;


int main(){
	array<long long, 50> fibonacci{0,1};
	for(long long i = 2; i<50; i++){
		fibonacci.at(i) = fibonacci.at(i-2) + fibonacci.at(i-1);
	}
	for(long long i = 0; i<50; i++){
		cout << fibonacci.at(i) << " ";
		if(i%8 == 7) cout << "\n";
	}
	return 0;
}