//������ - �ɼ����� - 10 - ����ͷ��� - ɾ����¼
//ʱ������	1000ms	�ռ�����	256MB
//
//(��) ��ѧ���ı��Ķ�(���⹲3С�⣬15��)
//
//�Ķ���������֣����7��9�⡣
//
//
//����������ĳ��������Թ����У�������Ѱ�ң�
//
//
//���ж�С˵������ݺ�������ɫ�ķ������ͣ�����ȷ��һ���ǣ�3�֣�
//A.С˵��ڷ�Ϊ�����֣���һ���ֽ���С��Ͱ����������ʶ�ദ���ڶ����ֽ�����������Ϯ���������շ��룬���������
//
//B.С˵�����˶�У԰������ѧϰ�����ճ��ȵ��й���д����ȷ������˹���ѧ����ݣ�ҲΪС˵�����˸����еĹ��±�����
//
//C.С˵�ı�����ϸ�壬���������Ķ��׺���̬��дΪ����������������ȷ������ȴ�޼��еĹ�������������ɢ����С˵֮�С�
//
//D.С˵��д��С��Ͱ�������û���ߵ�һ����ź�����Ϊ��������Ǵ�������Ϳ������Ӱ����ӳ�����Ƕ��������ս��������Ρ�
//
//
//��������л��߾��ӵĺ��塣��6�֣�
//ֱ����У��ʱ��С��վ��ȫ����װ��ѧУ������ǰ������ʲô��û�䣬�ֺ���ʲô�����ˡ�
//
//
//������Ϊ�������г��ֵ��й��ļ�ѹ���������Ե����࣬Ӧ��ɾȥ��������Ƿ�Ӧ��ɾȥ�ļ�ѹ�������ݣ���������ɡ���6�֣�
//
//��������Ҫ���ļ��ж�ȡ����ѧ������Ϣ���ļ������� ������� �鿴�����غ�ʹ�����·�� student.txt ���㱾�ص��ԡ�
//
//ע�Ȿ���� ������ - �ɼ����� - 6 ������������Ҫ���½�һ����ͷ��㡣
//ÿ������ļ���ȡ��һ����Ϣ�󣬾�����һ����������ѧ������Ϣ������ʹ����ѧ����Ϣ�γ�һ����������ȡѧ��˳�������β�������ɡ�
//
//Ϊ��ֹ��������޶ȣ����ⲻҪ���ȡ����������Ļ��
//
//����Ϣ��ȡ��ɣ����ñ�׼������ cin ����Ҫɾ����ѧ��ѧ�ţ�����ѯ�����ͷŸý�㣬��δ��ѯ�����������ʾ������������ʾ��������ƣ������յ��˳� / ������ָ��ʱ��������е�������Ϣ��
//
//ע�⣺
//
//����Ҫ��Ϊ����ͷ��������
//����ѡ ������ - �ɼ����� - 1 / 2 �е�һ���ļ���ȡ / ��̬�ڴ����뷽ʽ��������ع��ܽ����޸ķ�װΪ���� read()���� ������ - �ɼ����� - 5 ����ز�ѯ���������޸ķ�װ�� searchbyID()���ڱ����е���ʹ�ã�������ƺ����ṹ��
//����Ҫ��ѭ����ȡ���룬��ÿ��ȡ��һ��ѧ�ţ��ٶ�ȡһ���Ƿ������ָ��(�涨����ָ��Ϊ y���˳�ָ��Ϊ n)��С����Ϊ����ܻ���Ҫ�õ�������ѭ����ȡ�ṹ������д��һ�β�ȱ��ȫ�ĳ���������ʵ����в�ȫ��
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
//        /* ִ�в�ѯ��ɾ�� */
//        if (!isContinue())
//        {
//            break; // �����յ�����Ҫ���������˳�ѭ��
//        }
//    }
//    /* �˳�ǰ��ӡ�������� */
//    return 0;
//}
//���ⲻ��Ҫ���ǷǷ����롣
//��������˵��
//�����ļ������������ǰ����Ŀ����׼����ÿ�����Ե㽫�в������ȵ����룬������ n ������
//���������������е����룬ÿ�а��� 2 �����ݡ�
//��һ������Ϊ ���ͣ����ݷ�Χ - 2147483648~2147483647�������㽫Ҫɾ����ѧ�š�
//�ڶ�������Ϊ �ַ�������Ϊ 'y' �� 'n'�������Ƿ������ѯ��
//�����ʽ˵��
//��ѧ�Ŵ��ڣ�ɾ��ʱ����Ҫ����κ���䡣
//�����յ� n ʱ��������ٰ���ʣ��ѧ���� ѧ�š��������ɼ���
//���Ӧ�ÿ������Ի���ʾ��
//����
//������ʹ����δ���ڹ��ĺ����γ��е�֪ʶ��
//�������������Ӧ��������ʾ�������ʾ
//�����дӦ���Ͼ���͵���д��ʽ
//������ʹ�� goto
//����ȷҪ���⣬������ʹ�� C++ �� std::string ��
//���������δ��ѯ����������Ϊ "������"
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
//���˹����� ��������ͷ��㣬�� 5 ��
//ֱ������𰸶��ǳ������н���ģ�0 ��
//��Ϯ����ߣ�0 ��


