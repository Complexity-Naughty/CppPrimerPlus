//
// Created by liaow on 2019-2-25.
//

/*
 * 今日要点：
 * 1、函数（带有返回值的函数
 * 2、标准库中的平方根函数: sqrt(); （位于头文件cmath中，老系统为math.h
 * 3、C++的OOP，OOP即：Object Oriented Programming，面向对象程序设计
 */

#include <iostream>
#include <cmath>    //使用 math.h 也可以

using namespace std;    //当一个文件中，多个函数都需要使用命名空间std时，可以放在所有函数的最前面

void simon(int);    //声明一个无返回值的自定义函数，这里只是声明，函数体在主函数下方
int stonetolb(int); //声明一个有返回值的自定义函数

int main() {

    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;

    double side;
    side = sqrt(area);  //求平方根的函数， 在头文件cmath里面
    cout << "That's the equivalent of a square " << side
         << " feet to the side. " << endl;
    cout << "How fascinating!" << endl;
    cout << endl;

    /*
     * 使用无返回值的自定义函数
     */
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    cout << endl;

    /*
     * 使用有返回值的自定义函数
     */
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds. " << endl;

    return 0;
}

void simon(int n) {
    cout << "Simon says touch your toes " << n << " times" << endl;
}

int stonetolb(int sts) {
    return 14 * sts;
}

/*
 * 补充：
 * 1、double pow(x, y);     求x的y次方，头文件cmath 或 math.h
 * 2、int rand();       返回一个随机整数，头文件cstdlib 或 stdlib.h
 * 3、和C一样，C++不允许函数的嵌套定义
 * 4、函数需要遵循：先声明，后使用。如果函数体在主函数后面，则需要在主函数前进行函数声明
 */