//
// Created by liaow on 2019-3-3.
//

/**
 * 今天是我生日。哈哈哈哈哈哈哈哈
 */

/*
 * 今日要点：
 * 1、bool类型：
 *      1、值：true / false
 *      2、转换：bool类型可以与int类型相互转换：
 *          - bool转int： true = 1，false = 0
 *          - int转bool： !0 = true, 0 = false
 *
 * 2、const限定符：
 *      1、举例：定义符号常量
 *          const int Months = 12; //解释：指定一个类型为int，值为12的符号常量，程序中直接使用Months，等价于数字12
 *      2、注意：
 *          常量初始化后，值就固定了，编译器不允许再修改常量的值。（这点跟变量相反）
 *      3、格式：
 *          约定一：全部字母大写，例如：MONTHS
 *          约定二：首字母大写，例如：Months
 *          约定三：以字母k开头，例如：kmonths
 *          其他约定：...
 *
 * 3、浮点数：
 *      1、简单来说，浮点数就是小数
 *      2、E表示法：
 *          1、例如：5.23E7 (或者 5.23e7)     //表示5.23 * 10的7次方, e可以大写，可以小写，7称为指数
 *          2、适合表示非常大，或者非常小的数
 *          3、指数，e后面的数字
 *              - 可以为正数：5.23e+n (或者 5.23En) ,表示小数点右移n位
 *              - 可以为负数：5.23e-n ,表示小数点左移n位
 *
 *      3、几种浮点数类型：
 *          1、float、double、long double
 *          2、精度：表示小数的准确位数，从左到右，越来越高，越精确，能表示的小数位越多
 *      4、浮点数常量：
 *          1、举例：
 *              1.234f
 *              1.234F
 *              1.234e7
 *              1.234E7
 *              1.234L
 *              1.234E7F
 *      5、浮点数因为精度很大，所以计算速度一般比整数慢
 */

#include <iostream>

using namespace std;

int main() {
    bool is_me = true;
    bool my_fault = false;

    const int Months = 12;
    const int MONTHS = 12;
    const int kmonths = 12;

    float num1 = 1.234f;
    double num2 = 1.234e7f;

    cout << "Is me did this work? --" << is_me << endl;
    cout << "Is my fault? --" << my_fault << endl;

    cout << endl;
    cout << "Months equals? --" << Months << endl;
    cout << "MONTHS equals? --" << MONTHS << endl;
    cout << "kmonths equals? --" << kmonths << endl;

    cout << endl;
    cout << "And num1 equals? --" << num1 << endl;
    cout << "And num2 equals? --" << num2 << endl;

    return 0;
}