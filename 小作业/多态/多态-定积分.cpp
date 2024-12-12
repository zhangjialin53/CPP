﻿//多态性与虚函数 - 2 - 矩形法求定积分的通用函数
//时间限制	1000ms	空间限制	1000MB
//
//终将知道离别 那么相聚又有什么意义呢
//
//你望着小甜
//
//一切都是虚无的 那么我们 存在的意义又是什么
//
//你看着小甜的身体逐渐离开地面
//
//却又微笑着 对你说
//
//“我们的存在 就是替漫漫的历史保留当下
//
//我们的意义不在于此刻拥有 而在于这一刻
//
//我们望尽了历史 就好像一抬眼望向天空 穿透了银河
//
//尽管我们终将离开 可是没有什么能抹去我们感情的存在
//
//就算有天 或许会减淡 随着我们都离开这个世界而失去依托
//
//可是我们曾经一起走过的路 一起吹过的晚风
//
//一起在相处中产生的感情
//
//存在的历史不会消亡”
//
//小甜的身体逐渐漂浮
//
//你却紧紧地 抓住了他的手
//
//“就算最终化为虚无 有这样一段故事 不也很好了 不是吗
//
//在最后的时间里 别哭了 笑一下 好吗”
//
//小甜像抽出手 你却紧紧抓住不放
//
//“真的要说再见了”
//
//巨大的力量让你不得不松开小甜的手
//
//“祝未来的每一天 你都要快乐”
//
//你看着小甜的身体 逐渐升高 逐渐透明 却依然看着你 向你挥手
//
//“再见了”
//
//“再见了”
//
//再见了
//
//可惜不能再见了
//
//TO - DO
//写一个用矩形法求定积分的通用函数，分别求
//∫
//0
//1
//sin
//⁡
//x
//dx
//、
//∫
//−
//1
//1
//cos
//⁡
//x
//dx
//和
//∫
//0
//2
//exp
//⁡
//x
//dx
//。
//
//（说明：sin, cos, exp 已在系统的数学函数库中，程序开头要用 #include <cmath>）
//
//每个定积分的求值请使用多态与虚函数的方式实现。
//定义一个基类 integral，三个派生类 integral_sin, integral_cos, integral_exp。
//用于求值的成员函数名规定为 value()。
//请重载流运算符 >> 用于输入。
//其他需要的成员请自行定义。
//请采用如下公式描述的矩形法算法进行计算。
//
//∫
//a
//b
//f
//(
//    x
//)
//dx
//≈
//∑
//i
//=
//0
//10000
//f
//(
//    a
//    +
//    Δ
//    x
//    i
//)
//Δ
//x
//,
//Δ
//x
//=
//b
//−
//a
//10000
//请你按上述描述编写程序，提交的代码要包含框架。
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
//int main()
//{
//    integral_sin s1;
//    integral_cos s2;
//    integral_exp s3;
//    integral* p;
//
//
//    cout << "请输入上下限：";
//    cin >> s1;
//    p = &s1;
//    cout << "∫sinxdx的计算结果为：" << (p->value()) << endl;
//
//
//    cout << "请输入上下限：";
//    cin >> s2;
//    p = &s2;
//    cout << "∫cosxdx的计算结果为：" << (p->value()) << endl;
//
//
//    cout << "请输入上下限：";
//    cin >> s3;
//    p = &s3;
//    cout << "∫expxdx的计算结果为：" << (p->value()) << endl;
//
//
//    return 0;
//}
//输入数据说明
//共三行，每行 2 个整数，分别代表所求三类积分的上下界。
//输出格式说明
//只需要输出计算出的积分即可。
//不需要考虑输出精度问题，所有浮点数据请使用 double 进行处理。
//如果计算结果与测试点有出入，请以测试点为准修改你的算法。
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
//0 1
//0 1
//0 1
//请输入上下限：
//sinxdx的计算结果为：0.45974
//请输入上下限：
//cosxdx的计算结果为：0.841548
//请输入上下限：
//expxdx的计算结果为：1.71847


多态性与虚函数 - 2 - 矩形法求定积分的通用函数
时间限制	1000ms	空间限制	1000MB

终将知道离别 那么相聚又有什么意义呢

你望着小甜

一切都是虚无的 那么我们 存在的意义又是什么

你看着小甜的身体逐渐离开地面

