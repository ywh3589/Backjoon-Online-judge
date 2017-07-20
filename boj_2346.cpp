#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
	int n;
	cin >> n;

	list<pair<int,int>> a;

	// let's think about how to get data.
	for(int i = 1 ; i <= n; ++i)
	{
		int x;
		cin >> x;
		a.push_back({x,i});
	}

	auto it = a.begin(); // lets use iterator for coding from now on instead of primitive c pointer
	for(int i = 0; i < n-1; i++)
	{
		cout << (it->second) << ' ';
		int step = it->first;

		if(step > 0){
			auto temp = it;
			++temp;
			if(temp == a.end()){
				temp = a.begin(); //  if temp is over end then it has to come back to the first.
			}
			a.erase(it);
			it = temp;
			for(int i = 1; i < step; i++){
				++it;
			if(it == a.end())
				it = a.begin();
			}
		}
		else if(step < 0){
			auto temp = it;
            step = -step;
			if(temp == a.begin())
			{
			    temp = a.end();
			}	
			--temp;
			a.erase(it);
			it = temp;
			for(int i = 1; i < step; ++i)
			{
				if(it == a.begin()){
				it = a.end();
				}
				--it;
			}
			
			}
	}


	cout << a.front().second << '\n';


	return 0;
}