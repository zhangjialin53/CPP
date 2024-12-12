//运算符重载 - 1 - 矩阵数乘
//时间限制	1000ms	空间限制	512MB
//
//题目描述
//相信你对矩阵的数乘并不陌生，那么接下来请你尝试着实现吧！
//
//注意：矩阵的数乘分为左乘和右乘。
//
//TODO
//请编写一个程序，接受一个矩阵和系数输入，输出矩阵数乘后的结果。
//
//注意：除了矩阵数乘的运算符，你还需要重载输入输出流的运算符，相信这对你来说并不是一件难事！
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
//    // 创建矩阵对象
//    Matrix M(r, c);
//    // 输入矩阵的元素
//    cout << "请输入矩阵M的元素：" << endl;
//    cin >> M;
//    // 输入数乘的数
//    int k;
//    cout << "请输入数乘的数k：" << endl;
//    cin >> k;
//
//    /********** 测试矩阵左 / 右乘一个数 **********/
//    Matrix M1 = M * k;
//    cout << "M1 = M * " << k << "：" << endl;
//    cout << M1 << endl;
//    Matrix M2 = k * M;
//    cout << "M2 = " << k << " * M：" << endl;
//    cout << M2 << endl;
//
//    /************* 测试矩阵复合乘法 *************/
//    Matrix M3 = M * k * k;
//    cout << "M3 = M * " << k << " * " << k << "：" << endl;
//    cout << M3 << endl;
//    Matrix M4 = k * M * k;
//    cout << "M4 = " << k << " * M * " << k << "：" << endl;
//    cout << M4 << endl;
//    Matrix M5 = k * (k * M);
//    cout << "M5 = " << k << " * " << k << " * M：" << endl;
//    cout << M5 << endl;
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
//然后依次输入这个矩阵的值，范围在
//[
//    −
//        1
//        0
//        4
//        ,
//        1
//        0
//        4
//]
//。
//最后输入矩阵数乘的整数系数，范围在
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
//输出矩阵数乘后的结果。
//测试样例
//下面的输出内容省略了提示语，两次数乘只保留一次输出结果。
//
//样例一
//输入：
//
//3 3
//1 1 1
//2 2 2
//3 3 3
//0
//输出：
//
//M1 = M * 0：
//0 0 0
//0 0 0
//0 0 0
//
//M2 = 0 * M：
//0 0 0
//0 0 0
//0 0 0
//
//M3 = M * 0 * 0：
//0 0 0
//0 0 0
//0 0 0
//
//M4 = 0 * M * 0：
//0 0 0
//0 0 0
//0 0 0
//
//M5 = 0 * 0 * M：
//0 0 0
//0 0 0
//0 0 0
//样例二
//输入：
//
//5 5
//1 1 1 1 1
//2 2 2 2 2
//3 3 3 3 3
//4 4 4 4 4
//5 5 5 5 5
//- 1
//输出：
//
//M1 = M * -1：
//- 1 - 1 - 1 - 1 - 1
//- 2 - 2 - 2 - 2 - 2
//- 3 - 3 - 3 - 3 - 3
//- 4 - 4 - 4 - 4 - 4
//- 5 - 5 - 5 - 5 - 5
//
//M2 = -1 * M：
//- 1 - 1 - 1 - 1 - 1
//- 2 - 2 - 2 - 2 - 2
//- 3 - 3 - 3 - 3 - 3
//- 4 - 4 - 4 - 4 - 4
//- 5 - 5 - 5 - 5 - 5
//
//M3 = M * -1 * -1：
//1 1 1 1 1
//2 2 2 2 2
//3 3 3 3 3
//4 4 4 4 4
//5 5 5 5 5
//
//M4 = -1 * M * -1：
//1 1 1 1 1
//2 2 2 2 2
//3 3 3 3 3
//4 4 4 4 4
//5 5 5 5 5
//
//M5 = -1 * -1 * M：
//1 1 1 1 1
//2 2 2 2 2
//3 3 3 3 3
//4 4 4 4 4
//5 5 5 5 5
//样例三
//输入：
//
//1 1
//14
//15
//输出：
//
//M1 = M * 15：
//210
//
//M2 = 15 * M：
//210
//
//M3 = M * 15 * 15：
//3150
//
//M4 = 15 * M * 15：
//3150
//
//M5 = 15 * 15 * M：
//3150


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


    // 重载输入运算符
    friend istream& operator>>(istream& in, Matrix& m)
    {
        for (int i = 0; i < m.row; ++i)
            for (int j = 0; j < m.col; ++j)
                in >> m.data[i][j];
        return in;
    }

    // 重载输出运算符
    friend ostream& operator<<(ostream& out, const Matrix& m)
    {
        for (int i = 0; i < m.row; ++i)
        {
            for (int j = 0; j < m.col; ++j)
                out << m.data[i][j] << " ";
            out << endl;
        }
        return out;
    }

    // 重载乘法运算符，矩阵与常数相乘
    Matrix operator*(int scalar) const
    {
        Matrix result(row, col);
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < col; ++j)
                result.data[i][j] = data[i][j] * scalar;
        return result;
    }

    // 重载乘法运算符，常数与矩阵相乘
    friend Matrix operator*(int scalar, const Matrix& m)
    {
        return m * scalar; // 调用上面定义的成员函数版本
    }


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


//other内部实现了 不用外部实现

/**************** TODO-END ****************/

int main()
{
    // 输入矩阵的行数和列数
    int r, c;
    cout << "请输入矩阵的行数和列数：" << endl;
    cin >> r >> c;
    // 创建矩阵对象
    Matrix M(r, c);
    // 输入矩阵的元素
    cout << "请输入矩阵M的元素：" << endl;
    cin >> M;
    // 输入数乘的数
    int k;
    cout << "请输入数乘的数k：" << endl;
    cin >> k;

    /********** 测试矩阵左 / 右乘一个数 **********/
    Matrix M1 = M * k;
    cout << "M1 = M * " << k << "：" << endl;
    cout << M1 << endl;
    Matrix M2 = k * M;
    cout << "M2 = " << k << " * M：" << endl;
    cout << M2 << endl;

    /************* 测试矩阵复合乘法 *************/
    Matrix M3 = M * k * k;
    cout << "M3 = M * " << k << " * " << k << "：" << endl;
    cout << M3 << endl;
    Matrix M4 = k * M * k;
    cout << "M4 = " << k << " * M * " << k << "：" << endl;
    cout << M4 << endl;
    Matrix M5 = k * (k * M);
    cout << "M5 = " << k << " * " << k << " * M：" << endl;
    cout << M5 << endl;

    return 0;
}