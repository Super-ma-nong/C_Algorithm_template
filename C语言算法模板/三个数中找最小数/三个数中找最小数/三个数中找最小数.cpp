#include<iostream>
using namespace std;

// ������������С�����㷨-----��Ŀ������
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int min = a < (b < c ? b : c) ? a : (b < c ? b : c);
	cout << min;
	return 0;
}

// ���������ϻ������ã�������߱Ƚϴ�С

int main() {
	int a, arr[10],n;
	int min = a;
	for (int i = 0; i < n; i++)
		if (arr[i] < min) min=arr[i];
}

