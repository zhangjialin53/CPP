//运算符重载 - 3 - 日期显示（基础版）
//时间限制	1000ms	空间限制	512MB
//
//题目描述
//双十一早年也被叫做“光棍节”，不知道现在的你是否还是光棍呢？
//
//如果是也没有关系，下面我们会为你提供一次约会 Date 的机会！
//
//请实现下面的 Date 类。
//
//某主持人：谁说这个梗烂的，这个梗太棒了！
//
//TODO
//请编写一个程序，接受年月日的输入，输出相应的要求内容。
//
//作为基础版，你需要考虑实现的内容大致有：
//
//使用 year, month 和 day 参数构造类。
//
//使用 从公元元年（0001年）1月1日开始的天数 开始构造类，注意需要考虑闰年。
//
//从标准输出流格式化输出日期（YYYY - MM - DD，如 2000 - 01 - 01 ）。
//
//实现 Date 类到 int 类型的转换，即转换为从公元元年（0001年）1月1日开始的天数。
//
//实现两个 Date 类的减法，结果为前一个日期和后一个日期的天数之差（如 2024 - 10 - 30 - 2024 - 10 - 31 = -1）。
//
//有不清楚之处参考代码框架和测试样例。
//
//本题部分代码已经为你写好，你只需要且只能在TODO块中进行编程。
//
//已有的内容不允许更改。编程结束后，不要删除TODO块的两行注释。
//
//#include <iostream>
//using namespace std;
//
//class Date
//{
//private:
//	int year, month, day;
//
//public:
//	Date(int y, int m, int d);
//	Date(int days); // 从公元元年（0001年）1月1日开始的天数，仅考虑公元元年之后的日期
//
//	// 注意输出格式，格式为"yyyy-mm-dd"，如"2000-01-01"，位数不足的要补0
//	/****************** TODO ******************/
//
//	/**************** TODO-END ****************/
//};
//
///****************** TODO ******************/
//
///**************** TODO-END ****************/
//
//int main()
//{
//	// 测试构造函数
//	int year, month, day;
//	cout << "请输入d1年月日：" << endl;
//	cin >> year >> month >> day;
//	Date d1(year, month, day);
//
//	int days;
//	cout << "请输入d2天数：" << endl;
//	cin >> days;
//	Date d2(days);
//
//	cout << "d1日期为：" << endl;
//	cout << d1 << endl;
//	cout << "d2日期为：" << endl;
//	cout << d2 << endl;
//
//	// 测试类型转换运算符重载
//	cout << "d1转换为天数为：" << endl;
//	cout << int(d1) << endl;
//	cout << "d2转换为天数为：" << endl;
//	cout << int(d2) << endl;
//
//	// 测试减法运算符重载
//	cout << "d1和d2相差天数为：" << endl;
//	cout << d1 - d2 << endl;
//
//	return 0;
//}
//交作业时，提交完整的代码。
//
//输入输出格式说明
//输入格式说明
//输入格式见代码框架，对于所有的日期构造，年份均在
//(
//	0
//	,
//	3000
//]
//。
//不需要考虑非法输入。
//输出格式说明
//输出相应的要求内容。
//测试样例
//下面的输出内容省略了提示语。
//
//样例一
//输入：
//
//1024 10 24
//373940
//输出：
//
//d1日期为：
//1024 - 10 - 24
//d2日期为：
//1024 - 10 - 24
//d1转换为天数为：
//373940
//d2转换为天数为：
//373940
//d1和d2相差天数为：
//0
//样例二
//输入：
//
//1999 12 31
//654321
//输出：
//
//d1日期为：
//1999 - 12 - 31
//d2日期为：
//1792 - 06 - 20
//d1转换为天数为：
//730119
//d2转换为天数为：
//654321
//d1和d2相差天数为：
//75798
//样例三
//输入：
//
//0001 01 01
//727374
//输出：
//
//d1日期为：
//0001 - 01 - 01
//d2日期为：
//1992 - 06 - 25
//d1转换为天数为：
//1
//d2转换为天数为：
//727374
//d1和d2相差天数为：
//- 727373


#include <iostream>
using namespace std;

class Date
{
private:
    int year, month, day;

public:
    Date(int y, int m, int d);
    Date(int days); // 从公元元年（0001年）1月1日开始的天数，仅考虑公元元年之后的日期

    // 注意输出格式，格式为"yyyy-mm-dd"，如"2000-01-01"，位数不足的要补0
    /****************** TODO ******************/
     // 判断是否为闰年
    bool isLeapYear(int y) const
    {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    // 计算从公元元年1月1日到给定日期的总天数
    int daysFromYear1(int y, int m, int d) const
    {
        int days = 0;
        for (int y1 = 1; y1 < y; ++y1)
        {
            days += isLeapYear(y1) ? 366 : 365;
        }
        for (int m1 = 1; m1 < m; ++m1)
        {
            days += daysInMonth(y, m1);
        }
        days += d;
        return days;
    }

    // 获取某个月的天数
    int daysInMonth(int y, int m) const
    {
        if (m == 2)
        {
            return isLeapYear(y) ? 29 : 28;
        }
        if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            return 30;
        }
        return 31;
    }

    // 从天数计算年月日
    void calculateYMD(int days)
    {
        year = 1;
        while (days > (isLeapYear(year) ? 366 : 365))
        {
            days -= isLeapYear(year) ? 366 : 365;
            year++;
        }
        month = 1;
        while (days > daysInMonth(year, month))
        {
            days -= daysInMonth(year, month);
            month++;
        }
        day = days;
    }

    // 重载输出运算符
    friend ostream& operator<<(ostream& out, const Date& d)
    {
        char buffer[11]; // 足够大的缓冲区来存储格式化的日期字符串
        sprintf_s(buffer, "%04d-%02d-%02d", d.year, d.month, d.day);
        out << buffer;
        return out;
    }

    // 重载类型转换运算符
    operator int() const
    {
        return daysFromYear1(year, month, day);
    }

    // 重载减法运算符
    int operator-(const Date& other) const
    {
        return daysFromYear1(year, month, day) - daysFromYear1(other.year, other.month, other.day);
    }
    /**************** TODO-END ****************/
};

/****************** TODO ******************/
Date::Date(int y, int m, int d) : year(y), month(m), day(d) {}

Date::Date(int days)
{
    calculateYMD(days);
}




/**************** TODO-END ****************/

int main()
{
    // 测试构造函数
    int year, month, day;
    cout << "请输入d1年月日：" << endl;
    cin >> year >> month >> day;
    Date d1(year, month, day);

    int days;
    cout << "请输入d2天数：" << endl;
    cin >> days;
    Date d2(days);

    cout << "d1日期为：" << endl;
    cout << d1 << endl;
    cout << "d2日期为：" << endl;
    cout << d2 << endl;

    // 测试类型转换运算符重载
    cout << "d1转换为天数为：" << endl;
    cout << int(d1) << endl;
    cout << "d2转换为天数为：" << endl;
    cout << int(d2) << endl;

    // 测试减法运算符重载
    cout << "d1和d2相差天数为：" << endl;
    cout << d1 - d2 << endl;

    return 0;
}