/**
 * 自定义异常
 * @author Philip
 */
#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception {
    const char * what () const throw () {
        return "C++ Exception";
    }
};

/**
 * 主函数
 */
int main () {
    try {
        throw MyException();
    } catch (MyException& e) {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    } catch(std::exception& e) {
        //其他的错误
    }
}
