#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string> cities;
	while(!cin.eof()){
		cities.emplace_back(*istream_iterator<string>(cin));
	}
	sort(cities.begin(), cities.end(), less<string>());
	
	for(char cs = 'a'; cs <= 'z'; cs++){
		cout << " hi"<<endl;
		while(*cities.begin()[0] == cs){
			cout << (*cities.begin())[0] << endl;
			cout << *(cities.begin()) << "\n";
			cities.erase(cities.begin());
		}
	}
}