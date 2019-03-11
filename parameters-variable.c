// stdarg.h 头文件
// 该文件提供了实现可变参数功能的函数和宏、具体步骤如下：

// 定义一个函数，最后一个参数为省略号，省略号前面可以设置自定义参数
// 在函数定义中创建一个 va_list 类型变量，该类型是在 stdarg.h 头文件中定义的
// int 参数和 va_start 宏来初始化 va_list 变量为一个参数列表，宏 va_start 是在 stdarg.h 头文件中定义的
// va_arg 宏和 va_list 变量来访问参数列表中的每个项
// 宏 va_end 来清理赋予 va_list 变量的内存

#include <stdio.h>
#include <stdarg.h>
 
double average (int num, ...) {
    va_list valist;

    double sum = 0.0;
    int i;
 
    /* 为 num 个参数初始化 valist */
    va_start (valist, num);
 
    /* 访问所有赋给 valist 的参数 */
    for (i = 0; i < num; i++) {
       sum += va_arg(valist, int);
    }

    /* 清理为 valist 保留的内存 */
    va_end (valist);
 
    return sum / num;
}

/**
 * 主函数
 * @return {int}
 */
int main () {
   printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
   printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));

   return 0;
}