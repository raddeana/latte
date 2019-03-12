/**
 * 信号处理
 * @author Philip
 */

// SIGABRT 程序的异常终止，如调用 abort
// SIGFPE 错误的算术运算，比如除以零或导致溢出的操作
// SIGILL 检测非法指令
// SIGINT 接收到交互注意信号
// SIGSEGV 非法访问内存
// SIGTERM 发送到程序的终止请求

#include <iostream>
#include <csignal>
#include <unistd.h>
 
using namespace std;
 
void signalHandler (int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";

    // 清理并关闭
    // 终止程序  

    exit(signum);  
 
}
 
int main () {
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);  
 
    while (1) {
       cout << "Going to sleep...." << endl;
       sleep(1);
    }
 
    return 0;
}