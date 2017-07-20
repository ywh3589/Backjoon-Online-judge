#include <iostream>
#include <string>
//#include <stolld>
using namespace std;

int main()
{
    string aString, bString, cString, dString;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
    aString = to_string(a);
    bString = to_string(b);
    cString = to_string(c);
    dString = to_string(d);
	aString+=bString;
    cString+=dString;
	long long aNum = stoull(aString);
	long long bNum = stoull(cString);

	cout << aNum + bNum;


	return 0;
}