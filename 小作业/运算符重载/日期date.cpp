//��������� - 3 - ������ʾ�������棩
//ʱ������	1000ms	�ռ�����	512MB
//
//��Ŀ����
//˫ʮһ����Ҳ������������ڡ�����֪�����ڵ����Ƿ��ǹ���أ�
//
//�����Ҳû�й�ϵ���������ǻ�Ϊ���ṩһ��Լ�� Date �Ļ��ᣡ
//
//��ʵ������� Date �ࡣ
//
//ĳ�����ˣ�˭˵������õģ������̫���ˣ�
//
//TODO
//���дһ�����򣬽��������յ����룬�����Ӧ��Ҫ�����ݡ�
//
//��Ϊ�����棬����Ҫ����ʵ�ֵ����ݴ����У�
//
//ʹ�� year, month �� day ���������ࡣ
//
//ʹ�� �ӹ�ԪԪ�꣨0001�꣩1��1�տ�ʼ������ ��ʼ�����࣬ע����Ҫ�������ꡣ
//
//�ӱ�׼�������ʽ��������ڣ�YYYY - MM - DD���� 2000 - 01 - 01 ����
//
//ʵ�� Date �ൽ int ���͵�ת������ת��Ϊ�ӹ�ԪԪ�꣨0001�꣩1��1�տ�ʼ��������
//
//ʵ������ Date ��ļ��������Ϊǰһ�����ںͺ�һ�����ڵ�����֮��� 2024 - 10 - 30 - 2024 - 10 - 31 = -1����
//
//�в����֮���ο������ܺͲ���������
//
//���ⲿ�ִ����Ѿ�Ϊ��д�ã���ֻ��Ҫ��ֻ����TODO���н��б�̡�
//
//���е����ݲ�������ġ���̽����󣬲�Ҫɾ��TODO�������ע�͡�
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
//	Date(int days); // �ӹ�ԪԪ�꣨0001�꣩1��1�տ�ʼ�������������ǹ�ԪԪ��֮�������
//
//	// ע�������ʽ����ʽΪ"yyyy-mm-dd"����"2000-01-01"��λ�������Ҫ��0
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
//	// ���Թ��캯��
//	int year, month, day;
//	cout << "������d1�����գ�" << endl;
//	cin >> year >> month >> day;
//	Date d1(year, month, day);
//
//	int days;
//	cout << "������d2������" << endl;
//	cin >> days;
//	Date d2(days);
//
//	cout << "d1����Ϊ��" << endl;
//	cout << d1 << endl;
//	cout << "d2����Ϊ��" << endl;
//	cout << d2 << endl;
//
//	// ��������ת�����������
//	cout << "d1ת��Ϊ����Ϊ��" << endl;
//	cout << int(d1) << endl;
//	cout << "d2ת��Ϊ����Ϊ��" << endl;
//	cout << int(d2) << endl;
//
//	// ���Լ������������
//	cout << "d1��d2�������Ϊ��" << endl;
//	cout << d1 - d2 << endl;
//
//	return 0;
//}
//����ҵʱ���ύ�����Ĵ��롣
//
//���������ʽ˵��
//�����ʽ˵��
//�����ʽ�������ܣ��������е����ڹ��죬��ݾ���
//(
//	0
//	,
//	3000
//]
//��
//����Ҫ���ǷǷ����롣
//�����ʽ˵��
//�����Ӧ��Ҫ�����ݡ�
//��������
//������������ʡ������ʾ�
//
//����һ
//���룺
//
//1024 10 24
//373940
//�����
//
//d1����Ϊ��
//1024 - 10 - 24
//d2����Ϊ��
//1024 - 10 - 24
//d1ת��Ϊ����Ϊ��
//373940
//d2ת��Ϊ����Ϊ��
//373940
//d1��d2�������Ϊ��
//0
//������
//���룺
//
//1999 12 31
//654321
//�����
//
//d1����Ϊ��
//1999 - 12 - 31
//d2����Ϊ��
//1792 - 06 - 20
//d1ת��Ϊ����Ϊ��
//730119
//d2ת��Ϊ����Ϊ��
//654321
//d1��d2�������Ϊ��
//75798
//������
//���룺
//
//0001 01 01
//727374
//�����
//
//d1����Ϊ��
//0001 - 01 - 01
//d2����Ϊ��
//1992 - 06 - 25
//d1ת��Ϊ����Ϊ��
//1
//d2ת��Ϊ����Ϊ��
//727374
//d1��d2�������Ϊ��
//- 727373


#include <iostream>
using namespace std;

class Date
{
private:
    int year, month, day;

public:
    Date(int y, int m, int d);
    Date(int days); // �ӹ�ԪԪ�꣨0001�꣩1��1�տ�ʼ�������������ǹ�ԪԪ��֮�������

    // ע�������ʽ����ʽΪ"yyyy-mm-dd"����"2000-01-01"��λ�������Ҫ��0
    /****************** TODO ******************/
     // �ж��Ƿ�Ϊ����
    bool isLeapYear(int y) const
    {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    // ����ӹ�ԪԪ��1��1�յ��������ڵ�������
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

    // ��ȡĳ���µ�����
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

    // ����������������
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

    // ������������
    friend ostream& operator<<(ostream& out, const Date& d)
    {
        char buffer[11]; // �㹻��Ļ��������洢��ʽ���������ַ���
        sprintf_s(buffer, "%04d-%02d-%02d", d.year, d.month, d.day);
        out << buffer;
        return out;
    }

    // ��������ת�������
    operator int() const
    {
        return daysFromYear1(year, month, day);
    }

    // ���ؼ��������
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
    // ���Թ��캯��
    int year, month, day;
    cout << "������d1�����գ�" << endl;
    cin >> year >> month >> day;
    Date d1(year, month, day);

    int days;
    cout << "������d2������" << endl;
    cin >> days;
    Date d2(days);

    cout << "d1����Ϊ��" << endl;
    cout << d1 << endl;
    cout << "d2����Ϊ��" << endl;
    cout << d2 << endl;

    // ��������ת�����������
    cout << "d1ת��Ϊ����Ϊ��" << endl;
    cout << int(d1) << endl;
    cout << "d2ת��Ϊ����Ϊ��" << endl;
    cout << int(d2) << endl;

    // ���Լ������������
    cout << "d1��d2�������Ϊ��" << endl;
    cout << d1 - d2 << endl;

    return 0;
}