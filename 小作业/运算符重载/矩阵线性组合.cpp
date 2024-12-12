//运算符重载 - 2 - 矩阵线性组合
//时间限制	1000ms	空间限制	512MB
//
//题目描述
//你已经实现了矩阵的数乘，那么矩阵的线性组合也近在眼前了！
//
//TODO
//请编写一个程序，接受三个矩阵和三个系数的输入，输出他们的线性组合。
//
//你需要额外实现加法运算符的重载。
//
//本题部分代码已经为你写好，你只需要且只能在TODO块中进行编程。
//
//已有的内容不允许更改。编程结束后，不要删除TODO块的两行注释。
//
//#include <iostream>
//using namespace std;
//
//class Matrix
//{
//private:
//    int** data; // 二维数组指针
//    int row, col; // 行数和列数
//
//public:
//    Matrix(int r, int c); // 构造函数
//    ~Matrix(); // 析构函数
//
//    /****************** TODO ******************/
//
//    /**************** TODO-END ****************/
//};
//
///****************** TODO ******************/
//
///**************** TODO-END ****************/
//
//int main()
//{
//    // 输入矩阵的行数和列数
//    int r, c;
//    cout << "请输入矩阵的行数和列数：" << endl;
//    cin >> r >> c;
//    // 创建三个矩阵对象
//    Matrix A(r, c), B(r, c), C(r, c);
//    // 输入三个矩阵的元素
//    cout << "请输入矩阵A的元素：" << endl;
//    cin >> A;
//    cout << "请输入矩阵B的元素：" << endl;
//    cin >> B;
//    cout << "请输入矩阵C的元素：" << endl;
//    cin >> C;
//    // 输入三个矩阵的组合系数
//    int ka, kb, kc;
//    cout << "请依次输入矩阵A、B、C的组合系数ka，kb，kc：" << endl;
//    cin >> ka >> kb >> kc;
//
//    /********** 测试矩阵简单线性组合 **********/
//    Matrix D1 = ka * A + kb * B + kc * C;
//    cout << "D1 = " << ka << " * A + " << kb << " * B + " << kc << " * C = " << endl;
//    cout << D1 << endl;
//    Matrix D2 = A * ka + B * kb + C * kc;
//    cout << "D2 = A * " << ka << " + B * " << kb << " + C * " << kc << " = " << endl;
//    cout << D2 << endl;
//
//    /********** 测试矩阵复杂线性组合 **********/
//    Matrix D3 = A * kb * kc + B * ka * kc + C * ka * kb;
//    cout << "D3 = A * " << kb << " * " << kc << " + B * " << ka << " * " << kc << " + C * " << ka << " * " << kb << " = " << endl;
//    cout << D3 << endl;
//    Matrix D4 = ka * (kb * (A + B + C)) * kc;
//    cout << "D4 = " << ka << " * (" << kb << " * (A + B + C)) * " << kc << " = " << endl;
//    cout << D4 << endl;
//    Matrix D5 = ka * (kb * (kc * A) + B) + C;
//    cout << "D5 = " << ka << " * (" << kb << " * (" << kc << " * A) + B) + C = " << endl;
//    cout << D5 << endl;
//
//    return 0;
//}
//交作业时，提交完整的代码。
//
//输入输出格式说明
//输入格式说明
//首先输入两个整数，代表矩阵的长宽，范围均在
//(
//    0
//    ,
//    20
//]
//。
//然后依次输入三个矩阵的值，范围在
//[
//    −
//        1
//        0
//        3
//        ,
//        1
//        0
//        3
//]
//。
//最后输入三个矩阵的整数系数，范围在
//[
//    −
//        1
//        0
//        2
//        ,
//        1
//        0
//        2
//]
//。
//不需要考虑非法输入。
//输出格式说明
//输出矩阵线性组合后的结果。
//测试样例
//下面的输出内容省略了提示语。
//
//样例一
//输入：
//
//3 3
//1 2 3
//1 2 3
//1 2 3
//4 5 6
//4 5 6
//4 5 6
//0 0 0
//0 0 0
//0 0 0
//1 - 2 3
//输出：
//
//D1 = 1 * A + -2 * B + 3 * C =
//-7 - 8 - 9
//- 7 - 8 - 9
//- 7 - 8 - 9
//
//D2 = A * 1 + B * -2 + C * 3 =
//-7 - 8 - 9
//- 7 - 8 - 9
//- 7 - 8 - 9
//
//D3 = A * -2 * 3 + B * 1 * 3 + C * 1 * -2 =
//6 3 0
//6 3 0
//6 3 0
//
//D4 = 1 * (-2 * (A + B + C)) * 3 =
//-30 - 42 - 54
//- 30 - 42 - 54
//- 30 - 42 - 54
//
//D5 = 1 * (-2 * (3 * A) + B) + C =
//-2 - 7 - 12
//- 2 - 7 - 12
//- 2 - 7 - 12
//样例二
//输入：
//
//1 6
//1 2 3 4 5 6
//1 1 4 5 1 4
//0 1 0 1 0 1
//- 2 3 - 1
//输出：
//
//D1 = -2 * A + 3 * B + -1 * C =
//1 - 2 6 6 - 7 - 1
//
//D2 = A * -2 + B * 3 + C * -1 =
//1 - 2 6 6 - 7 - 1
//
//D3 = A * 3 * -1 + B * -2 * -1 + C * -2 * 3 =
//-1 - 10 - 1 - 8 - 13 - 16
//
//D4 = -2 * (3 * (A + B + C)) * -1 =
//12 24 42 60 36 66
//
//D5 = -2 * (3 * (-1 * A) + B) + C =
//4 11 10 15 28 29
//样例三
//输入：
//
//1 1
//10
//20
//30
//10 20 30
//输出：
//
//D1 = 10 * A + 20 * B + 30 * C =
//1400
//
//D2 = A * 10 + B * 20 + C * 30 =
//1400
//
//D3 = A * 20 * 30 + B * 10 * 30 + C * 10 * 20 =
//18000
//
//D4 = 10 * (20 * (A + B + C)) * 30 =
//360000
//
//D5 = 10 * (20 * (30 * A) + B) + C =
//60230
//选择语言：
//c++
//1234567891011121314151617181920212223242526272829303132
//#include <iostream>
//using namespace std;
//
//class Matrix
//{
//private:
//    int** data; // 二维数组指针
//    int row, col; // 行数和列数
//
//public:
//



