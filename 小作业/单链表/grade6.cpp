////������ - �ɼ����� - 6 - ɾ����¼
////ʱ������	1000ms	�ռ�����	256MB
////
////�о��������Ĺ��������汾������Ҳ���������ġ������յڴ���������һƪ���±��ǽ�ѡ�����С���˵�������о�������һλ�о�Ա����Щ��д�ɵģ��������Ѻ����ҵ�ԭ������ʵ��Ҳ���Կ�����
////
////�����յ��о�Ա�Ǹ�������������ĿǰΪֹ���о�Ա�Ѿ��������������£�ÿ�����µ����������ͬ��Ҳ���д�����·�����������������ѧ�о��������о��������³���һ���ϸ��ܡ�
////
////����һ���ȽϿ��ŵ�˵���ǣ�ĳһ������ʱ���о������������������������⣺
////
////����ѧ�����ɣ���Ϣ�Դ�֮��������ȥĳĳ���ʺ���Ϊ֮��
////
////��������Ե��ֿڣ����������ǳ���������ҵķ����������ģ������Ҳ��Ӱ������ɡ�
////
////��������Ҫ���ļ��ж�ȡ����ѧ������Ϣ���ļ������� ������� �鿴�����غ�ʹ�����·�� student.txt ���㱾�ص��ԡ�
////
////ÿ������ļ���ȡ��һ����Ϣ�󣬾�����һ����������ѧ������Ϣ������ʹ����ѧ����Ϣ�γ�һ����������ȡѧ��˳�������β�������ɡ�
////
////Ϊ��ֹ��������޶ȣ����ⲻҪ���ȡ����������Ļ��
////
////����Ϣ��ȡ��ɣ����ñ�׼������ cin ����Ҫɾ����ѧ��ѧ�ţ�����ѯ�����ͷŸý�㣬��δ��ѯ�����������ʾ������������ʾ��������ƣ������յ��˳� / ������ָ��ʱ��������е�������Ϣ��
////
////ע�⣺
////
////����ѡ ������ - �ɼ����� - 1 / 2 �е�һ���ļ���ȡ / ��̬�ڴ����뷽ʽ��������ع��ܷ�װΪ���� read()���� ������ - �ɼ����� - 5 ����ز�ѯ������װ�ɺ��� searchbyID()���ڱ����е���ʹ�ã�������ƺ����ṹ��
////����Ҫ��ѭ����ȡ���룬��ÿ��ȡ��һ��ѧ�ţ��ٶ�ȡһ���Ƿ������ָ��(�涨����ָ��Ϊ y���˳�ָ��Ϊ n)�������ṩһ�ξ���ѭ����ȡ�ṹ�ĳ���������ʵ����в�ȫ��Ҳ�����Լ���Ƴ����߼���
////bool isContinue()
////{
////    std::cout << "�Ƿ����?(y/n): \n";
////    char tmp;
////    std::cin >> tmp;
////    if (tmp == 'Y' || tmp == 'y')
////    {
////        return true;
////    }
////    return false;
////}
////
////int main()
////{
////    /* �������ȡ�ļ� */
////    // �����ȡ���
////    while (1)
////    {
////        /* ִ�в�ѯ��ɾ�� */
////        if (!isContinue())
////        {
////            break; // �����յ�����Ҫ���������˳�ѭ��
////        }
////    }
////    /* �˳�ǰ��ӡ�������� */
////    return 0;
////}
////���ⲻ��Ҫ���ǷǷ����롣
////��������˵��
////�����ļ������������ǰ����Ŀ����׼����ÿ�����Ե㽫�в������ȵ����룬������ n ������
////���������������е����룬ÿ�а��� 2 �����ݡ�
////��һ������Ϊ ���ͣ����ݷ�Χ - 2147483648~2147483647�������㽫Ҫɾ����ѧ�š�
////�ڶ�������Ϊ �ַ�������Ϊ 'y' �� 'n'�������Ƿ������ѯ��
////�����ʽ˵��
////��ѧ�Ŵ��ڣ�ɾ��ʱ����Ҫ����κ���䡣
////��ѧ�Ų����ڣ����Ӧ���ٰ������������б�������Ĵ�����䣬ע�⣬������������ǰ����Ŀ��̫һ����
////�����յ� n ʱ��������ٰ���ʣ��ѧ���� ѧ�š��������ɼ���
////���Ӧ�ÿ������Ի���ʾ��
////����
////������ʹ����δ���ڹ��ĺ����γ��е�֪ʶ��
////�������������Ӧ��������ʾ�������ʾ
////�����дӦ���Ͼ���͵���д��ʽ
////������ʹ�� goto
////����ȷҪ���⣬������ʹ�� C++ �� std::string ��
////���������δ��ѯ����������Ϊ "������"
////����ʱ�� 1 ��
////����ʹ���ڴ� 128MB
////������� 10240 ���ַ�
////���ֱ�׼
////���������гɹ������� 5 �ֻ�����
////�����ֱ��� Warning���� 1 �֣������ַǷ���䣬��system("pause")��goto�ȣ��� 2 ��
////�����ַ������˳�(Runtime Error)�������Ե�������۷�
////���˹����� �����ִ���ʹ�ú���֪ʶ�㣬������۷�
////���˹����� ��������д���淶������ȼ���(�����ȡ�����淶��û�а��վ������д��)��������۷�
////���˹����� ��������ĿҪ����Ҫ���õݹ���ɶ�û��ʹ�á�û�д�����������ȣ���������۷�
////���˹����� ��̬������ڴ治�ͷţ��� 2 ��
////���˹����� �� read() �� searchbyID() �������� 3 ��
////ֱ������𰸶��ǳ������н���ģ�0 ��
////��Ϯ����ߣ�0 ��

