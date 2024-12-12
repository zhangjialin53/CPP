//�ļ� - 5 - �绰��С����
//ʱ������	1000ms	�ռ�����	256MB
//
//���������Ҫ�쵼��
//
//ÿһ�����������ļ���
//
//������СС�ľ�������
//
//����������ǰ��
//
//���ͷ��������
//
//��������һ��ֱ����
//
//��һ�� ����Ŀ��㼯
//
//��֪�� �㲻���ٳ�Ĭ��ȥ
//
//��� �㱻������������Ȩ��
//
//��Ҫͨ��������ǰ��λ���֣��ҵ������İ��������ڵ� 11 λ������
//
//����һ��
//
//TO - DO
//�绰���� �������
//
//�����д���򣬴ӵ绰���а��ж�����Ϣ����װ���� valid() ���м���ȡ������Ϣ�Ƿ�Ϊ�绰���롣
//
//����ǰ��λ���룬�㽫���ļ����ҵ�ǰ��λ������ͬ�ĺ���������һ�
//
//���磺�ļ����� 13811111111 �� 13822222222 ���� 138 ��ͷ�ĵ绰���룬��Ҫ��� 13822222222
//
//�绰���뱣֤����λ��һ�У����� 1.554513899999999 ���� 138 ��ͷ�ĵ绰���롣
//
//ע�⣺
//
//�����·�� messy.content �д��ļ���
//��ز������װ�ɺ�����
//��������������ޣ����Ǳ���ʹ���ַ��������󡣱�������ʹ�� std::string��
//�������ݼ��ǳ����������һ��ķ�ʽ���в��ԵĻ����Է�������ʱ����볬ʱ�ǳ�����������Ӧ�ÿ���һЩ�����Ż���Ķ�ȡ�ٶȣ�����ܿ��ܻ���ΪһЩ�������³�ʱ���޷�ͨ�����Ե㡣
//
//��������˵��
//������Ҫ���Ǵ������룬�����㲻��Ҫ���������ʾ��������˵����Ϸ���Ϣ���ɡ�
//�ļ������в����У���ͨ�� eof() �ж��Ƿ������β��ÿ���������Ͳ�����
//����Ϸ������ݽ�Ϊ 11λ(10���Ƴ���)���ͣ�ǰ��λ�ַ��Ϸ���Χ�� 13 - 19 (���Ϸ������� 13000000000~19999999999)��
//ֵ��ע����ǣ�����Ϸ����ݳ����� int32 �ܱ�ʾ�ķ�Χ�������������Ҫ���Ǳ���������ͻ���������������͡�
//�������ݿ����г�����Χ������ / ������ / �ɴ�ӡ ASCII �ַ�(ASCII33 - ASCII126)������û�������Ƿ����룬����Ҫ�ڳ�������ϸ������μ�����롣
//�ļ���������Ϊ����ַ���������������ģ���Ҫע��������ı���Ϊ GBK��
//�����ʽ˵��
//���Ӧ���ٰ���һ���������������ѯ���ĵ绰���롣
//Ӧ�������Ի������
//����
//������ʹ����δ���ڹ��ĺ����γ��е�֪ʶ��
//�������������Ӧ��������ʾ�������ʾ
//�����дӦ���Ͼ���͵���д��ʽ
//������ʹ�� goto
//����ʱ�� 1 ��
//����ʹ���ڴ� 128MB
//������� 2048 ���ַ�
//���ֱ�׼
//���˹����� �����ִ���ʹ�ú���֪ʶ�㣬������۷�
//���˹����� ��������д���淶������ȼ���(�����ȡ�����淶��û�а��վ������д��)��������۷�
//���˹����� ��������ĿҪ����Ҫ���õݹ���ɶ�û��ʹ�á�û�д�����������ȣ���������۷�
//���˹����� û�õ��ַ��������󣬿� 2 ��
//ֱ������𰸶��ǳ������н���ģ�0 ��
//��Ϯ����ߣ�0 ��
//��������
//����1 :
//138
//13888888888
//����2 :
//	132
//	13243840747

#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;

// ����һ���ṹ�����洢�绰����
struct PhoneNumber {
    char prefix[4]; // �洢�绰����ǰ׺
    unsigned long long number; // ʹ���޷��ų����ʹ洢�绰����
};

// ��������
bool valid(const char* str);
void readPhoneNumber(ifstream& file, PhoneNumber& phone);
unsigned long long findMaxNumberWithPrefix(ifstream& file, const char* prefix);

// ������
int main() {
    ifstream file("messy.content");
    if (!file.is_open()) {
        cerr << "�޷����ļ�messy.content����ȷ���ļ�������·����ȷ��" << endl;
        return 1;
    }

    char prefix[4];
    cout << "������Ҫ���ҵĵ绰����ǰ��λ��" << endl;
    cin >> prefix; // ��ȡ�û������ǰ׺

    unsigned long long maxNumber = findMaxNumberWithPrefix(file, prefix);
    if (maxNumber != 0) {
        cout << "�ҵ������绰����Ϊ: " << prefix << maxNumber << endl;
    }
    else {
        cout << "δ�ҵ����������ĵ绰���롣" << endl;
    }

    file.close(); // �ر��ļ�
    return 0;
}

// ��������
bool valid(const char* str) {
    // ���ǰ11���ַ��Ƿ�������
    if (strlen(str) < 11) {
        return false;
    }
    for (int i = 0; i < 11; ++i) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    // ����12���ַ��Ƿ�Ϊ���з����ַ���������
    return str[11] == '\n' || str[11] == '\0';
}

void readPhoneNumber(ifstream& file, PhoneNumber& phone) {
    char buffer[128]; // ���ӻ�������С������Ӧ��������
    file.getline(buffer, 128); // ��ȡһ��
    if (file.eof()) {
        phone.number = 0;
        return;
    }
    if (valid(buffer)) { // ����Ƿ���Ч
        strncpy_s(phone.prefix, buffer, 3);
        phone.prefix[3] = '\0'; // ȷ��ǰ׺�ַ����� null ����
        phone.number = stoull(buffer, nullptr, 10); // �����绰����
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