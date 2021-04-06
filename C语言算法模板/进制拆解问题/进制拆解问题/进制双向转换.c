#include"Head.h"
// ********************      模板            ***************

void RadixDecompose(int n)
{
	//for (i = 0; i < 4; i++, a /= 10)//简洁度+1,其实这种for不做到简洁度+2就需要知道循环次数
		for (; n; n /= 10)//简洁+2
		{
			printf("%d", n % 10);// 位数输出是反向的
		}
}

/*  *****************************    */
//(提前计数：count=1;提前输出最后一位 printf("%d",num%10);) 这种适用于while(i/=10);
// 而while(i/10)不用
// while(i/=10) {  i % 10 ;  } 是基本思想，但是也要灵活变通


// ----------------------   进制合成为整数 ——----------------------

//int main() {
//	int arr[10] = { 0,1,2,3,4,5 };
//	int sum = 0;
//	int x = 10;// 十进制
//	for (int i = 0; i < 6; i++)
//		sum = sum * x+ arr[i]; // 核心算法
//	return 0;
//}







///反向输出一个四位数（题库中没有，我在这里加的）---十进制
//int main()
//{
//	int a = 0;
//  sacnf("%d",&a);
//	int i = 0;
	//for (i = 0; i < 4; i++,a/=10)//简洁+1
	//for(;a;a/=10)//简洁+2
	//{
	//	printf("%d",a%10);
	//}
//	return 0;
//}
// // 2021.3.31 再次练习一遍
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d ", num % 10);
//	while (num /= 10) {
//		printf("%d ", num % 10);
//	}
//}


//// 包含数字9的数
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int num = i;// 新建一个变量存 i
//        do// 先比较再进行舍弃
//        {
//            if (num % 10 == 9)
//            {
//                count++;
//                break;
//            }
//        } while (num /= 10);// while (i /= 10);----不能在循环内部改变循环变量
//    }
//    printf("%d", count);
//    return 0;
//}
// 这题如果投机取巧大可以用一个一个数的方法---这个方法还蛮考验数数的算法（没有规律不好数）的哈

// // 2021.3.31 再次练习
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num) {
//		if (num % 10==9) {
//			printf("yes");
//			return 0;
//		}
//		num /= 10;
//	}
//	printf("no");
//	return 0;
//}