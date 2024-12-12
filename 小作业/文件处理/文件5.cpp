//文件 - 5 - 电话簿小程序
//时间限制	1000ms	空间限制	256MB
//
//这个世界需要领导者
//
//每一个单独生命的集体
//
//都有着小小的精神领袖
//
//鼓励着他们前进
//
//大姐头望向了你
//
//这是她第一次直视你
//
//第一次 你们目光汇集
//
//你知道 你不能再沉默下去
//
//如今 你被赋予了这样的权力
//
//你要通过给定的前三位数字，找到其后面的包含他在内的 11 位数字里
//
//最大的一组
//
//TO - DO
//电话簿： 点击下载
//
//请你编写程序，从电话簿中按行读入信息，封装函数 valid() 进行检测读取到的信息是否为电话号码。
//
//给出前三位号码，你将从文件中找到前三位号码相同的号码中最大的一项。
//
//例如：文件中有 13811111111 和 13822222222 两个 138 开头的电话号码，你要输出 13822222222
//
//电话号码保证单独位于一行，例如 1.554513899999999 不算 138 开头的电话号码。
//
//注意：
//
//从相对路径 messy.content 中打开文件。
//相关操作请封装成函数。
//具体操作方法不限，但是必须使用字符串流对象。本题允许使用 std::string。
//本题数据集非常大，如果你用一般的方式进行测试的话可以发现运行时间距离超时非常近，所以你应该考虑一些操作优化你的读取速度！否则很可能会因为一些波动导致超时而无法通过测试点。
//
//输入数据说明
//本题需要考虑错误输入，但是你不需要输出错误提示，仅需过滤掉不合法信息即可。
//文件内容有不定行，请通过 eof() 判断是否读至结尾，每行数据类型不定。
//本题合法的数据仅为 11位(10进制长度)整型，前两位字符合法范围是 13 - 19 (即合法数据是 13000000000~19999999999)。
//值得注意的是，本题合法数据超过了 int32 能表示的范围，所以你可能需要考虑别的数据类型或自行设计数据类型。
//错误数据可能有超出范围的整数 / 浮点数 / 可打印 ASCII 字符(ASCII33 - ASCII126)，此外没有其他非法输入，你需要在程序中仔细考虑如何检测输入。
//文件数据内容为随机字符串，包括随机中文，需要注意的是中文编码为 GBK。
//输出格式说明
//输出应至少包括一个整数，代表你查询到的电话号码。
//应考虑人性化输出。
//限制
//不允许使用尚未讲授过的后续课程中的知识点
//过程中请给出相应的输入提示与输出提示
//程序编写应符合锯齿型的书写格式
//不允许使用 goto
//运行时间 1 秒
//运行使用内存 128MB
//输出限制 2048 个字符
//评分标准
//【人工审核项】 若发现代码使用后续知识点，视情况扣分
//【人工审核项】 若代码书写不规范或整洁度极差(如变量取名不规范或没有按照锯齿型书写等)，视情况扣分
//【人工审核项】 不符合题目要求（如要求用递归完成而没有使用、没有错误性输入检测等），视情况扣分
//【人工审核项】 没用到字符串流对象，扣 2 分
//直接输出答案而非程序运行结果的，0 分
//抄袭舞弊者，0 分
//测试用例
//样例1 :
//138
//13888888888
//样例2 :
//	132
//	13243840747

#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;

// 定义一个结构体来存储电话号码
struct PhoneNumber {
    char prefix[4]; // 存储电话号码前缀
    unsigned long long number; // 使用无符号长整型存储电话号码
};

// 函数声明
bool valid(const char* str);
void readPhoneNumber(ifstream& file, PhoneNumber& phone);
unsigned long long findMaxNumberWithPrefix(ifstream& file, const char* prefix);

// 主函数
int main() {
    ifstream file("messy.content");
    if (!file.is_open()) {
        cerr << "无法打开文件messy.content，请确认文件存在且路径正确。" << endl;
        return 1;
    }

    char prefix[4];
    cout << "请输入要查找的电话号码前三位：" << endl;
    cin >> prefix; // 读取用户输入的前缀

    unsigned long long maxNumber = findMaxNumberWithPrefix(file, prefix);
    if (maxNumber != 0) {
        cout << "找到的最大电话号码为: " << prefix << maxNumber << endl;
    }
    else {
        cout << "未找到符合条件的电话号码。" << endl;
    }

    file.close(); // 关闭文件
    return 0;
}

// 函数定义
bool valid(const char* str) {
    // 检查前11个字符是否都是数字
    if (strlen(str) < 11) {
        return false;
    }
    for (int i = 0; i < 11; ++i) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    // 检查第12个字符是否为换行符或字符串结束符
    return str[11] == '\n' || str[11] == '\0';
}

void readPhoneNumber(ifstream& file, PhoneNumber& phone) {
    char buffer[128]; // 增加缓冲区大小，以适应更长的行
    file.getline(buffer, 128); // 读取一行
    if (file.eof()) {
        phone.number = 0;
        return;
    }
    if (valid(buffer)) { // 检查是否有效
        strncpy_s(phone.prefix, buffer, 3);
        phone.prefix[3] = '\0'; // 确保前缀字符串以 null 结束
        phone.number = stoull(buffer, nullptr, 10); // 解析电话号码
    }
    else {
        phone.number = 0;
    }
}

unsigned long long findMaxNumberWithPrefix(ifstream& file, const char* prefix) {
    unsigned long long maxNumber = 0;
    PhoneNumber phone;
    do {
        readPhoneNumber(file, phone);
        if (phone.number != 0 && strncmp(phone.prefix, prefix, 3) == 0) {
            if (phone.number > maxNumber) {
                maxNumber = phone.number;
            }
        }
    } while (!file.eof());
    return maxNumber;
}