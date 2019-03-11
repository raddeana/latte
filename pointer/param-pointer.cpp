/**
 * 指针为参数
 * @author unknow
 */
#include <iostream>
#include <ctime>
 
using namespace std;

// 函数声明
void getSeconds(unsigned long *par);
double getAverage(int *arr, int size);
 
/**
 * 主函数
 * @return {int} 0
 */
int main () {
   unsigned long sec;
   getSeconds( &sec );
 
   // 输出实际值
   cout << "Number of seconds :" << sec << endl;
 
   return 0;
}

/**
 * 获取秒数
 * @param {long *} 长整型指针
 * @return {none}
 */
void getSeconds (unsigned long *par) {
   // 获取当前的秒数
   *par = time( NULL );
   return;
}

/**
 * 获取平均值
 * @param {int *[]} 指向数组的指针
 * @param {number} 数组大小
 * @return {none}
 */
double getAverage (int *arr, int size) {
   int i, sum = 0;       
  
   double avg;          
 
   for (i = 0; i < size; ++i) {
    sum += arr[i];
   }
 
   avg = double(sum) / size;
 
   return avg;
}