#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>

using namespace std;

struct student {
    int no;                // ѧ��
    char name[20];         // ����
    int score;             // �ɼ�
    struct student* next;  // ��һ���
};

void addStudent(struct student*& head, int no, const char* name, int score);
void freeList(struct student*& head);
void read(struct student*& head);
bool isContinue();
void searchbyID(int& query, struct student*& head, bool& if_exit);

int main() {
    /* �������ȡ�ļ� */
    // ������ڱ�������ͷ�ڵ�

    struct student* head = new student{ 0, "", 0, nullptr }; // ͷ�ڵ�

    read(head);
    cout << "������Ҫ���ҵ�ѧ��\n";
    //bubbleSort(head);
    bool if_exit = 0;
    while (1) {
        // �����ѯѭ��
        int query = 0;
        cin >> query;
        searchbyID(query, head, if_exit);
        if (if_exit) {
            break;
        }
    }

    struct student* current = head->next;
    while (current != nullptr) {
        cout << "ѧ��: " << current->no << " ����: " << current->name << " �ɼ�: " << current->score << endl;
        current = current->next;
    }

    // �ͷ�
    freeList(head);
    return 0;
}

void read(struct student*& head) {
    // ���·��
    const char* filePath = "student.txt";

    // ���ļ�
    ifstream file(filePath);
    if (!file.is_open()) {
        cerr << "�޷����ļ�" << endl;
        exit(0);
    }

    // ��ȡ��һ������ѧ������
    int total;
    file >> total;
    if (file.fail()) {
        cerr << "��ȡѧ������ʧ��" << endl;
        file.close();
        exit(0);
    }

    // ��ȡ�ļ����ݲ���ӵ�������
    int studentID;
    char name[20];
    int score;

    while (file >> studentID >> name >> score) {
        addStudent(head, studentID, name, score);
    }

    // �ر��ļ�
    file.close();
}

// ���ѧ����Ϣ������
void addStudent(struct student*& head, int no, const char* name, int score) {
    struct student* newNode = new (nothrow) student;
    if (!newNode) {
        cerr << "�ڴ����ʧ��" << endl;
        exit(EXIT_FAILURE);
    }

    newNode->no = no;
    strncpy_s(newNode->name, sizeof(newNode->name), name, _TRUNCATE);
    newNode->name[sizeof(newNode->name) - 1] = '\0';
    newNode->score = score;
    newNode->next = nullptr;

    if (head->next == nullptr) {
        // ����Ϊ�յ����
        head->next = newNode;
    }
    else {
        // Ѱ����������һ���ڵ�
        struct student* current = head->next;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// �ͷ������ڴ�
void freeList(struct student*& head) {
    struct student* current = head->next;
    while (current != nullptr) {
        struct student* temp = current;
        current = current->next;
        delete temp;
    }
    delete head; // �ͷ�ͷ���
    head = nullptr;
}

bool isContinue() {
    cout << "�Ƿ������(y/n): \n";
    char tmp;
    cin >> tmp;
    if (tmp == 'Y' || tmp == 'y') {
        return true;
    }
    return false;
}

void searchbyID(int& query, struct student*& head, bool& if_exit) {
    /* ִ�в�ѯ */
    bool found = 0;
    struct student* current = head->next;
    struct student* prev = head; // previous one

    while (current != nullptr && !found) {
        if (query == current->no) {
            if (current == head->next) {
                // ���������ɾ������ͷ������ĵ�һ���ڵ�
                head->next = current->next;
                prev = current->next;
            }
            else {
                prev->next = current->next;
            }

            found = 1;
        }
        if (found) {
            cout << "ɾ���ɹ�\n";
        }
        else {
            prev = current;
        }
        current = current->next;
    }
    if (!found) {
        cout << "������\n";
    }
    if (!isContinue()) {
        if_exit = 1;
        return;
    }
}