#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>

#include <thread>
#include <chrono>
//�����ȴ�����file   (�ð� ��ʱ����������û���õ�)


//�� �����̫�в��� ǰ�Է���ͬѧ������Ƕ����������
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
void freeList(struct student*& head);
void read(struct student*& head);
bool isContinue();
void searchbyID(int& query, struct student*& head, bool& if_exit);


int main() {

    /* �������ȡ�ļ� */
    // ��������ͷ�ڵ�
    struct student* head = nullptr;

    read(head);
    cout << "������Ҫ���ҵ�ѧ��\n";
    //bubbleSort(head);
    bool if_exit = 0;
    while (1)
    {
        // �����ѯѭ��
        int query = 0;
        cin >> query;
        searchbyID(query, head, if_exit);
        if (if_exit) {
            break;
        }
    }
    struct student* current = head;
    while (current != nullptr) {
        cout << "ѧ��: " << current->no << " ����: " << current->name << " �ɼ�: " << current->score << endl;
        current = current->next;
    }

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

bool isContinue()
{
    cout << "�Ƿ������(y/n): \n";
    char tmp;
    cin >> tmp;
    if (tmp == 'Y' || tmp == 'y')
    {
        return true;
    }
    return false;
}

void searchbyID(int& query, struct student*& head, bool& if_exit) {
    /* ִ�в�ѯ */
    bool found = 0;
    struct student* current = head;
    struct student* prev = head;//previous one

    while (current != nullptr && found == 0) {
        if (query == current->no) {
            //cout << "��ͬѧ��ϢΪ�� ѧ��: " << current->no << " ����: " << current->name << " �ɼ�: " << current->score << endl;
            // cout << "ѧ��: " << current->no << " ����: " << current->name << " �ɼ�: " << current->score << endl;

            //delete the student
            if (current == head) {
                //�������������������������
                head = current->next;
                prev = current->next;
            }
            else {
                prev->next = current->next;
            }

            found = 1;
        }
        if (1 == found) {
            cout << "ɾ���ɹ�\n";
        }
        else {
            prev = current;
        }
        current = current->next;
    }
    if (found == 0) {
        //cout << "��Ǹ���������ѧ�Ų��ڱ��༶�ڡ�\n";
        cout << "������\n";
    }
    if (!isContinue())
    {
        if_exit = 1;
        return;
    }
}


