//������ - �ɼ����� - 8 - ��Ӽ�¼
//ʱ������	1000ms	�ռ�����	256MB
//
//��������ѧ���ԡ�
//
//�Ķ�����Ĳ��ϣ�����Ҫ��д������6 * 0�֣�
//��ͬ�á��廪���ƶ�������־Ը����������ͬ����ָ�Ϻ�ˮƽ���ۺ���985���廪��ָ�������ӵľ���Top2���ƶ�����ָò�ƻ��У�������ѧˮƽ��ͨ���������ѧУ�����ڱ�ҵ�����ԣ�Ӧ�ô��ͬ�ÿ�ʼ��ͬ�õķ����߹��ˣ�����������ѧ�ϡ�һЩ��ҵ��������׷���廪�������Ӹ���Ͷ����ͬ�á�ͬ���ǻ������廪�����롣һ����˵����ͬ������ѧϰ���ſ��ܶ����廪����������ȥ���ƶ�������ѧҲ�ѵ÷�չ��
//
//���ϲ��϶������ľ���ʾ���塣���ϲ���дһƪ���£�̸̸��Ӧ�����д�����������⡣
//
//Ҫ��ѡ׼�Ƕȣ�ȷ�����⣬��ȷ���壬������⣻��Ҫ���������ó�Ϯ������й¶������Ϣ��������800�֡�
//
//��������Ҫ���ļ��ж�ȡ����ѧ������Ϣ���ļ������� ������� �鿴�����غ�ʹ�����·�� student.txt ���㱾�ص��ԡ�
//
//ÿ������ļ���ȡ��һ����Ϣ�󣬾�����һ����������ѧ������Ϣ������ʹ����ѧ����Ϣ�γ�һ����������ȡѧ��˳�������β�������ɡ�
//
//Ϊ��ֹ��������޶ȣ����ⲻҪ���ȡ����������Ļ��
//
//����Ϣ��ȡ��ɣ����ñ�׼������ cin ����Ҫ��ӵ�ѧ�ţ��˹���֤����Ϸ��Լ��ɣ�����ѧ�Ų����ڣ�����ӽ�㲢������ӵ������Ϣ����ѧ�Ŵ��ڣ��������ʾ������������ʾ��������ơ������յ��˳� / ������ָ��ʱ�������������е�������
//
//ע�⣺
//
//����ѡ ������ - �ɼ����� - 1 / 2 �е�һ���ļ���ȡ / ��̬�ڴ����뷽ʽ��������ع��ܷ�װΪ���� read()���� ������ - �ɼ����� - 4 �������������װ�� sort()���ڱ����е���ʹ�ã�������ƺ����ṹ��
//��������Ҫ��ͬ ������ - �ɼ����� - 4���ɼ�Ϊ��һ˳���ɸ������������ɼ���ͬ������ѧ��Ϊ�ڶ�˳���ɵ���������
//����Ҫ��ѭ����ȡ���룬��ÿ��ȡ��һ����Ϣ���ٶ�ȡһ���Ƿ������ָ��(�涨����ָ��Ϊ y���˳�ָ��Ϊ n)������С��֮ǰд��һ�γ���������ʵ����в�ȫ��
//bool isContinue()
//{
//    std::cout << "�Ƿ����?(y/n): \n";
//    char tmp;
//    std::cin >> tmp;
//    if (tmp == 'Y' || tmp == 'y')
//    {
//        return true;
//    }
//    return false;
//}
//
//int main()
//{
//    /* �������ȡ�ļ� */
//    // �����ȡ���
//    while (1)
//    {
//        /* ִ����� */
//        if (!isContinue())
//        {
//            break; // �����յ�����Ҫ���������˳�ѭ��
//        }
//    }
//    /* �˳�ǰ���򲢴�ӡ�������� */
//    return 0;
//}
//���ⲻ��Ҫ���ǷǷ����롣
//��������˵��
//�����ļ������������ǰ����Ŀ����׼����ÿ�����Ե㽫�в������ȵ����룬������ n ������
//���������������е����룬ÿ�а��� 2 / 4 �����ݡ�
//��һ������Ϊ ���ͣ����ݷ�Χ - 2147483648~2147483647�������㽫Ҫ��ӵ�ѧ�š�
//��ѧ�Ų����ڣ��ڶ�������Ϊ �ַ���������Ϊ���ģ����� 10 ���£�����Ҫ��ӵ�����ֵ��
//��ѧ�Ų����ڣ�����������Ϊ ���ͣ����ݷ�Χ 0~100������Ҫ��ӵĳɼ�ֵ��
//��ѧ�Ų����ڣ����ĸ�����Ϊ �ַ������������Ϊ�ڶ������ݣ�����Ϊ 'y' �� 'n'�������Ƿ������ѯ��
//�����ʽ˵��
//��ѧ�Ŵ��ڣ����Ӧ���ٰ������������б�������Ĵ�����䡣
//�޸���ɽ��յ� n ʱ�����Ӧ���ٰ�������ѧ�� ���ݳɼ����� ������ ѧ�š��������ɼ���
//���Ӧ�ÿ������Ի���ʾ��
//����
//������ʹ����δ���ڹ��ĺ����γ��е�֪ʶ��
//�������������Ӧ��������ʾ�������ʾ
//�����дӦ���Ͼ���͵���д��ʽ
//������ʹ�� goto
//����ȷҪ���⣬������ʹ�� C++ �� std::string ��
//���������δ��ѯ����������Ϊ "�Ѵ���"
//����ʱ�� 1 ��
//����ʹ���ڴ� 128MB
//������� 10240 ���ַ�
//���ֱ�׼
//���������гɹ������� 5 �ֻ�����
//�����ֱ��� Warning���� 1 �֣������ַǷ���䣬��system("pause")��goto�ȣ��� 2 ��
//�����ַ������˳�(Runtime Error)�������Ե�������۷�
//���˹����� �����ִ���ʹ�ú���֪ʶ�㣬������۷�
//���˹����� ��������д���淶������ȼ���(�����ȡ�����淶��û�а��վ������д��)��������۷�
//���˹����� ��������ĿҪ����Ҫ���õݹ���ɶ�û��ʹ�á�û�д�����������ȣ���������۷�
//���˹����� ��̬������ڴ治�ͷţ��� 2 ��
//���˹����� �� read() �� sort() �������� 3 ��
//ֱ������𰸶��ǳ������н���ģ�0 ��
//��Ϯ����ߣ�0 ��

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
void sort(struct student* head);
void freeList(struct student*& head);
void read(struct student*& head);
void additionally_add(struct student*& head, int no, const char* name, int score);
bool searchbyID(int& query, struct student*& head, struct student*& current);
bool isContinue()
{
    std::cout << "�Ƿ����?(y/n): \n";
    char tmp;
    std::cin >> tmp;
    if (tmp == 'Y' || tmp == 'y')
    {
        return true;
    }
    return false;
}
int main() {
    cout << "�����빦��Ϊ�������ѧ����Ϣ,�����ɴ�ӡ�����гɼ�\n";
    // ��������ͷ�ڵ�
    struct student* head = nullptr;
    struct student* current = nullptr;
    read(head);
    int num = 0, score = 0;
    char name[20];

    while (true) {
        /* ִ����� */
        cout << "������ѧ��\n";
        cin >> num;
        if (!searchbyID(num, head, current)) { // ���û���ҵ���ѧ��
            cout << "������������\n";
            cin >> name;
            cout << "��������ɼ�\n";
            cin >> score;
            // �����ѧ��
            additionally_add(head, num, name, score);
        }

        if (!isContinue()) {
            break; // �����յ�����Ҫ���������˳�ѭ��
        }
    }

    int a, b, c, d, e; // �� �� �� ���� ������ ����
    a = b = c = d = e = 0;
    sort(head);

    // �ͷ������ڴ�
    freeList(head);
    return 0;
}

