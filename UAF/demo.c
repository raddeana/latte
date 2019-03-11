#include <stdio.h>

int main () 
{
    char *p1;
    p1 = (char *)malloc(sizeof(char) * 10);

    memcpy(p1, "hello", 10);
    printf("p1 addr:%x, %s\n", p1, p1);
    
    free(p1);
    char *p2;
    p2 = (char *)malloc(sizeof(char) * 10);
    memcpy(p2, "world", 10);
    prinrf("p2 addr:%x, %s\n", p2, p1);

    return 0;
}

// 指针 p1 申请内存，打印其地址，值
// 然后释放 p1
// 指针 p2 申请同样大小的内存，打印 p2 的地址，p1 指针指向的值