#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	int n;
	int iter;
	char c[21];
	char *p;
	p = c;
	int cnt = 0;
	while(n--)
	{
		cin >> iter;
		scanf("%s",c);
		while(*p != '\n')
		{
			p++;
			cnt++;
		}
		for(int j = 0; j < cnt; j++)
		for(int i = 0; i < iter; i++)
			cout << c[j];

	}	


	return 0;
}