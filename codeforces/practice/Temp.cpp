#include <bits/stdc++.h>
using namespace std;

char* convert(int n){
	int sz = 20;
	char *parsed = (char*) malloc(20);
	char *begin = parsed;
	stack<int> s;
	while(n>0){
		s.push(n%10);
		n/=10;
	}
	while(!s.empty()){
		*parsed = s.top()+'0';
		s.pop();
		parsed++;
	}
	*parsed='\0';
	return begin;
}

int main() {
    int a=5;
	cin>>a;
	puts(convert(++a + ++a));
}