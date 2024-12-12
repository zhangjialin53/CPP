//多态性与虚函数 - 1 - 抽象基类 Shape 的派生
//时间限制	1000ms	空间限制	1000MB
//
//“这个世界上，有什么是永恒的吗”
//
//小甜一边站在河边踢石子 一边问你
//
//“东方明珠照的黄浦江水光熠熠
//
//可是千百年后又该是哪里的灯彻夜通明
//
//万里长江奔腾不息
//
//但是沧海桑田，总有一天江海也会变平原
//
//江畔何人初见月、江月何年初照人
//
//可是就算是月亮，于这漫漫宇宙而言，不过也是年轻的光景”
//
//小甜说罢，抬头看了你
//
//“更何况是我们 哀吾生之须臾 又不能羡长江之无穷
//
//一切最后，都要化为乌有
//
//再美好的爱情也会结束
//
//再精彩的你 我也总有一天要说再见”
//
//说完 你看着小甜的身体逐渐透明
//
//“早知道有这样的一天 但是你也不要伤心
//
//在这个夏天能给你带来快乐是我的荣幸
//
//要分开 也是我们 必然的结局
//
//但是无论怎样 希望对你而言
//
//我是一个一想起就会让你弯起嘴角的男孩子”
//
//可惜还是
//
//要说再见了
//
//TO - DO
//编写一个程序，定义抽象基类 Shape，由它派生出 5 个派生类：Circle(圆形)、Square(正方形)、Rectangle(矩形)、Trapezoid(梯形)、Triangle(三角形)。用虚函数分别计算几种图形面积，并求它们之和。要求用基数指针数组，使它每一个元素指向一个派生类对象。
//
//提交的代码要包含框架。
//
//#include <iostream>
//#include <cmath>
//
//
//using namespace std;
//
//
///**********************************************
//*
//*    TO-DO:
//*        请补全该区域的代码。
//*
//***********************************************/
//
//
///**********************************************
//*
//*    TO-DO END
//*
//***********************************************/
//
//
//int main() {
//    Circle    c1(2);
//    Square    s1(3);
//    Rectangle r1(4, 5);
//    Trapezoid t1(6, 7, 8);
//    Triangle  t2(3, 4, 5);
//
//
//    Shape* s[5] = { &c1, &s1, &r1, &t1, &t2 };
//
//
//    for (int i = 0; i < 5; i++) {
//        cout << s[i]->area() << endl;
//    }
//    return 0;
//}
//输入数据说明
//本题没有输入数据，框架已提供输入数据，确保输出与期望一致即可。
//输出格式说明
//只需要输出计算出的面积即可。
//不需要考虑输出精度问题，所有浮点数据请使用 double 进行处理。
//可以考虑输出相关人性化提示。（可以考虑 area() 返回 char* 指针进行输出）
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
//直接输出答案而非程序运行结果的，0 分
//抄袭舞弊者，0 分
//测试样例
//圆形的面积是：12.5664
//正方形的面积是：9
//矩形的面积是：20
//梯形的面积是：52
//三角形的面积是：6

#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;


//**********************************************
//加上了文字输出
#define M_PI 3.1415926

// 基类
class Shape {
public:
    //virtual double area() const = 0; 
    //virtual string area() const = 0; //GPT says that STRING is easier than char* point
    //已老实 string的话9.000000000也会有
    virtual const char* area() const = 0;
    virtual ~Shape() {} // 虚析构函数
};


char* stringToCharPointer(const string& str) {
    char* buffer = new char[str.length() + 1]; // 动态分配空间
    strcpy_s(buffer, str.length() + 1, str.c_str()); // 安全拷贝
    return buffer;
}

// 判断是否是整数（精度范围内）
bool isInteger(double value) {
    return floor(value) == value;
}

// 将 double 转换为符合需求的字符串
string formatDouble(double value) {
    if (isInteger(value)) {
        return to_string(static_cast<long long>(value));
    }
    else {
        return to_string(value);
    }
}
//***********************************************/

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    const char* area() const override {
        double result = M_PI * radius * radius;

        //单独处理这里位数不对齐的问题 （但是可移植性很差 其他的有没有这个处理）
        double scaledValue = result * 10000;
        // 四舍五入
        double roundedValue = round(scaledValue);
        roundedValue /= 10000.0;

        string output = "圆形的面积是：" + formatDouble(roundedValue);
        /* char* message = new char[output.length() + 1];
         strcpy(message, output.c_str());
         return message;*/
        return stringToCharPointer(output);
    }
};


class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    const char* area() const override {
        double result = side * side;
        string output = "正方形的面积是：" + formatDouble(result);
        /*char* message = new char[output.length() + 1];
        strcpy(message, output.c_str());
        return message;*/

        return stringToCharPointer(output);
    }
};


class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    const char* area() const override {
        double result = length * width;
        string output = "矩形的面积是：" + formatDouble(result);
        /*    char* message = new char[output.length() + 1];
            strcpy(message, output.c_str());
            return message;*/
        return stringToCharPointer(output);
    }
};


class Trapezoid : public Shape {
private:
    double base1, base2, height;
public:
    Trapezoid(double b1, double b2, double h) : base1(b1), base2(b2), height(h) {}
    const char* area() const override {
        double result = (base1 + base2) * height / 2.0;
        string output = "梯形的面积是：" + formatDouble(result);
        /*char* message = new char[output.length() + 1];
        strcpy(message, output.c_str());
        return message;*/
        return stringToCharPointer(output);
    }
};


class Triangle : public Shape {
private:
    double a, b, c; // 三边
public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}
    const char* area() const override {
        double s = (a + b + c) / 2.0; // 半周长
        double result = sqrt(s * (s - a) * (s - b) * (s - c)); // 海伦公式
        string output = "三角形的面积是：" + formatDouble(result);
        /*char* message = new char[output.length() + 1];
        strcpy_s(message, output.c_str());
        return message;*/
        return stringToCharPointer(output);
    }
};

int main() {
    Circle c1(2);
    Square s1(3);
    Rectangle r1(4, 5);
    Trapezoid t1(6, 7, 8);
    Triangle t2(3, 4, 5);

    Shape* s[5] = { &c1, &s1, &r1, &t1, &t2 };

    for (int i = 0; i < 5; i++) {
        cout << s[i]->area() << endl;
    }

    return 0;
}
