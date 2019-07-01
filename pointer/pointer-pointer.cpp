/**
 * 指向指针的指针
 * @author unknow
 */
#include <iostream>
 
using namespace std;

/**
 * 主函数
 * @return {int} 0
 */
int main () {
    int var;
    int *ptr;
    int **pptr;
 
    var = 3000;
 
    // 获取 var 的地址
    ptr = &var;
 
    // 使用运算符 & 获取 ptr 的地址
    pptr = &ptr;
 
    // 使用 pptr 获取值
    cout << "var 值为 :" << var << endl;
    cout << "*ptr 值为:" << *ptr << endl;
    cout << "**pptr 值为:" << **pptr << endl;
 
    return 0;
}
