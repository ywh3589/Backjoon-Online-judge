#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string c;
    string line;
	while(cin >> line)
	{
		c += line;
	}

    istringstream inputString(c);

	int sum = 0;
    string number;

	while(getline(inputString, number, ','))
	{
		sum += stoi(number);
	}

	cout << sum;

	return 0;
}