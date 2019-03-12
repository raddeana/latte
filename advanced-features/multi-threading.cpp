/**
 * 多线程
 * @author Philip
 */

#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;
#define NUM_THREADS 5

// thread 指向线程标识符指针
// attr 一个不透明的属性对象，可以被用来设置线程属性; 您可以指定线程属性对象，也可以使用默认值 NULL
// start_routine 线程运行函数起始地址，一旦线程被创建就会执行
// arg 运行函数的参数; 它必须通过把引用作为指针强制转换为 void 类型进行传递; 如果没有传递参数，则使用 NULL

/**
 * 打印 Hello
 * @return {void}
 */
void *PrintHello (void *threadid) {  
   // 对传入的参数进行强制类型转换，由无类型指针变为整形数指针，然后再读取
   int tid = *((int*)threadid);
   cout << "Hello Runoob! 线程 ID, " << tid << endl;
   
   pthread_exit(NULL);
}

/**
 * 主函数
 * @return {int}
 */
int main () {
    pthread_t threads[NUM_THREADS];
    
    // 用数组来保存i的值
    int indexes[NUM_THREADS];
    int rc;
    int i;

    for (i = 0; i < NUM_THREADS; i ++) {      
        cout << "main(): 创建线程" << i << endl;
        
        // 先保存i的值
        indexes[i] = i;

        // 传入的时候必须强制转换为void* 类型，即无类型指针        
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *)&(indexes[i]));
        
        if (rc) {
            cout << "Error:无法创建线程," << rc << endl;
            exit(-1);
        }
    }

    pthread_exit(NULL);
}
