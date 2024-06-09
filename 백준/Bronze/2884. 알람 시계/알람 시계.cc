#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {

	int h, m;

	cin >> h >> m;

	m -= 45;

	if (m < 0)
	{
		if (h == 0)
		{
			h = 23;
		}
		else
		{
			h -= 1;
		}
		
		int mResult = 60 + m;

		cout << h << " " << mResult;
	}
	else
	{
		cout << h << " " << m;
	}

	return 0;
}