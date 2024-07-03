#include<iostream>
	using namespace std;
	int main()
	{
		int i = 0, j = 0, range = 5, k = 0, count = 0, count1 = 0;
		for (i = 1; i <= range; ++i)
		{
			for (j = 1; j <= range - i; ++j)
			{
				cout << " ";
				++count;
			}
			while (k != 2 * i - 1)
			{
				if (count <= range - 1)
				{
					cout << i + k << " ";
					++count;
				}
				else
				{
					++count1;
					cout << i + k - 2 * count1 << " ";
				}
				++k;
			}
			count1 = count = k = 0;
			cout << "\n";
		}
        return 0;
    }