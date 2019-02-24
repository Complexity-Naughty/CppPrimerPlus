//
// Created by liaow on 2019-2-23.
//

#include <iostream>

int main() {
    using namespace std;
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You won't regret it!" << endl;
    cin.get();  //让窗口一直打开，直到按下任意键
    return 0;
}

/**
 * 解释：
 * using ： 编译指令
 * std ： 命名空间
 * cout ： ostream输出流对象
 * endl ：控制符（endl对cout具有特殊控制意义：重起一行）
 * \n ： 换行符
 *
 */


/**
 * cout、endl 实际上都在命名空间std里面，
 * 如果不想使用 "编译指令" using，
 * 使用前缀也是可以的，如：
 *
 * std::cout << "No using is ok!";
 * std::endl;
 */

