#include <stdio.h>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

bool comp(string s1, string s2){
	
	if(s1.length()!=s2.length()) return s1.length() < s2.length();
	
	return s1 < s2;	
}

int main(){
	
	int n, i;
	
	cin>>n;

	//문자열 배열
	string sArr[n];
	
	for(i=0; i<n; i++)
	{
		cin>>sArr[i];
	}
	


	sort(sArr, sArr+n, comp);
	
	//출력 
	for(i=0; i<n; i++)
	{
		if(i>=1 && sArr[i]==sArr[i-1]) continue;
		cout << sArr[i] << endl;
	}
	
	return 0;
}