//文件 - 1 - 格式输出 - 流成员函数
//时间限制	1000ms	空间限制	256MB
//
//错乱、冰冷、风。
//
//这是一个全新的世界、又或是一场全新的游戏
//
//生命在这里只是一串串数字
//
//存在的意义混乱，又或许更加清晰。
//
//或许生命的起源莫过于此。
//
//这里的主宰，只有大姐头一人。
//
//她随手一点，听到风吹落了一串数字
//
//落在地上
//
//又落在地上
//
//七零八落，她不喜欢
//
//她看着这一串串数字，中间被一个点连接着，好像是生命的承载，一线相连
//
//如果给你这样的权力，修改这个世界，修改生命
//
//你是否愿意把这些零落的数字 按小数点对齐
//
//TO - DO
//请你编程完成一个复读小程序，要求在读入最后一个退出码 q 后输出所有读入的浮点数，并使他们的小数点对齐。
//
//注意：
//
//如需设置输出格式，请使用流成员函数的形式。
//3 位小数后的数字直接丢弃，不足补零，不需要四舍五入。
//输出时除上下行小数点对齐外，输入的数字小数点左侧占位最大者左对齐，具体形式请看测试点样例。
//输入数据说明
//一共有不定行数据，每行数据类型为 double(8 字节浮点数)，最后一行以字符 q 结束。
//每个数据范围 - 1000000000.000000~1000000000.000000 (-1e9~1e9)，以全部数字给出(e.g. 123456789.654321)，不会出现指数表达形式。
//本题不需要考虑非法输入。
//输出格式说明
//将所有数据按小数点对齐后，保留三位小数（非四舍五入）输出。
//本题采用全字匹配方法，要求你的输出完全和样例相同，包括中文提示、换行符、空格等。
//限制
//不允许使用尚未讲授过的后续课程中的知识点
//过程中请给出相应的输入提示与输出提示


#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

const int MAX_NUMBERS = 1000; // 最大输入数量

int main() {
    cout << "请输入一些浮点数，以q结束:" << endl;

    double numbers[MAX_NUMBERS]; // 存储浮点数的数组
    int count = 0; // 当前输入的数量
    long long max_int_width = 0; // 记录最长整数部分的宽度（包括负号）

    // 读取输入，直到遇到'q'或达到最大数量
    while (count < MAX_NUMBERS) {
        if (!(cin >> numbers[count])) {
            // 如果输入不是一个有效的浮点数，则停止输入
            cin.clear(); // 清除错误标志
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略错误输入
            break;
        }

        // 更新最长整数部分的宽度
        long long int_width = 0;
        double tmp = fabs(numbers[count]);
        if (numbers[count] < 0) {
            ++int_width; // 负号占一位
        }
        while (tmp >= 10) {
            tmp /= 10;
            ++int_width;
        }
        max_int_width = max(max_int_width, int_width);

        count++; // 增加计数器
        if (cin.peek() == 'q') { // 检查下一个字符是否是'q'
            cin.ignore(); // 忽略'q'
            break;
        }
    }

    // 设置输出格式
    cout << fixed << setprecision(3); // 设置精度为3位小数

    // 截断小数点后的第四位及之后的数字，并确保小数点对齐
    for (int i = 0; i < count; ++i) {
        // 将小数点后的第四位及之后的部分截断
        double adjustedNumber = 0.0;
        if (numbers[i] > 0) {
            adjustedNumber = numbers[i] + 1e-10; // 加上一个小数，防止精度损失
        }
        else if (numbers[i] < 0) {
            adjustedNumber = numbers[i] - 1e-10; // 加上一个小数，防止精度损失
        }
        double integerPart = floor(fabs(adjustedNumber)); // 获取整数部分
        double fractionalPart = fabs(adjustedNumber) - integerPart; // 获取小数部分
        fractionalPart = floor(fractionalPart * 1000) / 1000.0; // 截断小数部分
        numbers[i] = (numbers[i] >= 0 ? integerPart + fractionalPart : -(integerPart + fractionalPart));

        // 计算当前数字的整数部分宽度（包括负号）
        long long current_int_width = 0;
        double tmp = fabs(numbers[i]);
        if (numbers[i] < 0) {
            ++current_int_width; // 负号占一位
        }
        while (tmp >= 10) {
            tmp /= 10;
            ++current_int_width;
        }

        // 输出数字，确保小数点对齐
        // 5 是小数点和三位小数的宽度
        cout << setw(max_int_width + 5) << setfill(' ') << right << numbers[i] << endl;
    }

    cout << "------程序结束------" << endl;
    return 0;
}
