//������ - �ɼ����� - 3 - ͳ�Ƽ�¼
//ʱ������	1000ms	�ռ�����	256MB
//
//��������˳����������ѧ�����ύ���ڶ������У����ƶ���ҲҪ��ѧ����ӱ�������������˻ƶ����������ѧˮ׼���˺���ѧ�������ڴ�Ҷ���������Ļ������к�����ҵؿ�ʼ�˳ﱸ��
//
//�����յ���ѧ�о����������һ��֪������ѧ�о������ƶ�����Ȼ����Ź���λ��ᡣ���ǷѾ���˼���������뵽�о�����ѧУ��������
//
//Ϊ�˸��õ�չ��ѧУ����ѧ��ò��ѧУ��ѧ����������ѧ���ԣ�ϣ��������һ��ѧ������ѧˮƽ��Ҳϣ��ͬѧ�����ȶ԰����յ��г������˽⡣��ݲ���������ڵ������ֵ���Ŀ�����п�������ʦϣ�����������ε�ѧ������ȥ�μ���������������Ҫ��ͳ��һ�¸��������ε����������Ϊ��һ�α��ֳ�ɫ������ʦ�����Ƽ��㸺��������������һ���ֳе���������Ρ�
//
//��������Ҫ���ļ��ж�ȡ����ѧ������Ϣ���ļ������� ������� �鿴�����غ�ʹ�����·�� student.txt ���㱾�ص��ԡ�
//
//ÿ������ļ���ȡ��һ����Ϣ�󣬾�����һ����������ѧ������Ϣ������ʹ����ѧ����Ϣ�γ�һ����������ȡѧ��˳�������β�������ɡ�
//
//Ϊ��ֹ��������޶ȣ����ⲻҪ���ȡ����������Ļ��
//
//����Ϣ��ȡ��ɣ�����������ͳ�ƣ����ɼ����зֶκ������֮�ͽ�����������������ʽ������Ե㣬��ȷ�������Ϣ�����ؼ�����Ҫ����Ϣ��
//
//ע�⣺
//
//����ѡ ������ - �ɼ����� - 1 / 2 �е�һ���ļ���ȡ / ��̬�ڴ����뷽ʽ��������ع��ܷ�װΪ���� read()���ڱ����е���ʹ�ã�������ƺ����ṹ��
//�����ι涨���� : ��[90, 100], ��[80, 90), ��[70, 80), ����[60, 70), ������[0, 60)��
//���ⲻ��Ҫ���ǷǷ����롣
//��������˵��
//����û�б�׼�������ݣ��������ļ��鿴�������ݡ�
//�ļ��ڵ�һ�и���ѧ������ m��
//������ m �У���ѧ�� ���� �ɼ���ɣ�ѧ��Ϊ 1810000 ��ʼ��˳�����ͣ�����Ϊ 10 ���ַ����µ����ģ��ɼ�Ϊ 100 ���ڵ����͡�
//�������ݱ�֤�Ϸ��������в鿴��
//�����ʽ˵��
//Ӧ���ٰ�������ѧ���� �š������С����񡢲�����  ������ͳ�ơ�
//���Ӧ�ÿ������Ի���ʾ��
//����
//������ʹ����δ���ڹ��ĺ����γ��е�֪ʶ��
//�������������Ӧ��������ʾ�������ʾ
//�����дӦ���Ͼ���͵���д��ʽ
//������ʹ�� goto
//����ȷҪ���⣬������ʹ�� C++ �� std::string ��
//����ʱ�� 1 ��
//����ʹ���ڴ� 128MB
//������� 10240 ���ַ�
//���ֱ�׼
//���������гɹ������� 5 �ֻ�����
//�����ֱ��� Warning���� 1 �֣������ַǷ���䣬��system("pause") �� goto�ȣ��� 2 ��
//�����ַ������˳�(Runtime Error)�������Ե�������۷�
//���˹����� �����ִ���ʹ�ú���֪ʶ�㣬������۷�
//���˹����� ��������д���淶������ȼ���(�����ȡ�����淶��û�а��վ������д��)��������۷�
//���˹����� ��������ĿҪ����Ҫ���õݹ���ɶ�û��ʹ�á�û�д�����������ȣ���������۷�
//���˹����� ��̬������ڴ治�ͷţ��� 2 ��
//���˹����� �� read() �������� 3 ��
//ֱ������𰸶��ǳ������н���ģ�0 ��
//��Ϯ����ߣ�0 ��
//�������
//ͳ����Ϣ���£��� : 15��  �� : 4��  �� : 6��  ���� : 6��  ������ : 21��


