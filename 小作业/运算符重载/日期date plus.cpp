﻿//运算符重载 - 4 - 日期显示（进阶版）
//时间限制	1000ms	空间限制	512MB
//
//题目描述
//面对疾风吧！
//
//你将在本题中充分体会到CV技巧。
//
//TODO
//请编写一个程序，接受年月日的输入，输出相应的要求内容。
//
//作为进阶版，在基础版的基础上你需要额外实现的内容大致有：
//
//实现自增和自减，即 ++ 和 -- 运算，将日期往后或往前调一天。
//
//实现日期（ Date 类）和天数（ int 类型）的加减，即 + -+= -= 四种运算，将日期往后或往前调若干天。
//
//实现日期之间的大小（
//>
//,
//≥
//,
//<
//	,
//	≤
//	,
//	=
//	,
//	≠
//	）比较。
//
//	实现日期和天数的大小（
//>
//,
//≥
//,
//<
//	,
//	≤
//	,
//	=
//	,
//	≠
//	）比较。
//
//	有不清楚之处参考代码框架和测试样例。
//
//	本题部分代码已经为你写好，你只需要且只能在TODO块中进行编程。
//
//	已有的内容不允许更改。编程结束后，不要删除TODO块的两行注释。
//
//#include <iostream>
//	using namespace std;
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
//	cout << "*********************************" << endl;
//	cout << "1. 基础版内容测试" << endl << endl;
//
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
//	cout << "d1转换为天数为：" << endl;
//	cout << int(d1) << endl;
//	cout << "d2转换为天数为：" << endl;
//	cout << int(d2) << endl;
//
//	cout << "d1 - d2 = " << d1 - d2 << endl;
//	cout << "*********************************" << endl;
//	cout << "2. 自增与自减运算符测试" << endl << endl;
//
//	cout << "d1++ 结果为 " << d1++ << endl;
//	cout << "++d1 结果为 " << ++d1 << endl;
//	cout << "d1-- 结果为 " << d1-- << endl;
//	cout << "--d1 结果为 " << --d1 << endl;
//
//	cout << "*********************************" << endl;
//	cout << "3. 复合赋值运算符测试" << endl << endl;
//
//	int gap;
//	cout << "请输入加减的天数：" << endl;
//	cin >> gap;
//
//	cout << "d1 += " << gap << " 结果为 " << (d1 += gap) << endl;
//	cout << "d1 -= " << gap << " 结果为 " << (d1 -= gap) << endl;
//	// 注意此时d1将会变为原来的值，因为上面的操作会改变d1的值
//
//	cout << "*********************************" << endl;
//	cout << "4. 加法/减法运算符测试" << endl << endl;
//
//	cout << "d1 + " << gap << " = " << d1 + gap << endl;
//	cout << gap << " + d1 = " << gap + d1 << endl;
//
//	cout << "d1 - " << gap << " = " << d1 - gap << endl;
//	cout << gap << " - d1 = " << gap - d1 << endl;
//
//	cout << "*********************************" << endl;
//	cout << "5. 关系运算符测试（1为真，0为假）" << endl << endl;
//
//	cout << "d1 < d2 结果为 " << (d1 < d2) << endl;
//	cout << "d1 > d2 结果为 " << (d1 > d2) << endl;
//	cout << "d1 <= d2 结果为 " << (d1 <= d2) << endl;
//	cout << "d1 >= d2 结果为 " << (d1 >= d2) << endl;
//	cout << "d1 == d2 结果为 " << (d1 == d2) << endl;
//	cout << "d1 != d2 结果为 " << (d1 != d2) << endl;
//
//	cout << endl;
//
//	cout << "d1 < " << days << " 结果为 " << (d1 < days) << endl;
//	cout << "d1 > " << days << " 结果为 " << (d1 > days) << endl;
//	cout << "d1 <= " << days << " 结果为 " << (d1 <= days) << endl;
//	cout << "d1 >= " << days << " 结果为 " << (d1 >= days) << endl;
//	cout << "d1 == " << days << " 结果为 " << (d1 == days) << endl;
//	cout << "d1 != " << days << " 结果为 " << (d1 != days) << endl;
//
//	cout << endl;
//
//	cout << days << " > d1 结果为 " << (days > d1) << endl;
//	cout << days << " < d1 结果为 " << (days < d1) << endl;
//	cout << days << " >= d1 结果为 " << (days >= d1) << endl;
//	cout << days << " <= d1 结果为 " << (days <= d1) << endl;
//	cout << days << " == d1 结果为 " << (days == d1) << endl;
//	cout << days << " != d1 结果为 " << (days != d1) << endl;
//
//	cout << "*********************************" << endl;
//	cout << "测试结束" << endl;
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
//。加减天数 gap 范围在
//[
//	−
//		1000
//		,
//		1000
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
//1000
//输出：
//
//* ********************************
//1. 基础版内容测试
//
//d1日期为：
//1024 - 10 - 24
//d2日期为：
//1024 - 10 - 24
//d1转换为天数为：
//373940
//d2转换为天数为：
//373940
//d1 - d2 = 0
//* ********************************
//2. 自增与自减运算符测试
//
//d1++ 结果为 1024 - 10 - 24
//++d1 结果为 1024 - 10 - 26
//d1-- 结果为 1024 - 10 - 26
//--d1 结果为 1024 - 10 - 24
//* ********************************
//3. 复合赋值运算符测试
//
//d1 += 1000 结果为 1027 - 07 - 21
//d1 -= 1000 结果为 1024 - 10 - 24
//* ********************************
//4. 加法 / 减法运算符测试
//
//d1 + 1000 = 1027 - 07 - 21
//1000 + d1 = 1027 - 07 - 21
//d1 - 1000 = 1022 - 01 - 28
//1000 - d1 = 1022 - 01 - 28
//* ********************************
//5. 关系运算符测试（1为真，0为假）
//
//d1 < d2 结果为 0
//	d1 > d2 结果为 0
//	d1 <= d2 结果为 1
//	d1 >= d2 结果为 1
//	d1 == d2 结果为 1
//	d1 != d2 结果为 0
//
//	d1 < 373940 结果为 0
//	d1 > 373940 结果为 0
//	d1 <= 373940 结果为 1
//	d1 >= 373940 结果为 1
//	d1 == 373940 结果为 1
//	d1 != 373940 结果为 0
//
//	373940 > d1 结果为 0
//	373940 < d1 结果为 0
//	373940 >= d1 结果为 1
//	373940 <= d1 结果为 1
//	373940 == d1 结果为 1
//	373940 != d1 结果为 0
//	* ********************************
//	测试结束
//	样例二
//	输入：
//
//	1999 12 31
//	654321
//	365
//	输出：
//
//	* ********************************
//	1. 基础版内容测试
//
//	d1日期为：
//	1999 - 12 - 31
//	d2日期为：
//	1792 - 06 - 20
//	d1转换为天数为：
//	730119
//	d2转换为天数为：
//	654321
//	d1 - d2 = 75798
//	* ********************************
//	2. 自增与自减运算符测试
//
//	d1++ 结果为 1999 - 12 - 31
//	++d1 结果为 2000 - 01 - 02
//	d1-- 结果为 2000 - 01 - 02
//	--d1 结果为 1999 - 12 - 31
//	* ********************************
//	3. 复合赋值运算符测试
//
//	d1 += 365 结果为 2000 - 12 - 30
//	d1 -= 365 结果为 1999 - 12 - 31
//	* ********************************
//	4. 加法 / 减法运算符测试
//
//	d1 + 365 = 2000 - 12 - 30
//	365 + d1 = 2000 - 12 - 30
//	d1 - 365 = 1998 - 12 - 31
//	365 - d1 = 1998 - 12 - 31
//	* ********************************
//	5. 关系运算符测试（1为真，0为假）
//
//	d1 < d2 结果为 0
//	d1 > d2 结果为 1
//	d1 <= d2 结果为 0
//	d1 >= d2 结果为 1
//	d1 == d2 结果为 0
//	d1 != d2 结果为 1
//
//	d1 < 654321 结果为 0
//	d1 > 654321 结果为 1
//	d1 <= 654321 结果为 0
//	d1 >= 654321 结果为 1
//	d1 == 654321 结果为 0
//	d1 != 654321 结果为 1
//
//	654321 > d1 结果为 0
//	654321 < d1 结果为 1
//	654321 >= d1 结果为 0
//	654321 <= d1 结果为 1
//	654321 == d1 结果为 0
//	654321 != d1 结果为 1
//	* ********************************
//	测试结束
//	样例三
//	输入：
//
//	2000 02 28
//	800000
//	366
//	输出：
//
//	* ********************************
//	1. 基础版内容测试
//
//	d1日期为：
//	2000 - 02 - 28
//	d2日期为：
//	2191 - 04 - 29
//	d1转换为天数为：
//	730178
//	d2转换为天数为：
//	800000
//	d1 - d2 = -69822
//	* ********************************
//	2. 自增与自减运算符测试
//
//	d1++ 结果为 2000 - 02 - 28
//	++d1 结果为 2000 - 03 - 01
//	d1-- 结果为 2000 - 03 - 01
//	--d1 结果为 2000 - 02 - 28
//	* ********************************
//	3. 复合赋值运算符测试
//
//	d1 += 366 结果为 2001 - 02 - 28
//	d1 -= 366 结果为 2000 - 02 - 28
//	* ********************************
//	4. 加法 / 减法运算符测试
//
//	d1 + 366 = 2001 - 02 - 28
//	366 + d1 = 2001 - 02 - 28
//	d1 - 366 = 1999 - 02 - 27
//	366 - d1 = 1999 - 02 - 27
//	* ********************************
//	5. 关系运算符测试（1为真，0为假）
//
//	d1 < d2 结果为 1
//	d1 > d2 结果为 0
//	d1 <= d2 结果为 1
//	d1 >= d2 结果为 0
//	d1 == d2 结果为 0
//	d1 != d2 结果为 1
//
//	d1 < 800000 结果为 1
//	d1 > 800000 结果为 0
//	d1 <= 800000 结果为 1
//	d1 >= 800000 结果为 0
//	d1 == 800000 结果为 0
//	d1 != 800000 结果为 1
//
//	800000 > d1 结果为 1
//	800000 < d1 结果为 0
//	800000 >= d1 结果为 1
//	800000 <= d1 结果为 0
//	800000 == d1 结果为 0
//	800000 != d1 结果为 1
//	* ********************************
//	测试结束


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
    void normalize() {
        // 处理不合法日期
        while (day <= 0) {
            month--;
            if (month <= 0) {
                year--;
                month = 12;
            }
            day += daysInMonth(month);
        }

        while (day > daysInMonth(month)) {
            day -= daysInMonth(month);
            month++;
            if (month > 12) {
                year++;
                month = 1;
            }
        }
    }

    int daysInMonth(int m) const {
        if (m == 2) {
            return (isLeapYear(year) ? 29 : 28);
        }
        return (m == 4 || m == 6 || m == 9 || m == 11) ? 30 : 31;
    }

    bool isLeapYear(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }


    // 输出格式
    friend ostream& operator<<(ostream& os, const Date& date) {
        os << (date.year < 10 ? "0" : "") << date.year << "-"
            << (date.month < 10 ? "0" : "") << date.month << "-"
            << (date.day < 10 ? "0" : "") << date.day;
        return os;
    }

    // 自增
    Date operator++(int) {
        Date temp = *this;
        day++;
        normalize();
        return temp;
    }

    Date& operator++() {
        day++;
        normalize();
        return *this;
    }

    // 自减
    Date operator--(int) {
        Date temp = *this;
        day--;
        normalize();
        return temp;
    }

    Date& operator--() {
        day--;
        normalize();
        return *this;
    }

    // 加法/减法
    Date operator+(int days) const {
        Date temp = *this;
        temp.day += days;
        temp.normalize();
        return temp;
    }

    Date operator-(int days) const {
        Date temp = *this;
        temp.day -= days;
        temp.normalize();
        return temp;
    }


    // 加法/减法（与 Date 对象相减）
    int operator-(const Date& other) const {
        int totalDays1 = int(*this);
        int totalDays2 = int(other);
        return totalDays1 - totalDays2; // 返回相差的天数
    }

    int operator+(const Date& other) const {
        int totalDays1 = int(*this);
        int totalDays2 = int(other);
        return totalDays1 + totalDays2; // 返回相差的天数
    }




    // 复合赋值运算符
    Date& operator+=(int days) {
        day += days;
        normalize();
        return *this;
    }

    Date& operator-=(int days) {
        day -= days;
        normalize();
        return *this;
    }

    // 日期之间的比较
    bool operator>(const Date& d) const {
        return (year > d.year) || (year == d.year && (month > d.month || (month == d.month && day > d.day)));
    }

    bool operator<(const Date& d) const {
        return (year < d.year) || (year == d.year && (month < d.month || (month == d.month && day < d.day)));
    }

    bool operator>=(const Date& d) const {
        return (*this > d) || (*this == d);
    }

    bool operator<=(const Date& d) const {
        return (*this < d) || (*this == d);
    }

    bool operator==(const Date& d) const {
        return (year == d.year && month == d.month && day == d.day);
    }

    bool operator!=(const Date& d) const {
        return !(*this == d);
    }

    // 天数与日期的比较
    bool operator>(int days) const {
        return int(*this) > days;
    }

    bool operator<(int days) const {
        return int(*this) < days;
    }

    bool operator>=(int days) const {
        return int(*this) >= days;
    }

    bool operator<=(int days) const {
        return int(*this) <= days;
    }

    bool operator==(int days) const {
        return int(*this) == days;
    }

    bool operator!=(int days) const {
        return int(*this) != days;
    }

    // 将日期转换为天数
    operator int() const {
        int totalDays = 0;
        for (int y = 1; y < year; ++y) {
            totalDays += (isLeapYear(y) ? 366 : 365);
        }
        for (int m = 1; m < month; ++m) {
            totalDays += daysInMonth(m);
        }
        totalDays += day;
        return totalDays;
    }
    /**************** TODO-END ****************/
};

