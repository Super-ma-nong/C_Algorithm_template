#include"Head.h"
#include<stdio.h>




//// 有序序列插入一个数-----不算真正的插入排序，只是用到了类似的算法
//void Move(int p_arr[], int n, int loc, int* num)
//{
//    int i = 0;
//    for (i = n - 1; i >= loc; i--)
//        p_arr[i + 1] = p_arr[i];
//    p_arr[loc] = *num;
//}
//int main()
//{
//    // 分配动态内存并输入
//    int n = 0;
//    scanf("%d", &n);
//    int* p = (int*)malloc(sizeof(int) * (n + 1));// ------动态内存
//    int i = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", p + i);
//
//    // 插入数字
//    int num = 0;
//    scanf("%d", &num);
//    for (i = 0; i < n; i++)
//    {
//        if (*(p + i) > num)
//        {
//            Move(p, n, i, &num);
//            break;
//        }
//        else
//            *(p + n) = num;
//    }
//    for (i = 0; i < n + 1; i++)
//        printf("%d ", *(p + i));
//    return 0;
//}