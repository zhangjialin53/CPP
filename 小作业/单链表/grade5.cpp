//������ - �ɼ����� - 5 - ���Ҽ�¼
//ʱ������	1000ms	�ռ�����	256MB
//
//�����������յڡ�
//
//202X�꣬�Ѷ������ģ����д��������������ˮ�������չ��������д������ߵĽ���������ة�����ϣ��Ե������ΰ��ͦ�Ρ�������ϵĴ���Ļ���ڲ�����������š�
//
//�����գ�֪����ҵMomo���Ŵ�ʼ�ˣ����³��ɽ㷢�ĳƣ�������ȥMomo���Ŷ��³���ְ�񣬵���δ͸¶�������š�Momo���ţ�ĳĳ���ţ���ҵ����һ�����ļ��ţ��ɽ�Ĵ�ְ������һ�����ֺŴ��漴�������Ļ����
//
//��ة�����ڣ�Momo�����ܲ���
//
//���ɽ㣬����ľ������𣿴�ȥ���³���ְ��ȥ������ѧ�о��������������ӵ��ʵ���
//
//���š���һ��Ů�˻ش����������Momo���ŵĶ��³���ҵ��߳����Ƶ�������ɽ㡣�ɽ㻺��վ������������˵��������Щ�����Ҿ���ҵҵ���Ѽ��������������ˮƽ�����ɽ��˵��������ش�����ȥ�������������ڷ��֣������ϻ��и�ֵ�������¡����ɽ�ͣ������������¥�µĳ�ˮ����������˵�����������Ҿ����������ķ����ټ���·�˲ţ�����һ����ѧ�о�������
//
//������˵�ͷ��
//
//����������֮ǰ������һ������Ҫ��á��ɽ�ͻȻת����������˵����
//
//��ʲô�£��������ʵ���
//
//�ɽ�Ц��Ц��˵����
//
//��������Ҫ���ļ��ж�ȡ����ѧ������Ϣ���ļ������� ������� �鿴�����غ�ʹ�����·�� student.txt ���㱾�ص��ԡ�
//
//ÿ������ļ���ȡ��һ����Ϣ�󣬾�����һ����������ѧ������Ϣ������ʹ����ѧ����Ϣ�γ�һ����������ȡѧ��˳�������β�������ɡ�
//
//Ϊ��ֹ��������޶ȣ����ⲻҪ���ȡ����������Ļ��
//
//����Ϣ��ȡ��ɣ����ñ�׼������ cin ����Ҫ��ѯ��ѧ��ѧ�ţ��˹���֤����Ϸ��Լ��ɣ����������а���ѧ�Ž��в��Ҳ����ҵ���ѧ����Ϣ�����������ʽ��ο����Ե㣬��δ��ѯ�����������ʾ������������ʾ��������ơ�
//
//ע�⣺
//
//����ѡ ������ - �ɼ����� - 1 / 2 �е�һ���ļ���ȡ / ��̬�ڴ����뷽ʽ��������ع��ܷ�װΪ���� read()���ڱ����е���ʹ�ã�������ƺ����ṹ��
//����Ҫ��ѭ����ȡ���룬��ÿ��ȡ��һ��ѧ�ţ��ٶ�ȡһ���Ƿ������ָ��(�涨����ָ��Ϊ y���˳�ָ��Ϊ n)��С����Ϊ����ܻ���Ҫ�õ�������ѭ����ȡ�ṹ������д��һ�β�ȱ��ȫ�ĳ���������ʵ����в�ȫ��
//bool isContinue()
//{
//    std::cout << "�Ƿ������(y/n): \n";
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
//        // �����ѯѭ��
//        int query;
//        std::cin >> query;
//        /* ִ�в�ѯ */
//        if (!isContinue())
//        {
//            break; // �����յ�����Ҫ���������˳�ѭ��
//        }
//    }
//
//    return 0;
//}
//���ⲻ��Ҫ���ǷǷ����롣
//��������˵��
//�����ļ������������ǰ����Ŀ����׼����ÿ�����Ե㽫�в������ȵ����룬������ n ������
//���������������е����룬ÿ�а��� 2 �����ݡ�
//��һ������Ϊ ���ͣ����ݷ�Χ - 2147483648 ~2147483647�������㽫Ҫ��ѯ��ѧ�š�
//�ڶ�������Ϊ �ַ�������Ϊ 'y' �� 'n'�������Ƿ������ѯ��
//�����ʽ˵��
//��ѧ�Ŵ��ڣ�������ٰ�����ѧ�ŵ� ѧ�š��������ɼ���
//���Ӧ�ÿ������Ի���ʾ��
//����
//������ʹ����δ���ڹ��ĺ����γ��е�֪ʶ��
//�������������Ӧ��������ʾ�������ʾ
//�����дӦ���Ͼ���͵���д��ʽ
//������ʹ�� goto
//����ȷҪ���⣬������ʹ�� C++ �� std::string ��
//���������δ��ѯ�������Ϊ : �����ڣ���ȷ�������ڵ�ѧ�������ϴ�����Ϣ
//����ʱ�� 1 ��
//����ʹ���ڴ� 128MB
//������� 10240 ���ַ�
//���ֱ�׼
//���������гɹ������� 5 �ֻ�����
//�����ֱ��� Warning���� 1 �֣������ַǷ���䣬�� system("pause") �� goto �ȣ��� 2 ��
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
bool isContinue();

int main() {

    /* �������ȡ�ļ� */
    // ��������ͷ�ڵ�
    struct student* head = nullptr;

    read(head);
    cout << "������Ҫ���ҵ�ѧ��\n";
    //bubbleSort(head);
    while (1)
    {
        // �����ѯѭ��
        int query;
        cin >> query;

        /* ִ�в�ѯ */
        bool found = 0;
        struct student* current = head;
        while (current != nullptr) {
            if (query == current->no) {
                cout << "��ͬѧ��ϢΪ�� ѧ��: " << current->no << " ����: " << current->name << " �ɼ�: " << current->score << endl;
                // cout << "ѧ��: " << current->no << " ����: " << current->name << " �ɼ�: " << current->score << endl;

                found = 1;
            }
            current = current->next;
        }
        if (found == 0) {
            //cout << "��Ǹ���������ѧ�Ų��ڱ��༶�ڡ�\n";
            cout << "������\n";
        }
        if (!isContinue())
        {
            break; // �����յ�����Ҫ���������˳�ѭ��
        }
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


