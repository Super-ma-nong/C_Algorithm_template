#include"Head.h"

// **********ð�������ģ��*************
//void Print(int arr[],int n)
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
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
//    int i = 0, j = 0 ;
//    for (i = 0; i < n; i++)
//    {
//        int flag = 0;// ��������ȽϺ���
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[i] < arr[j])
//            {
//                Exchange(arr, j, i);
//                flag = 1;//---------�Ż�
//            }
//        }
//        if (flag == 0)
//            return;
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
//    Print(arr,n);
//    return 0;
//}
//    ********************************

//// ����Ա����-ȥ��һ����߷�һ����ͷ�
//void Exchange(int arr[], int i, int j)
//{
//    int tmp = 0;
//    tmp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = tmp;
//}
//int main()
//{
//    // ��ʼ��������ɼ�
//    int arr[7] = { 0 };
//    int i = 0;
//    for (i = 0; i < 7; i++)
//        scanf("%d", &arr[i]);
//    // ð������
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

//// BC39-����ǰ����
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