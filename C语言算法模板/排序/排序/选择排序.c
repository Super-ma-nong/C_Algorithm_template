#include"Head.h"



//// 选择排序---- 模板
//int main() {
//	int n = 0;
//	int arr[100] = { 0 };
//	// int flag = 0;
//	printf("Enter n:");
//	scanf("%d", &n);
//	printf("Enter %d integers:", n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	for (int j = 0; j < n - 1; j++) // 实质上每次都在 n-j 个中寻找最小的在将它放在首位。依次类推
//	{
//		int min = j;// 存放最小元素的下标。起始时，假设首元素最小
//		for (int k = j + 1; k < n; k++)
//			if (arr[min] > arr[k])
//				min = k;// 发现有比首元素更小的，就将更小的下标，给min
//
//		// 等将余下的数中最小的下标找到，将这个最小的放在第一个位置即可
//		{
//			int tmp = arr[j];
//			arr[j] = arr[min];
//			arr[min] = tmp;
//			// flag = 1;这里要开关没有用，只能得出arr[0]小于任何数
//		}
//	}
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}






//void Print(int arr[],int n)
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
//void MyList(int arr[], int n)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        int max = i; -----这里可以不用假设最大下标max，在排序过程中，数组下标没有变化过，变化的是内容。定义了max，就有种利用找求最大值的方法进行排序 ---假设最大，可以省略许多次没有必要的交换
//        for (j = i + 1; j < n; j++)
//            if (arr[j] > arr[max])
//            {
//                max = j;
//                Exchange(arr, max, i);// 这个类似我的那个假的冒泡排序有可能能做优化
//            }
//
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
//    MyList(arr, n);
//    Print(arr,n);
//    return 0;
//}


//// 选择排序
//int main() {
//	int n = 0;
//	int arr[100] = { 0 };
//	// int flag = 0;
//	printf("Enter n:");
//	scanf("%d",&n);
//	printf("Enter %d integers:",n);
//	for (int i = 0; i < n; i++)
//		scanf("%d",&arr[i]);
//	for(int j=0;j<n-1;j++)
//		for(int k=j+1;k<n;k++)
//			if (arr[j] > arr[k])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[k];
//				arr[k] = tmp;
//				// flag = 1;这里要开关没有用，只能得出arr[0]小于任何数
//			}
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

