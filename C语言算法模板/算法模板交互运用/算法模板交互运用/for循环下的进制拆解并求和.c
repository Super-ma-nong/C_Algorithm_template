#include"Head.h"
// BC38-变种水仙花
int LilyNumber()
{
    int i = 10000;
    int count = 0;
    for (i = 10000; i <= 99999; i++)
    {
        int a = 0, b = 0, c = 0, d = 0;
        int j = 0;
        int sum = 0;
        for (j = 10; j <= 10000; j *= 10)// 循环的方式
        {
            sum += (i % j) * (i / j);// for循环下进制拆解并求和
        }
        if (sum == i)
        {
            // 如何使输出的结尾没有空格
            if (count == 0)
            {
                printf("%d", i);
                count++;
            }
            else
                printf(" %d", i);
        }
    }
    return 0;
}