#include <iostream>
using namespace std;

class Matrix
{
private:
    int** data; // 二维数组指针
    int row, col; // 行数和列数

public:
    Matrix(int r, int c); // 构造函数
    ~Matrix(); // 析构函数

    /****************** TODO ******************/
    // 重载乘法运算符，矩阵与常数相乘
    Matrix operator*(int scalar) const;
    friend Matrix operator*(int scalar, const Matrix& m);

    // 重载加法运算符，矩阵与矩阵相加
    Matrix operator+(const Matrix& other) const;

    // 重载输入运算符
    friend istream& operator>>(istream& in, Matrix& m);

    // 重载输出运算符
    friend ostream& operator<<(ostream& out, const Matrix& m);
    /**************** TODO-END ****************/
};

/****************** TODO ******************/
// 构造函数实现
Matrix::Matrix(int r, int c) : row(r), col(c)
{
    data = new int* [row];
    for (int i = 0; i < row; ++i)
        data[i] = new int[col];
}

// 析构函数实现
Matrix::~Matrix()
{
    for (int i = 0; i < row; ++i)
        delete[] data[i];
    delete[] data;
}

// 重载乘法运算符，矩阵与常数相乘
Matrix Matrix::operator*(int scalar) const
{
    Matrix result(row, col);
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            result.data[i][j] = data[i][j] * scalar;
    return result;
}

// 重载乘法运算符，常数与矩阵相乘
Matrix operator*(int scalar, const Matrix& m)
{
    return m * scalar; // 调用上面定义的成员函数版本
}

// 重载加法运算符，矩阵与矩阵相加
Matrix Matrix::operator+(const Matrix& other) const
{
    if (row != other.row || col != other.col)
    {
        throw runtime_error("矩阵维度不匹配");
    }
    Matrix result(row, col);
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            result.data[i][j] = data[i][j] + other.data[i][j];
    return result;
}

// 重载输入运算符
istream& operator>>(istream& in, Matrix& m)
{
    for (int i = 0; i < m.row; ++i)
        for (int j = 0; j < m.col; ++j)
            in >> m.data[i][j];
    return in;
}

// 重载输出运算符
ostream& operator<<(ostream& out, const Matrix& m)
{
    for (int i = 0; i < m.row; ++i)
    {
        for (int j = 0; j < m.col; ++j)
            out << m.data[i][j] << " ";
        out << endl;
    }
    return out;
}
/**************** TODO-END ****************/

int main()
{
    // 输入矩阵的行数和列数
    int r, c;
    cout << "请输入矩阵的行数和列数：" << endl;
    cin >> r >> c;
    // 创建三个矩阵对象
    Matrix A(r, c), B(r, c), C(r, c);
    // 输入三个矩阵的元素
    cout << "请输入矩阵A的元素：" << endl;
    cin >> A;
    cout << "请输入矩阵B的元素：" << endl;
    cin >> B;
    cout << "请输入矩阵C的元素：" << endl;
    cin >> C;
    // 输入三个矩阵的组合系数
    int ka, kb, kc;
    cout << "请依次输入矩阵A、B、C的组合系数ka，kb，kc：" << endl;
    cin >> ka >> kb >> kc;

    /********** 测试矩阵简单线性组合 **********/
    Matrix D1 = ka * A + kb * B + kc * C;
    cout << "D1 = " << ka << " * A + " << kb << " * B + " << kc << " * C = " << endl;
    cout << D1 << endl;
    Matrix D2 = A * ka + B * kb + C * kc;
    cout << "D2 = A * " << ka << " + B * " << kb << " + C * " << kc << " = " << endl;
    cout << D2 << endl;

    /********** 测试矩阵复杂线性组合 **********/
    Matrix D3 = A * kb * kc + B * ka * kc + C * ka * kb;
    cout << "D3 = A * " << kb << " * " << kc << " + B * " << ka << " * " << kc << " + C * " << ka << " * " << kb << " = " << endl;
    cout << D3 << endl;
    Matrix D4 = ka * (kb * (A + B + C)) * kc;
    cout << "D4 = " << ka << " * (" << kb << " * (A + B + C)) * " << kc << " = " << endl;
    cout << D4 << endl;
    Matrix D5 = ka * (kb * (kc * A) + B) + C;
    cout << "D5 = " << ka << " * (" << kb << " * (" << kc << " * A) + B) + C = " << endl;
    cout << D5 << endl;

    return 0;
}