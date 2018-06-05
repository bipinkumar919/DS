#include <bits/stdc++.h>
using namespace std;

int main(){
	unordered_set<string> stringSet;

	stringSet.insert("My");
	stringSet.insert("name");
	stringSet.insert("is");
	stringSet.insert("nim");
	stringSet.insert("tatta");

	string key="nim";

	if(stringSet.find(key)==stringSet.end())
		cout<<key<<" not found";
	else
		cout<<"Found";


	unordered_set<string> ::iterator itr;

	for(itr=stringSet.begin();itr!=stringSet.end();itr++)
		cout<<(*itr)<<endl;
}