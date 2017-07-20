#include <iostream>
#include <cstdio>

using namespace std;

char arr[80];
char point[80];

int main()
{
	int n;
	cin >> n;
	int cnt = 0;

	while(n--)
	{
		while(scanf("%c", arr) == 1)
		{
			//int cnt = 0;
			cin >> arr[cnt]
			cnt++;
		}

		for(int i = 0 ; i < cnt; i++)
		{
			if(i == 0 || arr[i] == 'X')
				point[i] = 0;
			else if((arr[i-1] == 'X') && (arr[i] == 'O'))
				point[i] = 1;
			else if(arr[i-1] == 'O')
				point[i] += point[i-1];
		}

		int sum;

		for(int i = 0; i < cnt; i++)
		{
			sum += point[i];
			cout << sum << '\n';
		}
		
	}



	return 0;
}