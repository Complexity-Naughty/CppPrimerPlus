//
// Created by liaow on 2019-2-24.
//

#include <iostream>

int main() {
    using namespace std;

    int carrots;    //声明一个整型变量

    carrots = 25;   //变量赋值

    cout << "I have ";
    cout << carrots;    //cout输出变量
    cout << " carrots.";
    cout << endl;

    carrots -= 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

    printf("\n");
    printf("Print with printf is ok, too.\n");
    printf("I still have %d carrots.\n", carrots);

    cout << endl;
    cout << "But I want more carrots! How many carrots do you have?" << endl;
    int more;
    cin >> more;     //使用cin输入
    carrots += more;

    cout << "Thank you. Now I have "        //cout 也可以使用不同行的方式拼接
         << carrots
         << " carrots."
         << endl;

    cin.get();

    return 0;
}
/**
 *  章节内容：
 *  1、变量声明和赋值
 *  2、cout 打印变量
 *  3、cout 语句、变量拼接
 *  4、使用cin输入流对象，cin.get()只能获得一个字符
 */

/**
 * 解释：
 * cin  ： istream输入流对象
 */