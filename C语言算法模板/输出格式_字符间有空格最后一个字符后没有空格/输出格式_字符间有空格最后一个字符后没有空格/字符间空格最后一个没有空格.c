#include"Head.h"
// ***********      模板       **********
int main()
{
    int count = 0,i=0;
    // 如何使输出的结尾没有空格(可以整理出来当作模板)
    if (count == 0)
    {
        printf("%d", i);
        count++;
    }
    else
        printf(" %d", i);
}
// ----------- 靠循环变量来判断也是一种方法-------


//// BC38-变种水仙花
//int main()
//{
//    int i = 10000;
//    int count = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        int a = 0, b = 0, c = 0, d = 0;
//        int j = 0;
//        int sum = 0;
//        for (j = 10; j <= 10000; j *= 10)// 循环的方式
//        {
//            sum += (i % j) * (i / j);
//        }
//        if (sum == i)
//        {
//            // 如何使输出的结尾没有空格
//            if (count == 0)
//            {
//                printf("%d", i);
//                count++;
//            }
//            else
//                printf(" %d", i);
//        }
//    }
//    return 0;
//}