//��̬�����麯�� - 1 - ������� Shape ������
//ʱ������	1000ms	�ռ�����	1000MB
//
//����������ϣ���ʲô���������
//
//С��һ��վ�ںӱ���ʯ�� һ������
//
//�����������յĻ��ֽ�ˮ������
//
//����ǧ������ָ�������ĵƳ�ҹͨ��
//
//���ﳤ�����ڲ�Ϣ
//
//���ǲ׺�ɣ�����һ�콭��Ҳ���ƽԭ
//
//���Ϻ��˳����¡����º��������
//
//���Ǿ�������������������������ԣ�����Ҳ������Ĺ⾰��
//
//С��˵�գ�̧ͷ������
//
//�����ο������� ������֮���� �ֲ����۳���֮����
//
//һ����󣬶�Ҫ��Ϊ����
//
//�����õİ���Ҳ�����
//
//�پ��ʵ��� ��Ҳ����һ��Ҫ˵�ټ���
//
//˵�� �㿴��С���������͸��
//
//����֪����������һ�� ������Ҳ��Ҫ����
//
//����������ܸ�������������ҵ�����
//
//Ҫ�ֿ� Ҳ������ ��Ȼ�Ľ��
//
//������������ ϣ���������
//
//����һ��һ����ͻ�����������ǵ��к��ӡ�
//
//��ϧ����
//
//Ҫ˵�ټ���
//
//TO - DO
//��дһ�����򣬶��������� Shape������������ 5 �������ࣺCircle(Բ��)��Square(������)��Rectangle(����)��Trapezoid(����)��Triangle(������)�����麯���ֱ���㼸��ͼ���������������֮�͡�Ҫ���û���ָ�����飬ʹ��ÿһ��Ԫ��ָ��һ�����������
//
//�ύ�Ĵ���Ҫ������ܡ�
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
//*        �벹ȫ������Ĵ��롣
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
//��������˵��
//����û���������ݣ�������ṩ�������ݣ�ȷ�����������һ�¼��ɡ�
//�����ʽ˵��
//ֻ��Ҫ����������������ɡ�
//����Ҫ��������������⣬���и���������ʹ�� double ���д���
//���Կ������������Ի���ʾ�������Կ��� area() ���� char* ָ����������
//����
//������ʹ����δ���ڹ��ĺ����γ��е�֪ʶ��
//�������������Ӧ��������ʾ�������ʾ
//�����дӦ���Ͼ���͵���д��ʽ
//������ʹ�� goto
//����ȷҪ���⣬������ʹ�� C++ �� std::string ��
//����ʱ�� 1 ��
//����ʹ���ڴ� 128MB
//������� 2048 ���ַ�
//���ֱ�׼
//���������гɹ������� 5 �ֻ�����
//�����ֱ��� Warning���� 1 �֣������ַǷ���䣬�� system("pause") �� goto �ȣ��� 2 ��
//�����ַ������˳�(Runtime Error)�������Ե�������۷�
//���˹����� �����ִ���ʹ�ú���֪ʶ�㣬������۷�
//���˹����� ��������д���淶������ȼ���(�����ȡ�����淶��û�а��վ������д��)��������۷�
//���˹����� ��������ĿҪ����Ҫ���õݹ���ɶ�û��ʹ�á�û�д�����������ȣ���������۷�
//ֱ������𰸶��ǳ������н���ģ�0 ��
//��Ϯ����ߣ�0 ��
//��������
//Բ�ε�����ǣ�12.5664
//�����ε�����ǣ�9
//���ε�����ǣ�20
//���ε�����ǣ�52
//�����ε�����ǣ�6

#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;


//**********************************************
//�������������
#define M_PI 3.1415926

// ����
class Shape {
public:
    //virtual double area() const = 0; 
    //virtual string area() const = 0; //GPT says that STRING is easier than char* point
    //����ʵ string�Ļ�9.000000000Ҳ����
    virtual const char* area() const = 0;
    virtual ~Shape() {} // ����������
};


char* stringToCharPointer(const string& str) {
    char* buffer = new char[str.length() + 1]; // ��̬����ռ�
    strcpy_s(buffer, str.length() + 1, str.c_str()); // ��ȫ����
    return buffer;
}

// �ж��Ƿ������������ȷ�Χ�ڣ�
bool isInteger(double value) {
    return floor(value) == value;
}

// �� double ת��Ϊ����������ַ���
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

        //������������λ������������� �����ǿ���ֲ�Ժܲ� ��������û���������
        double scaledValue = result * 10000;
        // ��������
        double roundedValue = round(scaledValue);
        roundedValue /= 10000.0;

        string output = "Բ�ε�����ǣ�" + formatDouble(roundedValue);
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
        string output = "�����ε�����ǣ�" + formatDouble(result);
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
        string output = "���ε�����ǣ�" + formatDouble(result);
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
        string output = "���ε�����ǣ�" + formatDouble(result);
        /*char* message = new char[output.length() + 1];
        strcpy(message, output.c_str());
        return message;*/
        return stringToCharPointer(output);
    }
};


class Triangle : public Shape {
private:
    double a, b, c; // ����
public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}
    const char* area() const override {
        double s = (a + b + c) / 2.0; // ���ܳ�
        double result = sqrt(s * (s - a) * (s - b) * (s - c)); // ���׹�ʽ
        string output = "�����ε�����ǣ�" + formatDouble(result);
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