/****************** TODO ******************/

Date::Date(int y, int m, int d) : year(y), month(m), day(d) {
    normalize();
}
Date::Date(int days) {
    year = 1; // 初始年份
    while (days > 365) {
        if (isLeapYear(year)) {
            if (days > 366) {
                days -= 366;
                year++;
            }
            else {
                break;
            }
        }
        else {
            days -= 365;
            year++;
        }
    }
    month = 1;
    while (days > daysInMonth(month)) {
        days -= daysInMonth(month);
        month++;
    }
    day = days;
}

// 将整型与日期相加的重载
Date operator+(int days, const Date& date) {
    return date + days; // 调用日期的加法
}

// 将整型与日期相减的重载
//题目有误！！！所以逻辑取反
Date operator-(int days, const Date& date) {
    return date - days; // 调用日期的加法
}

/**************** TODO-END ****************/

int main()
{
    cout << "*********************************" << endl;
    cout << "1. 基础版内容测试" << endl << endl;

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

    cout << "d1转换为天数为：" << endl;
    cout << int(d1) << endl;
    cout << "d2转换为天数为：" << endl;
    cout << int(d2) << endl;

    cout << "d1 - d2 = " << d1 - d2 << endl;
    cout << "*********************************" << endl;
    cout << "2. 自增与自减运算符测试" << endl << endl;

    cout << "d1++ 结果为 " << d1++ << endl;
    cout << "++d1 结果为 " << ++d1 << endl;
    cout << "d1-- 结果为 " << d1-- << endl;
    cout << "--d1 结果为 " << --d1 << endl;

    cout << "*********************************" << endl;
    cout << "3. 复合赋值运算符测试" << endl << endl;

    int gap;
    cout << "请输入加减的天数：" << endl;
    cin >> gap;

    cout << "d1 += " << gap << " 结果为 " << (d1 += gap) << endl;
    cout << "d1 -= " << gap << " 结果为 " << (d1 -= gap) << endl;
    // 注意此时d1将会变为原来的值，因为上面的操作会改变d1的值

    cout << "*********************************" << endl;
    cout << "4. 加法/减法运算符测试" << endl << endl;

    cout << "d1 + " << gap << " = " << d1 + gap << endl;
    cout << gap << " + d1 = " << gap + d1 << endl;

    cout << "d1 - " << gap << " = " << d1 - gap << endl;
    cout << gap << " - d1 = " << gap - d1 << endl;

    cout << "*********************************" << endl;
    cout << "5. 关系运算符测试（1为真，0为假）" << endl << endl;

    cout << "d1 < d2 结果为 " << (d1 < d2) << endl;
    cout << "d1 > d2 结果为 " << (d1 > d2) << endl;
    cout << "d1 <= d2 结果为 " << (d1 <= d2) << endl;
    cout << "d1 >= d2 结果为 " << (d1 >= d2) << endl;
    cout << "d1 == d2 结果为 " << (d1 == d2) << endl;
    cout << "d1 != d2 结果为 " << (d1 != d2) << endl;

    cout << endl;

    cout << "d1 < " << days << " 结果为 " << (d1 < days) << endl;
    cout << "d1 > " << days << " 结果为 " << (d1 > days) << endl;
    cout << "d1 <= " << days << " 结果为 " << (d1 <= days) << endl;
    cout << "d1 >= " << days << " 结果为 " << (d1 >= days) << endl;
    cout << "d1 == " << days << " 结果为 " << (d1 == days) << endl;
    cout << "d1 != " << days << " 结果为 " << (d1 != days) << endl;

    cout << endl;

    cout << days << " > d1 结果为 " << (days > d1) << endl;
    cout << days << " < d1 结果为 " << (days < d1) << endl;
    cout << days << " >= d1 结果为 " << (days >= d1) << endl;
    cout << days << " <= d1 结果为 " << (days <= d1) << endl;
    cout << days << " == d1 结果为 " << (days == d1) << endl;
    cout << days << " != d1 结果为 " << (days != d1) << endl;

    cout << "*********************************" << endl;
    cout << "测试结束" << endl;

    return 0;
}
