//文件 - 3 - 文件基本操作
//时间限制	1000ms	空间限制	256MB
//
//这个世界的本质就是混乱和无序，它最终的归宿就是走向热寂
//
//而生命诞生的原因和使命，就是在这个混乱的宇宙中构建秩序，消除或减轻世界的参差
//
//大姐头看着那一串串数字
//
//虽然因为选择 许多突然消失
//
//可是剩下的 留存下来的 却产生了更加蓬勃的态势
//
//这或许就是生命的力量 或者存在的意义
//
//有生命就要有秩序
//
//有秩序就要有规矩
//
//对于这样原始的世界来说
//
//最好的规矩就是排列
//
//最好的秩序就是不争不抢 不偏不倚
//
//按照规矩走下去
//
//大姐头看见远处十串数字 又随手加了十个上去
//
//如果给你这样的权力，管理这个世界，规划生命
//
//把他们按照从小到大的顺序，放在新的文件里
//
//TO - DO
//我们将通过标准输入流 cin / stdin 为程序输入 10 个整数，另外 10 个整数你需要通过文件读取，文件目录为 1.txt，你可以点击下载并保存到本地相应位置方便调试。
//
//然后请你将输入的 20 个整数，从小到大排序后输出。
//
//输入数据说明
//标准输入共 10 行，每行 1 个数据，数据类型是 int32，范围是 - 2147483648 ~2147483647。
//文件输入共 10 行，每行 1 个数据，数据类型是 int32，范围是 - 2147483648 ~2147483647。
//文件的另外 10 个整数不变，储存在 1.txt，你可以下载后检查。
//输出格式说明
//将所有数据从小到大排序后输出。
//输出应该考虑人性化提示。
//限制
//不允许使用尚未讲授过的后续课程中的知识点
//过程中请给出相应的输入提示与输出提示
//程序编写应符合锯齿型的书写格式
//不允许使用 goto
//除明确要求外，不允许使用 C++ 的 std::string 类
//运行时间 1 秒
//运行使用内存 128MB
//输出限制 2048 个字符
//评分标准
//若编译运行成功，即有 5 分基础分
//若出现编译 Warning，扣 1 分，若发现非法语句，如 system("pause") 和 goto 等，扣 2 分
//若出现非正常退出(Runtime Error)，按测试点视情况扣分
//【人工审核项】 若发现代码使用后续知识点，视情况扣分
//【人工审核项】 若代码书写不规范或整洁度极差(如变量取名不规范或没有按照锯齿型书写等)，视情况扣分
//【人工审核项】 不符合题目要求（如要求用递归完成而没有使用、没有错误性输入检测等），视情况扣分
//【人工审核项】 不使用 C 语言操作文件的方法，扣 2 分
//直接输出答案而非程序运行结果的，0 分
//抄袭舞弊者，0 分
//测试用例
//样例1
//- 27979 - 19112 - 32468 23849 5602 835 19541 - 14447 - 28344 - 6210
//- 987654321 - 32468 - 28344 - 27979 - 19112 - 14447 - 6210 - 999 1 2 3 4 233 666 835 5602 19541 23849 1515151 123456789
//选择语言：
//c++
//1234567891011121314151617181920212223242526272829303132
//#include <iostream>
//#include <fstream>
//#include <algorithm> // For std::sort
//
//using namespace std;
//
//int main() {
//    int numbers[20]; // Array to store all the numbers
//    int number;
//
//
//    by Cishoon
//
//        Github


#include <iostream>
#include <fstream>
#include <algorithm> // For std::sort

using namespace std;

int main() {
    int numbers[20]; // Array to store all the numbers
    int number;

    // Reading 10 integers from standard input
    cout << "请输入10个整数：" << endl;
    for (int i = 0; i < 10; ++i) {
        if (!(cin >> number)) { // Check for proper input
            cerr << "输入错误，请确保输入的是整数。" << endl;
            return 1;
        }
        numbers[i] = number;
    }

    ifstream inputFile("1.txt"); // Open file for reading
    if (!inputFile.is_open()) {
        cerr << "无法打开文件1.txt，请确认文件是否存在且路径正确。" << endl;
        return 1;
    }

    // Reading 10 integers from file
    for (int i = 10; i < 20; ++i) {
        if (!(inputFile >> number)) { // Check for proper input
            cerr << "文件中的数据不足或格式错误。" << endl;
            inputFile.close();
            return 1;
        }
        numbers[i] = number;
    }
    inputFile.close();

    // Sorting the numbers using C-style array and std::sort
    sort(numbers, numbers + 20);

    // Outputting sorted numbers
    cout << "排序后的整数如下：" << endl;
    for (int i = 0; i < 20; ++i) {
        cout << numbers[i] << ' ';
    }
    cout << endl;

    return 0;
}