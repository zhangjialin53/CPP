//������ - �ɼ����� - 9 - ѧ���ɼ�����ϵͳ
//ʱ������	1000ms	�ռ�����	256MB
//
//�Ķ�����������ģ����1 - 3�⡣��10�֣�
//
//ȫ�޹ҿƣ����ⲻ����ѧ���ƣ����ڰ��á����ö��������ҿ�֮��Ҳ����Ի�����˻��ң��ʰ���Ү��Ի���������԰��߻�������ʧǿԮ�����ܶ��ꡣ��Ի�����ڰ���Ҳ�� ����ǩ��֮�⣬С��Ӧ��������ѧ����ѧ֮���ã�����ö����ߣ���ʵ�ٱ�������֮�������벻�������ߣ���ʵ��ٱ�����γ�֮��������ͬѧ֮���󻼣��̲��ڿ��ӡ�˼����ѧ������˪¶��ն�������ܽ�ߴ�֮���顣������֮����ϧ�����Ի����������ݽ档���ջ���ƣ����ջ�ʮ�ƣ�Ȼ���һϦ���ޡ����������������������ӡ�Ȼ����֮�����ޣ�����֮�����ᣬ��֮�ַ�����֮�������ʲ���������ʤ�������ӡ����ڹҿƣ������Ȼ�������ƣ����Ի��¿����̱�н�Ȼ�н���������𡣡����Ե�֮�� ����δ�����ã��ռ�����Ǩ�𣬺��գ������˶���������Ҳ�����Ѽȹң����಻���ӡ�����֮����ʼ��Զ�ԣ��Գ���ѧ���岻�������ǹ������޶۶���ң�˹ѧϰ֮ЧҲ��������Ⱦ��Ϊ�ƣ�ʼ�ٻ��ɡ��Գ���ս����ĩ�����Ŷ����������ͼ�������٣�������ȴ֮��������������������֣�ϧ���ѧ������Ҳ�������Դ���Ŀ��������֮�ʣ���ν������Σ��ѧ�ܶ��ң��ϲ����ѡ���ʹ���˸�ѧ��ƣ������������ˣ����ײ��У��������ڣ���ʤ��֮��������֮�����������ϣ���δ������ �غ����Ի���֮ʱѧ����֪֮ʶ��������֮���п���֮��Ŀ��������ϰ������ֳ�����ʳ֮��������Ҳ�����������֮�ƣ���Ϊ���Ի���֮��Ⱦ���հ��°ڣ������ڹҡ�Ϊѧ����ʹΪ����֮�����գ� ��ȫ���븨�޽�ѧ����������ڸ��ޣ������п��Բ�������֮֮�ơ���������֮�����¶���ȫ�޹ҿ�֮���£�������ȫ�����ӡ�
//
//����ȫ�ġ���0�֣�
//
//����ʲô˼����̸̸��������ĩ������ʲô��������0�֣�
//
//�������ı���⡣��10�֣�
//
//��������Ҫ���ļ��ж�ȡ����ѧ������Ϣ���ļ������� ������� �鿴�����غ�ʹ�����·�� student.txt ���㱾�ص��ԡ�
//
//����Ϊ�ۺ��⣬����Ҫ�� ������ - �ɼ����� - 1~8 ��������غ������з�װ��������������õ� GUI��
//
//ע�⣺
//
//�ֱ��ǰ����Ŀ���漰����ع��ܷ�װ�ɺ����ڴ����е���ʹ�ã�disp(), count(), sort(), searchbyID(), delbyID(), modibyID(), addbyID(), read(), �����齫����ͷŲ���ŵ����� quit()���ڱ����е���ʹ�ã�������ƺ����ṹ��
//�����˳����ģ�鲻��Ҫ��ӡ����������ģ��(ģ�� 4, 5, 6, 7) ������Ҫ�������ѭ����ȡ������ָ���뿴���Ե����顣
//���������ܹ���ο����£�
//void menu()
//{
//    int i;
//    std::cout << std::endl;
//    for (i = 0; i < 57; i++)
//    {
//        std::cout << '*';
//    }
//    std::cout << std::endl;
//    std::cout << "*\t1 ��ʾ��¼\t2 ͳ�Ƽ�¼\t3 �����¼\t*\n";
//    std::cout << "*\t4 ���Ҽ�¼\t5 ɾ����¼\t6 �޸ļ�¼\t*\n";
//    std::cout << "*\t7 ��Ӽ�¼\t0 �˳�ϵͳ\t\t\t*\n";
//    for (i = 0; i < 57; i++)
//    {
//        std::cout << '*';
//    }
//}
//
//int main()
//{
//    int choice; // ��֤�����Ϊ����������
//    char ch;
//    read(*); // �������ȡ�ļ�������ʼ���������������
//    menu();  // ���ò˵���ʾ������Ϊ��ֹ��������޶ȣ��뽫�������ѭ���ⲿ
//
//    while (true) // ע���ѭ���˳�������
//    {
//        std::cout << "ѡ��˵���(0~7):";
//        std::cin >> choice;
//        if (choice == 0) // ѡ���˳�
//        {
//            std::cout << "\n ȷ���˳���?(y/n)" << std::endl;
//            std::cin >> ch;
//            if (ch == 'y' || ch == 'Y')
//            {
//                quit(*); // �������
//                break;
//            }
//            else
//                continue;
//        }
//        switch (choice)
//        {
//        case 1:
//            disp(*); // �������
//            break;
//        case 2:
//            count(*); // �������
//            break;
//        case 3:
//            sort(*); // �������
//            break;
//        case 4:
//            searchbyID(*); // �������
//            break;
//        case 5:
//            delbyID(*); // �������
//            break;
//        case 6:
//            modibyID(*); // �������
//            break;
//        case 7:
//            addbyID(*); // �������
//            break;
//        default:
//            std::cout << "\n����������������" << std::endl;
//        }
//    }
//    return 0;
//}
//���ⲻ��Ҫ���ǷǷ����롣
//�������ύ֮��û�з�Ӧ�����������Ƿ���system����������У�ɾ�����ύ������ע���
//��������˵��
//�����ļ������������ǰ����Ŀ����׼����ÿ�����Ե㽫�в������ȵ����룬������ n ������
//���������������е����룬ÿ�а������������ݡ�
//���Ȼ�����˵�������ָ���ָ��Ϊ���ͣ����ݷ�Χ 0~7����ָ֤��ĺϷ��ԡ�
//��Ӧָ��Ĳ����������ݸ�ʽ��ο�ǰ����Ŀ��
//ע���ѭ����ȡ�Ĳ������������������� ��Ҫ ѯ���Ƿ������
//�����ʽ˵��
//Ӧ������ز���֮������Ӧ�Ĳ��Ϸ���䣬��ο�ǰ����Ŀ��
//��Ӧָ��������ʽ��ο�ǰ����Ŀ��
//���Ӧ�ÿ������Ի���ʾ��
//����
//������ʹ����δ���ڹ��ĺ����γ��е�֪ʶ��
//�������������Ӧ��������ʾ�������ʾ
//�����дӦ���Ͼ���͵���д��ʽ
//������ʹ�� goto
//����ȷҪ���⣬������ʹ�� C++ �� std::string ��
//�����������ʾ����б���ǰ����Ŀ�е�Ҫ�󲻱�
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
//ֱ������𰸶��ǳ������н���ģ�0 ��
//��Ϯ����ߣ�0 ��

