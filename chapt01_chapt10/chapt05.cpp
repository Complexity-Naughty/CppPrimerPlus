//
// Created by liaow on 2019-3-2.
//

/*
 * 今日要点：
 *
 * 1、几种进制：
 *      1、十进制 ： 第一位1~9开头
 *      2、八进制 ： 第一位以0开头，第二位为1~7
 *      3、十六进制 ： 前两位以0x或0X开头
 *      注意：无论使用哪种进制，在计算机中都以“二进制”存储
 *
 * 2、C++为三种进制提供了显示的控制符
 *      1、dec ： 十进制
 *      2、oct ： 八进制
 *      3、hex ： 十六进制
 *
 * 3、C++如何确定常量的类型？
 *      1、默认情况：int （没有特殊说明，且存储范围在int之内
 *      2、使用后缀：不区分大小写，但是为了与数字1区别，常用大写
 *          1、使用小写l 或大写L ：long
 *          2、使用小写ll 或大写LL ：long long
 *          3、使用无符号位加U(或者u), ul、ull、UL、ULL、Ull、Ul
 *
 * 4、字符类型：
 *      1、char：
 *          只存储一个字符，字符常量使用单引号括起，
 *          在计算机内部实际存储的是字符编码，例如：
 *          输入一个'M'，计算机存的是ASCII字符编码77，C++自动帮我们转换
 *          输出时，C++也自动帮我们将77转换成'M'
 *      2、字符串：
 *          字符串使用双引号，内部实际上是一个char[] 的引用。
 *      3、cout.put();
 *          该函数输出一个字符。put前面的那个点被称为成员运算符，
 *          实际上这里由OOP（面向对象编程）的思想，因为put()函数
 *          是ostream类的一个成员函数，cout作为一个ostream对象，
 *          可以使用成员运算符调用成员函数
 *      4、转义字符：
 *          有些符号被保留作为特殊用途，那么想要原样输出这类字符，
 *          则需要转义，使用反斜杠\，即可进行转义，比如：
 *          \\ 会将\输出
 *          \" 会将引号输出，
 *          \n 会换行输出，
 *          \t 会将制表符输出
 *          \v 会将垂直制表符输出
 *          \b 会进行退格操作
 *          \r 相当于回车键
 *          \a 会发出振铃声
 *
 * 5、unsigned char 和 signed char：
 *      1、如果表示数值类型：
 *          signed char : -128 ~ 127
 *          unsigned char : 0 ~ 255
 *
 * 6、wchar_t (宽字符类型):
 *      1、字符集无法用8位字节表示时，编译器厂商可以将char定义为16位字节或者更长，
 *      也可以使用wchar_t来表示扩展字符集，wchar_t实际上是一个整数类型。
 *      2、iosteam 同时也提供了对应的 wcin、wcout，用于处理wchar_t类型
 *      3、使用前缀大写的L来指示宽字符常量，例如：
 *          wcahr_t bob = L'p';
 *
 * 7、char16_t 和 char32_t:
 *      随着程序员越来越了解Unicode编码，wchar_t开始不能满足需要，因此他们出现了
 *      char16_t : 无符号位，长16位字节，常量使用前缀小写u， char16_t ch1 = u'p';
 *      char32_t : 无符号位，长32位字节，常量使用前缀大写U， char32_t ch2 = U'p';
 */
#include <iostream>

using namespace std;

int main() {

    //演示三种进制的不同，注意看输出
    int chest = 42;
    int inseam = 042;
    int waist = 0x42;
//    int waist = 0x7fff;
//    int waist = 0xffff;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "42 in decimal : " << chest << endl;
    cout << "042 in octal : " << inseam << endl;
    cout << "0x42 in hex : " << waist << endl;
    cout << endl;

    //演示三种进制的输出控制符
    cout << "Print 42 with three control character : " << endl;

    cout << "use 'dec' character : ";  //十进制控制符（默认）
    cout << dec;
    cout << chest << endl;

    cout << "use 'oct' character : ";  //八进制控制符
    cout << oct << chest << endl; //连接在一起也是可以的

    cout << "use 'hex' character : ";   //十六进制控制符
    cout << hex << chest << endl;
    cout << endl;

    /*
     * 小结：
     * cout << hex; 不会在屏幕上显示任何内容，只是修改了cout显示整数的方式！
     * dec、oct、hex，这3个控制符都在空间std里面定义，可以使用 std::hex
     */

    //演示字符
    cout << dec;
    cout << "Please enter a character : ";
    char ch;
    cin >> ch;
    cout << "Thank you for enter the '" << ch << "' character!" << endl;
    cout << endl;

    int i = ch;
    cout << "The ASCII code for '" << ch << "' is " << i << endl;

    cout << "Add one to the character code: " << endl;
    ch = ch + 1;
    i = ch;
    cout << endl << "Now. The ASCII code for '" << ch << "' is " << i << endl;

    cout << "Displaying char ch using 'cout.put(ch)' : ";
    cout.put(ch);
    cout << endl << "Finish Test!" << endl;

    //演示转义字符
    cout << "\a" << "Bee! I can use " << "\"" << " \\n " << "\"" << " to star a new line.\n";

    return 0;
}
