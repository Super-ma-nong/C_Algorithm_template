#include"Head.h"
// BC38-����ˮ�ɻ�
int LilyNumber()
{
    int i = 10000;
    int count = 0;
    for (i = 10000; i <= 99999; i++)
    {
        int a = 0, b = 0, c = 0, d = 0;
        int j = 0;
        int sum = 0;
        for (j = 10; j <= 10000; j *= 10)// ѭ���ķ�ʽ
        {
            sum += (i % j) * (i / j);// forѭ���½��Ʋ�Ⲣ���
        }
        if (sum == i)
        {
            // ���ʹ����Ľ�βû�пո�
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