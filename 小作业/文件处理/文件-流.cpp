//�ļ� - 1 - ��ʽ��� - ����Ա����
//ʱ������	1000ms	�ռ�����	256MB
//
//���ҡ����䡢�硣
//
//����һ��ȫ�µ����硢�ֻ���һ��ȫ�µ���Ϸ
//
//����������ֻ��һ��������
//
//���ڵ�������ң��ֻ������������
//
//������������ԴĪ���ڴˡ�
//
//��������ף�ֻ�д��ͷһ�ˡ�
//
//������һ�㣬�����紵����һ������
//
//���ڵ���
//
//�����ڵ���
//
//������䣬����ϲ��
//
//��������һ�������֣��м䱻һ���������ţ������������ĳ��أ�һ������
//
//�������������Ȩ�����޸�������磬�޸�����
//
//���Ƿ�Ը�����Щ��������� ��С�������
//
//TO - DO
//���������һ������С����Ҫ���ڶ������һ���˳��� q ��������ж���ĸ���������ʹ���ǵ�С������롣
//
//ע�⣺
//
//�������������ʽ����ʹ������Ա��������ʽ��
//3 λС���������ֱ�Ӷ��������㲹�㣬����Ҫ�������롣
//���ʱ��������С��������⣬���������С�������ռλ���������룬������ʽ�뿴���Ե�������
//��������˵��
//һ���в��������ݣ�ÿ����������Ϊ double(8 �ֽڸ�����)�����һ�����ַ� q ������
//ÿ�����ݷ�Χ - 1000000000.000000~1000000000.000000 (-1e9~1e9)����ȫ�����ָ���(e.g. 123456789.654321)���������ָ�������ʽ��
//���ⲻ��Ҫ���ǷǷ����롣
//�����ʽ˵��
//���������ݰ�С�������󣬱�����λС�������������룩�����
//�������ȫ��ƥ�䷽����Ҫ����������ȫ��������ͬ������������ʾ�����з����ո�ȡ�
//����
//������ʹ����δ���ڹ��ĺ����γ��е�֪ʶ��
//�������������Ӧ��������ʾ�������ʾ


#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

const int MAX_NUMBERS = 1000; // �����������

int main() {
    cout << "������һЩ����������q����:" << endl;

    double numbers[MAX_NUMBERS]; // �洢������������
    int count = 0; // ��ǰ���������
    long long max_int_width = 0; // ��¼��������ֵĿ�ȣ��������ţ�

    // ��ȡ���룬ֱ������'q'��ﵽ�������
    while (count < MAX_NUMBERS) {
        if (!(cin >> numbers[count])) {
            // ������벻��һ����Ч�ĸ���������ֹͣ����
            cin.clear(); // ��������־
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���Դ�������
            break;
        }

        // ������������ֵĿ��
        long long int_width = 0;
        double tmp = fabs(numbers[count]);
        if (numbers[count] < 0) {
            ++int_width; // ����ռһλ
        }
        while (tmp >= 10) {
            tmp /= 10;
            ++int_width;
        }
        max_int_width = max(max_int_width, int_width);

        count++; // ���Ӽ�����
        if (cin.peek() == 'q') { // �����һ���ַ��Ƿ���'q'
            cin.ignore(); // ����'q'
            break;
        }
    }

    // ���������ʽ
    cout << fixed << setprecision(3); // ���þ���Ϊ3λС��

    // �ض�С�����ĵ���λ��֮������֣���ȷ��С�������
    for (int i = 0; i < count; ++i) {
        // ��С�����ĵ���λ��֮��Ĳ��ֽض�
        double adjustedNumber = 0.0;
        if (numbers[i] > 0) {
            adjustedNumber = numbers[i] + 1e-10; // ����һ��С������ֹ������ʧ
        }
        else if (numbers[i] < 0) {
            adjustedNumber = numbers[i] - 1e-10; // ����һ��С������ֹ������ʧ
        }
        double integerPart = floor(fabs(adjustedNumber)); // ��ȡ��������
        double fractionalPart = fabs(adjustedNumber) - integerPart; // ��ȡС������
        fractionalPart = floor(fractionalPart * 1000) / 1000.0; // �ض�С������
        numbers[i] = (numbers[i] >= 0 ? integerPart + fractionalPart : -(integerPart + fractionalPart));

        // ���㵱ǰ���ֵ��������ֿ�ȣ��������ţ�
        long long current_int_width = 0;
        double tmp = fabs(numbers[i]);
        if (numbers[i] < 0) {
            ++current_int_width; // ����ռһλ
        }
        while (tmp >= 10) {
            tmp /= 10;
            ++current_int_width;
        }

        // ������֣�ȷ��С�������
        // 5 ��С�������λС���Ŀ��
        cout << setw(max_int_width + 5) << setfill(' ') << right << numbers[i] << endl;
    }

    cout << "------�������------" << endl;
    return 0;
}
