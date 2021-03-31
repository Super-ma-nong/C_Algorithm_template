//#include"Head.h"

//// **********冒泡排序的模板*************
//void Exchange(int& n, int& m) {
//	n = m ^ n;
//	m = n ^ m;
//	n = n ^ m;
//}
//int arr[100];
//void Bubble_sort(int arr[], int n) {
//	int flag = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n - i - 1; j++) {
//			if (arr[j] < arr[j + 1])
//			{
//				Exchange(arr[j], arr[j + 1]);
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			return;
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	Bubble_sort(arr, n);
//	for (int i = 0; i < n; i++)
//		printf("%d", arr[i]);
//}
//    ********************************

//// 公务员面试-去掉一个最高分一个最低分
//void Exchange(int arr[], int i, int j)
//{
//    int tmp = 0;
//    tmp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = tmp;
//}
//int main()
//{
//    // 初始化并输入成绩
//    int arr[7] = { 0 };
//    int i = 0;
//    for (i = 0; i < 7; i++)
//        scanf("%d", &arr[i]);
//    // 冒泡排序
//    int j = 0;
//    for (i = 0; i < 7; i++)
//    {
//        for (j = i + 1; j < 7; j++)
//            if (arr[i] < arr[j])
//                Exchange(arr, i, j);
//    }
//    int sum = 0;
//    for (i = 1; i < 6; i++)
//        sum += arr[i];
//    printf("%.2f", sum / 5.0);
//    return 0;
//}

//// BC39-争夺前五名
//void Print(int arr[])
//{
//    int i = 0;
//    for (i = 0; i < 5; i++)
//        printf("%d ", arr[i]);
//}
//void Exchange(int arr[], int j, int i)
//{
//    int tmp = 0;
//    tmp = arr[j];
//    arr[j] = arr[i];
//    arr[i] = tmp;
//}
//void BubbleSort(int arr[], int n)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[j] > arr[i])
//                Exchange(arr, j, i);
//        }
//    }
//}
//int main()
//{
//    int arr[40] = { 0 };
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    BubbleSort(arr, n);
//    Print(arr);
//    return 0;
//}