#include <iostream>
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
void disp(struct student* head);
void count(struct student* head, int& a, int& b, int& c, int& d, int& e);
void sort(struct student*& head);
void searchbyID(struct student*& head, int id);
void delbyID(struct student*& head, int id);
void modibyID(struct student*& head, int id);
void addbyID(struct student*& head, int id);
void read(struct student*& head);
void quit(struct student*& head);

void menu();
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
    struct student* head = nullptr;
    int choice;
    char ch = '\0';
    read(head);
    menu();
    int id;

    while (true) {
        cout << "ѡ��˵���(0~7):";
        cin >> choice;
        if (choice == 0) {
            return 0;
        }
        switch (choice) {
        case 1://��ʾ��¼
            disp(head);
            break;
        case 2://ͳ��
            int a, b, c, d, e;
            count(head, a, b, c, d, e);
            break;
        case 3://����
            sort(head);
            break;
        case 4://����
            while (1) {
                cout << "��������ҵ�ѧ��ID: ";
                cin >> id;
                searchbyID(head, id);
                if (!isContinue()) break;
            }
            break;
        case 5://ɾ��
            while (1) {
                cout << "������ɾ����ѧ��ID: ";
                cin >> id;
                delbyID(head, id);
                if (!isContinue()) break;

            }
            break;
        case 6://�޸�
            while (1) {
                cout << "�������޸ĵ�ѧ��ID�����µĳɼ�: ";
                cin >> id;

                modibyID(head, id);
                if (!isContinue()) break;
            }
            break;
        case 7://���
            while (1) {
                cout << "��������ӵ�ѧ��ѧ��: \n";

                //char newName2[20];
                cin >> id;
                addbyID(head, id);
                if (!isContinue()) break;
            }
            break;
        default:
            cout << "\n�����������������" << endl;
        }
    }
    return 0;
}