#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>

#include <thread>
#include <chrono>
//�����ȴ�����file   (�ð� ��ʱ����������û���õ�)


using namespace std;

//����vs������ʾ�Ѷ�ȡ�ĸĳ���fscanf_s����fileҲ�ĳ���fopen_s


struct student {
    int no;                // ѧ��
    char name[20];         // ����
    int score;             // �ɼ�
    struct student* next;  // ��һ���
    /*! �������޸������ṹ !*/
};
//��ེ��֪���� ���޸ľ�����;


void addStudent(struct student*& head, int no, const char* name, int score);
void printList(struct student* head, int& a, int& b, int& c, int& d, int& e);
void freeList(struct student*& head);
void read(struct student*& head);

int main() {
    // ��������ͷ�ڵ�
    struct student* head = nullptr;

    read(head);


    int a, b, c, d, e;//�� �� �� ���� ������ ����
    a = b = c = d = e = 0;
    printList(head, a, b, c, d, e);



    // �ͷ������ڴ�
    freeList(head);
    return 0;
}

void read(struct student*& head) {
    // ���·��
    const char* filePath = "student.txt";

    // ���ļ�  ��Ϊ��fstream
    ifstream file(filePath);
    if (!file.is_open()) {
        cerr << "�޷����ļ�" << endl;
        //return 1;
        exit(0);
    }

    // ��ȡ��һ������ѧ������
    int total;
    file >> total;
    if (file.fail()) {
        cerr << "��ȡѧ������ʧ��" << endl;
        file.close();
        //return 1;
        exit(0);
    }
    cout << "ͳ�ƽ�����£�\n";
    cout << "ѧ������: " << total << endl;

    // ��ȡ�ļ����ݲ���ӵ�������
    int studentID;
    char name[20];
    int score;   //�����������ֶ����壡��ռ��λ���ж� Ϊ��ӭ��fscanf_s��ʹ������

    while (file >> studentID >> name >> score) {
        addStudent(head, studentID, name, score);
    }//��Ҳ̫�����ˡ�����

    // �ر��ļ�
    //fclose(file);
    file.close();

}
// ���ѧ����Ϣ������
void addStudent(struct student*& head, int no, const char* name, int score) {
    //struct student* newNode = (struct student*)malloc(sizeof(struct student));
    struct student* newNode = new (nothrow) student;
    if (!newNode) {
        cerr << "�ڴ����ʧ��" << endl;
        exit(EXIT_FAILURE);
    }

    newNode->no = no;
    strncpy_s(newNode->name, sizeof(newNode->name), name, _TRUNCATE);
    newNode->name[sizeof(newNode->name) - 1] = '\0';  // ȷ���ַ����� null ��β
    newNode->score = score;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    }
    else {
        struct student* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// cout
void printList(struct student* head, int& a, int& b, int& c, int& d, int& e) {
    struct student* current = head;
    while (current != nullptr) {
        //cout << "ѧ��: " << current->no << " ����: " << current->name << " �ɼ�: " << current->score << endl;
        if (current->score >= 90 && current->score <= 100)
            ++a;
        else if (current->score >= 80 && current->score < 90)
            ++b;
        else if (current->score >= 70 && current->score < 80)
            ++c;
        else if (current->score >= 60 && current->score < 70)
            ++d;
        else if (current->score >= 0 && current->score < 60)
            ++e;
        current = current->next;
        //cout << "1" << endl;
    }
    cout << "�ţ�" << a << "�� ����" << b << "�� �У�" << c << "�� ����" << d << "�� ������" << e << "��" << endl;
}

// �������������������������������ͷ������ڴ�                          //you see �е��еķ���
void freeList(struct student*& head) {
    struct student* current = head;
    while (current != nullptr) {
        struct student* temp = current;
        current = current->next;
        //free(temp);
        delete temp;
    }


    head = nullptr;
}