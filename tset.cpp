#include <iostream>
using namespace std;

int main()
{
    int n=0;
    int s[n],p[n];
    cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> s[i];
	}
	for(int i=0; i<n; i++)
	{
		cin >> p[i];
	}
	
	cout << n << endl;
	for(int i=0; i<n; i++)
	{
		cout << s[i] << " ";
	}
	for(int i=0; i<n; i++)
	{
		cout << p[i] << " ";
	}
	
    
}