bool searchbyID(int& query, struct student*& head, struct student*& current) {
    /* ִ�в�ѯ */
    bool found = false;
    current = head;
    while (current != nullptr) {
        if (query == current->no) {
            cout << "Ҫ�����ѧ���Ѵ���\n";
            return true;
        }
        current = current->next;
    }
    //cout << "������\n";
    return false;
}

void additionally_add(struct student*& head, int no, const char* name, int score) {
    addStudent(head, no, name, score);
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
void sort(struct student* head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    bool swapped;
    struct student* start = head;

    do {
        swapped = false;
        struct student* ptr1 = start;
        struct student* lPtr = nullptr;

        while (ptr1->next != lPtr) {
            if (ptr1->score < ptr1->next->score ||
                (ptr1->score == ptr1->next->score && ptr1->no > ptr1->next->no)) {
                swap(ptr1->score, ptr1->next->score);
                swap(ptr1->no, ptr1->next->no);
                swap(ptr1->name, ptr1->next->name);

                swapped = true;
            }
            ptr1 = ptr1->next;
        }
        lPtr = ptr1;
    } while (swapped);

    struct student* current = head;
    while (current != nullptr) {
        cout << "ѧ��: " << current->no << " ����: " << current->name << " �ɼ�: " << current->score << endl;
        current = current->next;
    }
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