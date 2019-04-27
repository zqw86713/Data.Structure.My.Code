// CPP program to implement run length encoding 
#include <bits/stdc++.h> 
#include<string>
using namespace std; 

string printRLE(string str) 
{ 
	int n = str.length(); 
	string compressed;
	int count = 0;

	for (int i = 0; i < n; i++) { 
		count++; 
		// Count occurrences of current character 
		 
		if (i < n - 1 && str[i] == str[i + 1]) { 
			compressed.append(str[i]);
			compressed.append(count);
			count = 0;
		} 
	} 

	return compressed.length() < str.length() ? compressed : str ;
} 

int main() 
{ 
	string str = "wwwwaaadexxxxxxywww"; 
	string s = printRLE(str); 
	cout << s << endl;
	return 0; 
} 
