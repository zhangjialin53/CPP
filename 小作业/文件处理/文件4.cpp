//文件 - 4 - 计算偏移量
//时间限制	1000ms	空间限制	256MB
//
//在这个孤独的世界里 每个生命都无处安放感情
//
//大姐头看着他们 心里却不知如何说明
//
//想帮助他们 却不知从何说起
//
//只是想 找到那些温柔又孤独的生命
//
//她发现只要知道这些生命的文件的行数和每行开始的位置
//
//就能快速找到这些生命
//
//可是 生活怎会如此顺遂
//
//怎会满足你的全部需求
//
//获得你全部愿望 抚慰每个生命
//
//大姐头看了看远方 而又掩面叹息
//
//如果给你这样的权力，解决大姐头的忧心
//
//通过 O(1) 的时间复杂度 寻找每个孤独的生命
//
//TO - DO
//请你编程计算文件每一行的偏移位置，内容已为你写入 foo.bar，你可以 点击下载
//
//请使用 C++ 方式的 std::fstream 打开文件，且必须使用C++流方式，包括流对象、流成员函数等方式进行文件操作。
//
//输出格式请参考输出格式说明，本题请保证与期望输出完全匹配。
//
//注意：第一行偏移量为 0，往后行偏移量除了字符外还需考虑换行符的占位。
//
//输入数据说明
//本题不需要考虑错误输入，文件内容可以在上方下载查看。
//以相对路径 foo.bar 打开文件。
//文件数据内容为随机字符串，包括随机中文，需要注意的是中文编码为 GBK。
//输出格式说明
//按以下数据说明
//
//- *原始文件 * -
//abcd
//efg
//hi
//j
//
//- *输出内容 * -
//4 0 5 9 12 14
//第一个整数给出原始文件的总行数 4，第 i + 1 个整数表示第 i 行的偏移，注意偏移量将占位符也统计在内(如换行符)，所以第 3 个整数表示第 2 行的偏移量 = 第 1 行的 4 个字符 + 换行符 = 5。
//
//如果将输出的偏移追加到文件的末尾，文件的最后一个整数是最后一行的偏移量，通过读取文件的最后一个整数可以快速定位至这一行的开头以便读取其他的偏移数据。
//
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
//若出现非正常退出(Runtime Error)，按测试点视情况扣分
//【人工审核项】 若发现代码使用后续知识点，视情况扣分
//【人工审核项】 若代码书写不规范或整洁度极差(如变量取名不规范或没有按照锯齿型书写等)，视情况扣分
//【人工审核项】 不符合题目要求（如要求用递归完成而没有使用、没有错误性输入检测等），视情况扣分
//【人工审核项】 不使用 C++ 流方法，扣 2 分
//直接输出答案而非程序运行结果的，0 分
//抄袭舞弊者，0 分


#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file;
    file.open("foo.bar", ios::in); // 打开文件
    if (!file.is_open()) {
        cerr << "无法打开文件foo.bar，请确认文件存在且路径正确。" << endl;
        return 1;
    }

    int row_count = 0; // 记录行数
    int last_offset = 0; // 上一行的偏移量
    int current_offset = 0; // 当前行的偏移量
    char ch; // 用来逐字符读取文件

    cout << "-*以下是文件内容*-\n";
    // 计算总行数和偏移量
    bool lastCharWasNewline = false;
    string line; // 存储当前行的内容
    while (file.get(ch)) {
        if (ch == '\n') { // 如果遇到换行符，则记录当前行偏移量
            ++row_count;
            last_offset = current_offset;
            current_offset += 1; // 换行符本身占据一个位置
            cout << line << endl; // 输出当前行的内容
            line.clear(); // 清空当前行的内容
            lastCharWasNewline = true;
        }
        else {
            line += ch; // 添加字符到当前行
            ++current_offset; // 非换行符字符也占据一个位置
            lastCharWasNewline = false;
        }
    }

    // 如果文件的最后一行没有换行符，则增加最后一行的偏移量
    if (!lastCharWasNewline && !line.empty()) { // 如果不是因为到达文件末尾而结束循环，则增加最后一行的偏移量
        ++row_count;
        cout << line << endl; // 输出最后一行的内容
    }

    // 输出总行数
    cout << row_count << " ";

    // 再次读取文件来输出每一行的偏移量
    file.clear(); // 清除流的状态标志
    file.seekg(0, ios::beg); // 将读取指针重置到文件的开头


    current_offset = 0; // 重新初始化当前偏移量
    cout << current_offset << " ";
    lastCharWasNewline = false;
    while (file.get(ch)) {
        if (ch == '\n') { // 如果遇到换行符，则记录当前行偏移量
            cout << current_offset + 1 << " ";       //因为是每次到达换行符的时候输出 所以需要加上换行符的一个
            last_offset = current_offset;
            current_offset += 1; // 换行符本身占据一个位置
            lastCharWasNewline = true;
        }
        else {
            ++current_offset; // 非换行符字符也占据一个位置
            lastCharWasNewline = false;
        }
    }

    // 如果最后一行没有换行符，则输出最后一个字符的偏移量作为最后一行的偏移量
    if (!lastCharWasNewline) {
        cout << current_offset + 1 << endl;
    }
    else {
        cout << endl;
    }

    file.close(); // 关闭文件
    return 0;
}