#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	string s;
	//char *c;
	
	while(getline(cin,s))
	{
		int upperNum = 0;
		int lowerNum = 0;
		int numNum = 0;
		int blankNum = 0;
		for(char c: s)
		{
			if(c>='A' && c <= 'Z') //upper case
				upperNum++;
			else if (c >= 'a' && c <= 'z'/*lower case */)
			{
			/* code */lowerNum++;
			}	
			else if (c>= '0' && c <= '9'/* number */)
			{
			/* code */numNum++;
			}
			else if(c == ' ')
			{
				blankNum++;
			}
		}

		cout << lowerNum << ' ' << upperNum << ' ';
		cout << numNum << ' ' << blankNum << '\n';

	}
	
	return 0;
}