#include<iostream>
using namespace std;

// 求三个数中最小数的算法-----三目操作符
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int min = a < (b < c ? b : c) ? a : (b < c ? b : c);
	cout << min;
	return 0;
}

// 三个及以上还可以用：边输入边比较大小

int main() {
	int a, arr[10],n;
	int min = a;
	for (int i = 0; i < n; i++)
		if (arr[i] < min) min=arr[i];
}

