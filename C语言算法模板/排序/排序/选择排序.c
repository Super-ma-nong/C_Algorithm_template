#include"Head.h"



//// ѡ������---- ģ��
//int main() {
//	int n = 0;
//	int arr[100] = { 0 };
//	// int flag = 0;
//	printf("Enter n:");
//	scanf("%d", &n);
//	printf("Enter %d integers:", n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	for (int j = 0; j < n - 1; j++) // ʵ����ÿ�ζ��� n-j ����Ѱ����С���ڽ���������λ����������
//	{
//		int min = j;// �����СԪ�ص��±ꡣ��ʼʱ��������Ԫ����С
//		for (int k = j + 1; k < n; k++)
//			if (arr[min] > arr[k])
//				min = k;// �����б���Ԫ�ظ�С�ģ��ͽ���С���±꣬��min
//
//		// �Ƚ����µ�������С���±��ҵ����������С�ķ��ڵ�һ��λ�ü���
//		{
//			int tmp = arr[j];
//			arr[j] = arr[min];
//			arr[min] = tmp;
//			// flag = 1;����Ҫ����û���ã�ֻ�ܵó�arr[0]С���κ���
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
//        int max = i; -----������Բ��ü�������±�max������������У������±�û�б仯�����仯�������ݡ�������max�������������������ֵ�ķ����������� ---������󣬿���ʡ������û�б�Ҫ�Ľ���
//        for (j = i + 1; j < n; j++)
//            if (arr[j] > arr[max])
//            {
//                max = j;
//                Exchange(arr, max, i);// ��������ҵ��Ǹ��ٵ�ð�������п��������Ż�
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


//// ѡ������
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
//				// flag = 1;����Ҫ����û���ã�ֻ�ܵó�arr[0]С���κ���
//			}
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