却又微笑着 对你说

“我们的存在 就是替漫漫的历史保留当下

我们的意义不在于此刻拥有 而在于这一刻

我们望尽了历史 就好像一抬眼望向天空 穿透了银河

尽管我们终将离开 可是没有什么能抹去我们感情的存在

就算有天 或许会减淡 随着我们都离开这个世界而失去依托

可是我们曾经一起走过的路 一起吹过的晚风

一起在相处中产生的感情

存在的历史不会消亡”

小甜的身体逐渐漂浮

你却紧紧地 抓住了他的手

“就算最终化为虚无 有这样一段故事 不也很好了 不是吗

在最后的时间里 别哭了 笑一下 好吗”

小甜像抽出手 你却紧紧抓住不放

“真的要说再见了”

巨大的力量让你不得不松开小甜的手

“祝未来的每一天 你都要快乐”

你看着小甜的身体 逐渐升高 逐渐透明 却依然看着你 向你挥手

“再见了”

“再见了”

再见了

可惜不能再见了

TO - DO
写一个用矩形法求定积分的通用函数，分别求
∫
0
1
sin
⁡
x
dx
、
∫
−
1
1
cos
⁡
x
dx
和
∫
0
2
exp
⁡
x
dx
。

（说明：sin, cos, exp 已在系统的数学函数库中，程序开头要用 #include <cmath>）

每个定积分的求值请使用多态与虚函数的方式实现。
定义一个基类 integral，三个派生类 integral_sin, integral_cos, integral_exp。
用于求值的成员函数名规定为 value()。
请重载流运算符 >> 用于输入。
其他需要的成员请自行定义。
请采用如下公式描述的矩形法算法进行计算。

∫
a
b
f
(
    x
)
dx
≈
∑
i
=
0
10000
f
(
    a
    +
    Δ
    x
    i
)
Δ
x
,
Δ
x
=
b
−
a
10000
请你按上述描述编写程序，提交的代码要包含框架。

#include <iostream>
#include <cmath>


using namespace std;


/**********************************************
*
*    TO-DO:
*        请补全该区域的代码。
*
***********************************************/


/**********************************************
*
*    TO-DO END
*
***********************************************/


int main()
{
    integral_sin s1;
    integral_cos s2;
    integral_exp s3;
    integral* p;


    cout << "请输入上下限：";
    cin >> s1;
    p = &s1;
    cout << "∫sinxdx的计算结果为：" << (p->value()) << endl;


    cout << "请输入上下限：";
    cin >> s2;
    p = &s2;
    cout << "∫cosxdx的计算结果为：" << (p->value()) << endl;


    cout << "请输入上下限：";
    cin >> s3;
    p = &s3;
    cout << "∫expxdx的计算结果为：" << (p->value()) << endl;


    return 0;
}
输入数据说明
共三行，每行 2 个整数，分别代表所求三类积分的上下界。
输出格式说明
只需要输出计算出的积分即可。
不需要考虑输出精度问题，所有浮点数据请使用 double 进行处理。
如果计算结果与测试点有出入，请以测试点为准修改你的算法。
限制
不允许使用尚未讲授过的后续课程中的知识点
过程中请给出相应的输入提示与输出提示
程序编写应符合锯齿型的书写格式
不允许使用 goto
除明确要求外，不允许使用 C++ 的 std::string 类
运行时间 1 秒
运行使用内存 128MB
输出限制 2048 个字符
评分标准
若编译运行成功，即有 5 分基础分
若出现编译 Warning，扣 1 分，若发现非法语句，如 system("pause") 和 goto 等，扣 2 分
若出现非正常退出(Runtime Error)，按测试点视情况扣分
【人工审核项】 若发现代码使用后续知识点，视情况扣分
【人工审核项】 若代码书写不规范或整洁度极差(如变量取名不规范或没有按照锯齿型书写等)，视情况扣分
【人工审核项】 不符合题目要求（如要求用递归完成而没有使用、没有错误性输入检测等），视情况扣分
直接输出答案而非程序运行结果的，0 分
抄袭舞弊者，0 分
测试样例
0 1
0 1
0 1
请输入上下限：
sinxdx的计算结果为：0.45974
请输入上下限：
cosxdx的计算结果为：0.841548
请输入上下限：
expxdx的计算结果为：1.71847