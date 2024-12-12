//������ - �ɼ����� - 4 - �����¼
//ʱ������	1000ms	�ռ�����	256MB
//
//Ϊ�˽������и��õ����飬ѧУ�����޽���һ���µĴ����ã�����������ȫ��ѧ���ˡ���ʦ�Ǵ����ò��Գɼ��õ�ͬѧ��ǰ�棬������о�Ա��������˵���֮����Ҫ���ɼ��������򣬰��ճɼ��ߵ�����λ������������������������ʱ��������·���������ˢˢ�ؿ����㣬��һ�¾�֪����Ҫ����ʲô���ˡ�
//
//�����ڴ��Ľ������ڿ�ʼ�ˣ������ʣ��������յ���ѧ�о�������ô�����ģ���
//
//���š�����Ҫ�Ӻܾ���ǰ˵���ˡ�����ָ��һ������Թ��£�
//
//��������Ҫ���ļ��ж�ȡ����ѧ������Ϣ���ļ������� ������� �鿴�����غ�ʹ�����·�� student.txt ���㱾�ص��ԡ�
//
//ÿ������ļ���ȡ��һ����Ϣ�󣬾�����һ����������ѧ������Ϣ������ʹ����ѧ����Ϣ�γ�һ����������ȡѧ��˳�������β�������ɡ�
//
//Ϊ��ֹ��������޶ȣ����ⲻҪ���ȡ����������Ļ��
//
//����Ϣ��ȡ��ɣ��������������򣬰��ɼ��ɸ�������������������������������е�ѧ����Ϣ��
//
//ע�⣺
//
//����ѡ ������ - �ɼ����� - 1 / 2 �е�һ���ļ���ȡ / ��̬�ڴ����뷽ʽ��������ع��ܷ�װΪ���� read()���ڱ����е���ʹ�ã�������ƺ����ṹ��
//�ɼ�Ϊ��һ˳���ɸ������������ɼ���ͬ������ѧ��Ϊ�ڶ�˳���ɵ���������
//���ⲻ��Ҫ���ǷǷ����롣
//���ǲ�����ʹ��һЩ�⺯������ӵ�е������㷨���������ǹ�������ʵ����������
//��������˵��
//����û�б�׼�������ݣ��������ļ��鿴�������ݡ�
//�ļ��ڵ�һ�и���ѧ������ m��
//������ m �У��� ѧ�� ���� �ɼ� ��ɣ�ѧ��Ϊ 1810000 ��ʼ��˳�����ͣ�����Ϊ 10 ���ַ����µ����ģ��ɼ�Ϊ 100 ���ڵ����͡�
//�������ݱ�֤�Ϸ��������в鿴��
//�����ʽ˵��
//Ӧ���ٰ�������ѧ�����ݳɼ����������� ѧ�ţ��������ɼ���
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
//�����ֱ��� Warning���� 1 �֣������ַǷ���䣬��system("pause")��goto�ȣ��� 2 ��
//�����ַ������˳�(Runtime Error)�������Ե�������۷�
//���˹����� �����ִ���ʹ�ú���֪ʶ�㣬������۷�
//���˹����� ��������д���淶������ȼ���(�����ȡ�����淶��û�а��վ������д��)��������۷�
//���˹����� ��������ĿҪ����Ҫ���õݹ���ɶ�û��ʹ�á�û�д�����������ȣ���������۷�
//���˹����� ��̬������ڴ治�ͷţ��� 2 ��
//���˹����� �� read() �������� 3 ��
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
void bubbleSort(struct student* head);
void freeList(struct student*& head);
void read(struct student*& head);

int main() {
    // ��������ͷ�ڵ�
    struct student* head = nullptr;

    read(head);


    int a, b, c, d, e;//�� �� �� ���� ������ ����
    a = b = c = d = e = 0;
    bubbleSort(head);



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
void bubbleSort(struct student* head) {
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