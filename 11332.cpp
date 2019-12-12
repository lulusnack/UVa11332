#include <iostream>
using namespace std;
int f(int n);
// 練習使用遞迴
int main()
{
	int input = 0; // 測資範圍為:最大為2,000,000,000的正整數。
	while (cin >> input && input != 0) // 由輸入0來結束程式。
	{
		cout << f(input) << endl;
	}
	return 0;
}// 結束

int f(int n) // 根據題目敘述實作
{
	int sum = 0;

	while (n > 0) // 將各位數相加並存於sum變數中。
	{
		sum += n % 10;
		n /= 10;
	}

	if (sum > 9) // sum若大於二位數就再次執行f函式，直到sum為個位數才回傳。
	{
		return f(sum);
	}
	else
		return sum;
}