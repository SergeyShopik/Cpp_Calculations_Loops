#include<iostream>
void _9_1_numsTriangle(int);
void _9_2_searchMaxDivSum(int);
void _9_3_searchAmicablePairs(int);
void _9_4_printThreeDigitNums(int);
void _9_5_findY(int);
void _9_6_findY(int);
void _9_7_findLargestDigit(int);

int main()
{
	int i = 0;
	_9_1_numsTriangle(i);
	_9_2_searchMaxDivSum(i);
	_9_3_searchAmicablePairs(i);
	_9_4_printThreeDigitNums(i);
	_9_5_findY(i);
	_9_6_findY(i);
	_9_7_findLargestDigit(i);
}
void _9_1_numsTriangle(int i)
{
	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << i * 10 << " ";
		}
		if (i < 3)
			std::cout << "\t\t";
		else std::cout << "\t";
		for (int j = 5; j >= i; j--)
		{
			std::cout << i * 5 << " ";
		}
		if (i > 3)
			std::cout << "\t\t";
		else std::cout << "\t";
		for (int j = 1; j <= i; j++)
		{
			std::cout << i - j << " ";
		}
		if (i < 4)
			std::cout << "\t\t";
		else std::cout << "\t";
		for (int j = 5; j >= i; j--)
		{
			std::cout << j + 2 - i << " ";
		}
		std::cout << "\n";
	}
}
void _9_2_searchMaxDivSum(int i)
{
	int a, b, maxsum = 0, sum, element;
	std::cout << "Enter range:";
	std::cin >> a >> b;
	for (size_t i = a; i <= b; i++)
	{
		sum = 0;
		for (size_t j = 1; j < i; j++)
		{
			if (i % j == 0)
				sum += j;
		}
		if (sum > maxsum)
		{
			maxsum = sum;
			element = i;
		}
	}
	std::cout << "Max sum is " << maxsum << " of the number " << element << std::endl;
}
void _9_3_searchAmicablePairs(int i)
{
	for (size_t i = 2; i <= 500; i++)
	{
		int sumdiv = 0;
		int secondsumdiv = 0;
		for (size_t div = 1; div <= i / 2; div++)
		{
			if (i % div == 0)
				sumdiv += div;
		}
		for (sumdiv; sumdiv > 0; sumdiv--)
		{
			for (size_t div = sumdiv / 2; div > 0; div--)
			{
				if (secondsumdiv % div == 0)
					secondsumdiv += div;
			}
		}
		if (i == secondsumdiv)
			std::cout << i << " and " << sumdiv << std::endl;
	}
}
void _9_4_printThreeDigitNums(int i)
{
	for (size_t i = 102; i < 1000; i++)
	{
		int temp1, temp2, temp3;
		temp1 = i % 10;
		temp2 = ((i - temp1) / 10) % 10;
		temp3 = (((i - temp1) / 10) - temp2) / 10;
		if (temp1 == temp2 || temp1 == temp3 || temp2 == temp3) continue;
		std::cout << i << "  ";
	}
}
void _9_5_findY(int i)
{
	double a, b, h, m, x, y, sum = 0;
	std::cout << "Enter a, b, h, m \n";
	std::cin >> a >> b >> h >> m;
	for (x = a; x <= b; x += h)
	{
		for (size_t n = 1; n <= m; n++)
		{
			y = pow(x, ((n - 1) * 2)) / (n * 2 + 2) * (1 / tan(n * x));
			sum += y;
		}
		std::cout << sum << std::endl;
	}
}
void _9_6_findY(int i)
{
	double a, b, h, x, y;
	std::cout << "Enter a, b, h \n";
	std::cin >> a >> b >> h;
	for (x = a; x <= b; x += h)
	{
		y = tan(x) / sqrt(1 - sin(x));
		std::cout << y << std::endl;
	}
}
void _9_7_findLargestDigit(int i)
{
	int n, maxDigit;
	std::cout << "Enter number:\n";
	std::cin >> n;
	maxDigit = n % 10;
	for (n; n > 0; )
	{
		int temp, prevTemp;
		temp = n % 10;
		prevTemp = (n / 10) % 10;
		if (temp < prevTemp)
			maxDigit = prevTemp;
		n /= 10;
	}
	std::cout << "The largest digit is " << maxDigit << std::endl;
}
