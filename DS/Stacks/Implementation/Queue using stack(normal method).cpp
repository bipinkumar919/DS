# include <bits/stdc++.h>

using namespace std;

int main(){
	stack<int> s1,s2;
	queue<int> q;
	int n;

	cout<<"Enter the no of elements: ";
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cout<<"Element "<<i+1<<": ";
		cin>>a;

		q.push(a);

	}

	while(!q.empty()){
		s1.push(q.front());
		q.pop();
	}

	while(s1.size()>0){
		s2.push(s1.top());
		s1.pop();
	}

	while(s2.size()>0){
		cout<<s2.top();
		s2.pop();
	}

}