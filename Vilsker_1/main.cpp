#include <iostream>

using namespace std;

int main()
{
	for (int n = 5; n <= 20; n += 5)
	{
		cout << "Iterations: " << n << endl;
		for (double x = 0; x <= 1.2; x += 0.2)
		{
			double temp_x = x - 1;
			double dx = x - 1;
			double result = 0;
			for (int i = 1; i <= n; i++)
			{
				result += temp_x / i;
				temp_x *= dx;
			}
			cout << "\ty(" << x << ") = " << result << endl;
		}
	}
	return 0;
}
