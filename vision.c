/*同时训练扩大水平方向视野的心算训练*/
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int stage;
    int a, b, c;                        // 心算的值
    int x;                              // 已读取的值
    int n;                              // 空白的宽度

    clock_t start, end;                 // 开始时间，结束时间

    srand(time(NULL));                  // 设定随机数的种子

    printf("扩大视野心算训练开始！\n");
    start = clock();
    for(stage = 0; stage < 10; stage++)
    {
        a = 10 + rand() % 90;           // 生成10~99的随机数
        b = 10 + rand() % 90;
        c = 10 + rand() % 90;
        n = rand() % 17;                // 生成0~16的随机数
        printf("%d%*s + %*s%d%*s + %*s%d: ", a, n, " ", n, " ", b, n, " ", n, " ", c);
        
        do
        {
            scanf("%d", &x);
            if (x == a + b + c) {
                break;
            }
            printf("\a回答错误，请重新输入：");
        } while (1);
        
    }
    end = clock();
    printf("用时%.1f秒。\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}
