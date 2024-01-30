#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;
int main(){



// Key Value 
	// raj -> 27 
	// hima -> 31 
	// sandeep -> 67 
	// tank -> 89 
	// map only stores unique keys 
	// log n is the tc of map 
	map<string, int> mpp; 
	mpp["raj"] = 27; 
	mpp["hima"] = 31; 
	mpp["praveer"] = 31;
	mpp["sandeep"] = 67; 
	mpp["tank"] = 89; 
	mpp["raj"] = 29; 
	mpp.emplace("raj", 45); 
	mpp.erase("raj"); // mpp.erase(key) 
	mpp.erase(mpp.begin()); // mpp.erase(iterator)
	mpp.clear(); // entire map is cleaned up
	mpp.erase(mpp.begin(), mpp.begin()+2); // cleans up a given range
	auto it = mpp.find("raj"); // points to where raj lies 
	auto it = mpp.find("simran"); // points to end since she does not exists 
 
	if(mpp.empty()) {
		cout << "Yes it is empty"; 
	}
	mpp.count("raj"); // always returns 1 as it stores only 1 
	// instance of raj 
 
	pair<int,int> pr;
	pr.first = 1; 
	pr.second = 10; 
 
	// printing map 
	for(auto it: mpp) {
		cout << it.first << " " << it.second << endl; 
	}
 
	for(auto it = mpp.begin(); it!=mpp.end();it++) {
		cout << it->first << " " << it->second << endl; 
	}
 
	// does not stores in any order 
	unordered_map<int,int> mpp; 
	// unordered_map<pair<int,int>,int> mpp; xxxxxx
	// o(1) in almost all cases
	// o(n) in the worst case, where n is the container size 
 




}