void addStudent(struct student*& head, int no, const char* name, int score) {
    struct student* newNode = new (nothrow) student;
    if (!newNode) {
        cerr << "�ڴ����ʧ��" << endl;
        exit(EXIT_FAILURE);
    }
    newNode->no = no;
    strncpy_s(newNode->name, name, sizeof(newNode->name) - 1);
    newNode->name[sizeof(newNode->name) - 1] = '\0';
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

void disp(struct student* head) {
    struct student* current = head;
    while (current != nullptr) {
        cout << "ѧ��: " << current->no << " ����: " << current->name << " �ɼ�: " << current->score << endl;
        current = current->next;
    }
}

void count(struct student* head, int& a, int& b, int& c, int& d, int& e) {
    a = b = c = d = e = 0;
    struct student* current = head;
    while (current != nullptr) {
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
    }
    cout << "�ţ�" << a << "�� ����" << b << "�� �У�" << c << "�� ����" << d << "�� ������" << e << "��" << endl;
}

void sort(struct student*& head) {
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

    /*struct student* current = head;
    while (current != nullptr) {
        cout << "ѧ��: " << current->no << " ����: " << current->name << " �ɼ�: " << current->score << endl;
        current = current->next;
    }*/
}

void searchbyID(struct student*& head, int id) {
    bool found = false;
    struct student* current = head;
    while (current != nullptr) {
        if (current->no == id) {
            cout << "�Ѽ�������ѧ��: ѧ��: " << current->no << " ����: " << current->name << " �ɼ�: " << current->score << endl;
            found = true;
            break;
        }
        current = current->next;
    }

    if (!found) {
        cout << "������\n";
    }
}

void delbyID(struct student*& head, int id) {
    struct student* current = head;
    struct student* prev = nullptr;

    while (current != nullptr) {
        if (current->no == id) {
            if (prev == nullptr) {
                // �����Ҫɾ������ͷ�ڵ�
                head = current->next;
                prev = current->next;
            }
            else {
                // �����Ҫɾ�������м��β�ڵ�
                prev->next = current->next;
            }
            delete current;
            cout << "ɾ���ɹ�\n";
            return;
        }
        prev = current;
        current = current->next;
    }

    cout << "������\n";
}
//
//void delbyID(int& query, struct student*& head) {
//    /* ִ�в�ѯ */
//    bool found = 0;
//    struct student* current = head;
//    struct student* prev = head;//previous one
//
//    while (current != nullptr && found == 0) {
//        if (query == current->no) {
//            //delete the student
//            if (current == head) {
//                //�������������������������
//                head = current->next;
//                prev = current->next;
//            }
//            else {
//                prev->next = current->next;
//            }
//
//            found = 1;
//        }
//        if (1 == found) {
//            cout << "ɾ���ɹ�\n";
//        }
//        else {
//            prev = current;
//        }
//        current = current->next;
//    }
//    if (found == 0) {
//        //cout << "��Ǹ���������ѧ�Ų��ڱ��༶�ڡ�\n";
//        cout << "������\n";
//    }
//    if (!isContinue())
//    {       
//        return;
//    }
//}
//

void modibyID(struct student*& head, int id) {
    bool found = false;
    struct student* current = head;
    struct student* prev = nullptr;

    while (current != nullptr && !found) {
        if (current->no == id) {
            found = true;
            cout << "�Ѽ�������ѧ�����������뽫������޸�Ϊ���٣�\n";
            int newScore = 0;
            cin >> newScore;
            current->score = newScore;

            //cout << "�ɼ����޸�Ϊ��" << current->score << endl;
        }
        else {
            prev = current;
            current = current->next;
        }
    }

    if (!found) {
        cout << "������\n";
    }
}

void addbyID(struct student*& head, int id) {
    bool found = false;
    struct student* current = head;
    struct student* prev = nullptr;

    while (current != nullptr && !found) {
        if (current->no == id) {
            found = true;
            cout << "ѧ���Ѵ���\n";
            return;
        }
        else {
            prev = current;
            current = current->next;
        }
    }

    if (!found) {
        cout << "���������������ɼ�\n";
        char name_add[20];
        int score_new = 0;
        cin >> name_add >> score_new;
        addStudent(head, id, name_add, score_new);
    }

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
    int score;

    while (file >> studentID >> name >> score) {
        addStudent(head, studentID, name, score);
    }//��Ҳ̫�����ˡ�����
    file.close();

}

void quit(struct student*& head) {
    struct student* current = head;
    while (current != nullptr) {
        struct student* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}

void menu() {
    int i;
    cout << endl;
    for (i = 0; i < 57; i++) {
        cout << '*';
    }
    cout << endl;
    cout << "*\t1 ��ʾ��¼\t2 ͳ�Ƽ�¼\t3 �����¼\t*\n";
    cout << "*\t4 ���Ҽ�¼\t5 ɾ����¼\t6 �޸ļ�¼\t*\n";
    cout << "*\t7 ��Ӽ�¼\t0 �˳�ϵͳ\t\t\t*\n";
    for (i = 0; i < 57; i++) {
        cout << '*';
    }
}