//
// Created by liaow on 2019-2-26.
//

/*
 * 今日要点：
 *
 * 1、几个C++命名规则：--具体参考google手册c++编程规范
 *      1、命名只能使用字母、数字和下划线
 *      2、命名第一个不能是数字
 *      3、区分大小写
 *      4、不能使用C++关键字和保留字
 *      5、两个下划线、一个下划线加大写字母开头，作为保留字
 *      6、C++命名本身没有长度限制，但是有些平台有
 *      7、见词达意
 *
 * 2、几种数据类型：
 *      1、整型：short、int、long、long long
 *      2、字符类型：char
 *      3、无符号位 unsigned int、……
 *      注：编写程序时，一点要注意类型的最大值，防止溢出
 *
 * 3、几种内存大小关系的对比：
 *      bit（位）* 8 = byte（字节），
 *      byte * 1024 = kb，
 *      kb * 1024 = mb，
 *      ……
 *
 * 4、类型的长度，取决于系统的实现；例如：
 *    在使用8位字节的系统中，int的长度为4个字节，
 *    而使用4位字节的系统中，int的长度为2个字节。
 *
 *    头文件climits (老系统中为limits.h) 中包含了对整型的限制信息，
 *    还定义了各种限制的符号名称，例如：
 *    INT_MAX 表示int的最大取值， CHAR_BIT 表示字节的位数
 *
 * 5、运算符：内置的语言元素，对一个或多个数据进行运算，并生成一个值
 *      sizeof ：返回类型或变量的长度(单位是字节).
 *
 * 6、#define：
 *      与#include一样，是一个预处理器编译指令，所谓预处理器编译指令，就是：
 *      告诉预处理器，将#define 后面的内容进行替换后，再编译程序。例如：
 *
 *      #define INT_MAX 32767   ： 先将所有的INT_MAX都替换成32767，再编译程序
 *
 *      可以用来定义自己的符号常量，在C++中，提供了const关键字，更好的创建符号常量
 *
 * 7、C++提供了几种C语言没有的初始化语法：
 *      int a = 101；
 *      int a(101);
 *      int a = {101};
 *      int a{101};   //C++11 新增
 *      int a{};    //会被初始化为0
 */
#include <iostream>
#include <climits>

using namespace std;

int main() {

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // 使用sizeof 查看 类型、变量的字节长度
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof n_short<< " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof(n_llong) << " bytes." << endl;
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << endl;

    // 查看整型的最大值
    cout << "Maximum values: " << endl;
    cout << "int : " << n_int << endl;
    cout << "short : " << n_short << endl;
    cout << "long : " << n_long << endl;
    cout << "long long : " << n_llong << endl;
    cout << endl;

    // 查看int最小值、查看一个字节占用多少bit（位）
    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    cout << endl;

    // C++ 提供的几种初始化语法
    int a(101);
    cout << "a = " << a << endl;

    int b = {102};
    cout << "b = " << b << endl;

    int c{103};
    cout << "c = " << c << endl;

    int d{};
    cout << "d = " << d << endl;

    return 0;
}