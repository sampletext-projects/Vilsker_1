#include <iostream>

using namespace std;

double y(double x, int n)
{
	double temp_x = x - 1;
	double dx = x - 1;
	double result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += temp_x / i;
		temp_x *= dx;
	}
	return result;
}

int main()
{
	int iterations = 5;
	cout << "Iterations: " << iterations << endl;
	for (double x = 0; x <= 1.2; x += 0.2)
	{
		double res = y(x, iterations);
		cout << "\ty(" << x << ") = " << res << endl;
	}

	iterations = 10;
	cout << "Iterations: " << iterations << endl;
	for (double x = 0; x <= 1.2; x += 0.2)
	{
		double res = y(x, iterations);
		cout << "\ty(" << x << ") = " << res << endl;
	}

	iterations = 15;
	cout << "Iterations: " << iterations << endl;
	for (double x = 0; x <= 1.2; x += 0.2)
	{
		double res = y(x, iterations);
		cout << "\ty(" << x << ") = " << res << endl;
	}

	iterations = 40;
	cout << "Iterations: " << iterations << endl;
	for (double x = 0; x <= 1.2; x += 0.2)
	{
		double res = y(x, iterations);
		cout << "\ty(" << x << ") = " << res << endl;
	}
	return 0;
}
