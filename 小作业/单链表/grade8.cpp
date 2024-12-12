//单链表 - 成绩管理 - 8 - 添加记录
//时间限制	1000ms	空间限制	256MB
//
//【三、文学测试】
//
//阅读下面的材料，根据要求写作。（6 * 0分）
//“同济、清华、黄渡理工”是志愿填报的三个术语。同济是指合乎水平的综合类985；清华是指超常发挥的精妙Top2；黄渡理工是指貌似还行，而从文学水平看通常会受损的学校。对于毕业生而言，应该从填报同济开始，同济的分数线够了，才有正经大学上。一些毕业生热衷于追求清华，而忽视更好投档的同济。同济是基础，清华是梦想。一般来说，在同济认真学习，才可能读研清华；否则，难免去到黄渡理工，文学也难得发展。
//
//以上材料对我们颇具启示意义。请结合材料写一篇文章，谈谈你应该如何写下面这道编程题。
//
//要求：选准角度，确定立意，明确文体，自拟标题；不要套作，不得抄袭；不得泄露个人信息；不少于800字。
//
//本题你需要从文件中读取所有学生的信息，文件内容请 点击下载 查看，下载后使用相对路径 student.txt 方便本地调试。
//
//每当你从文件读取出一组信息后，就申请一个结点存放这个学生的信息，最终使所有学生信息形成一个链表，按读取学生顺序进行首尾相连即可。
//
//为防止输出超出限度，本题不要求读取完后输出至屏幕。
//
//当信息读取完成，请用标准输入流 cin 输入要添加的学号（人工保证输入合法性即可），若学号不存在，则添加结点并输入添加的相关信息，若学号存在，请输出提示语，本题允许的提示语请见限制。当接收到退出 / 不继续指令时，排序后输出现有的名单。
//
//注意：
//
//请任选 单链表 - 成绩管理 - 1 / 2 中的一种文件读取 / 动态内存申请方式，将其相关功能封装为函数 read()，将 单链表 - 成绩管理 - 4 的相关排序函数封装成 sort()，在本题中调用使用，自行设计函数结构。
//本题排序要求同 单链表 - 成绩管理 - 4，成绩为第一顺序由高至低排序，若成绩相同，则以学号为第二顺序由低至高排序。
//本题要求循环读取输入，即每读取完一组信息，再读取一次是否继续的指令(规定继续指令为 y，退出指令为 n)，这是小陈之前写的一段程序，你可以适当进行补全。
//bool isContinue()
//{
//    std::cout << "是否继续?(y/n): \n";
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
//    /* 在这里读取文件 */
//    // 当你读取完成
//    while (1)
//    {
//        /* 执行添加 */
//        if (!isContinue())
//        {
//            break; // 当接收到不需要继续，则退出循环
//        }
//    }
//    /* 退出前排序并打印现有名单 */
//    return 0;
//}
//本题不需要考虑非法输入。
//输入数据说明
//本题文件内容描述请见前置题目，标准输入每个测试点将有不定长度的输入，输入以 n 结束。
//将给出不定长度行的输入，每行包含 2 / 4 个数据。
//第一个数据为 整型，数据范围 - 2147483648~2147483647，代表你将要添加的学号。
//若学号不存在，第二个数据为 字符串，内容为中文，长度 10 以下，代表将要添加的姓名值。
//若学号不存在，第三个数据为 整型，数据范围 0~100，代表将要添加的成绩值。
//若学号不存在，第四个数据为 字符，否则该数据为第二个数据，内容为 'y' 或 'n'，代表是否继续查询。
//输出格式说明
//若学号存在，输出应至少包含下面限制列表内允许的错误语句。
//修改完成接收到 n 时，输出应至少包含所有学生 根据成绩降序 排序后的 学号、姓名、成绩。
//输出应该考虑人性化提示。
//限制
//不允许使用尚未讲授过的后续课程中的知识点
//过程中请给出相应的输入提示与输出提示
//程序编写应符合锯齿型的书写格式
//不允许使用 goto
//除明确要求外，不允许使用 C++ 的 std::string 类
//本题允许的未查询到的语句仅仅为 "已存在"
//运行时间 1 秒
//运行使用内存 128MB
//输出限制 10240 个字符
//评分标准
//若编译运行成功，即有 5 分基础分
//若出现编译 Warning，扣 1 分，若发现非法语句，如system("pause")和goto等，扣 2 分
//若出现非正常退出(Runtime Error)，按测试点视情况扣分
//【人工审核项】 若发现代码使用后续知识点，视情况扣分
//【人工审核项】 若代码书写不规范或整洁度极差(如变量取名不规范或没有按照锯齿型书写等)，视情况扣分
//【人工审核项】 不符合题目要求（如要求用递归完成而没有使用、没有错误性输入检测等），视情况扣分
//【人工审核项】 动态申请的内存不释放，扣 2 分
//【人工审核项】 无 read() 和 sort() 函数，扣 3 分
//直接输出答案而非程序运行结果的，0 分
//抄袭舞弊者，0 分

#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>

#include <thread>
#include <chrono>
//缓慢等待进入file   (好吧 有时间限制所以没有用到)


using namespace std;

//根据vs报错提示把读取的改成了fscanf_s，打开file也改成了fopen_s


struct student {
    int no;                // 学号
    char name[20];         // 姓名
    int score;             // 成绩
    struct student* next;  // 下一结点
    /*! 不允许修改上述结构 !*/
};
//好嘟好嘟知道噜 不修改就是了;


void addStudent(struct student*& head, int no, const char* name, int score);
void sort(struct student* head);
void freeList(struct student*& head);
void read(struct student*& head);
void additionally_add(struct student*& head, int no, const char* name, int score);
bool searchbyID(int& query, struct student*& head, struct student*& current);
bool isContinue()
{
    std::cout << "是否继续?(y/n): \n";
    char tmp;
    std::cin >> tmp;
    if (tmp == 'Y' || tmp == 'y')
    {
        return true;
    }
    return false;
}
int main() {
    cout << "本代码功能为表格新增学生信息,最后完成打印出所有成绩\n";
    // 定义链表头节点
    struct student* head = nullptr;
    struct student* current = nullptr;
    read(head);
    int num = 0, score = 0;
    char name[20];

    while (true) {
        /* 执行添加 */
        cout << "请输入学号\n";
        cin >> num;
        if (!searchbyID(num, head, current)) { // 如果没有找到该学号
            cout << "请输入其姓名\n";
            cin >> name;
            cout << "请输入其成绩\n";
            cin >> score;
            // 添加新学生
            additionally_add(head, num, name, score);
        }

        if (!isContinue()) {
            break; // 当接收到不需要继续，则退出循环
        }
    }

    int a, b, c, d, e; // 优 良 中 及格 不及格 人数
    a = b = c = d = e = 0;
    sort(head);

    // 释放链表内存
    freeList(head);
    return 0;
}

bool searchbyID(int& query, struct student*& head, struct student*& current) {
    /* 执行查询 */
    bool found = false;
    current = head;
    while (current != nullptr) {
        if (query == current->no) {
            cout << "要插入的学号已存在\n";
            return true;
        }
        current = current->next;
    }
    //cout << "不存在\n";
    return false;
}

void additionally_add(struct student*& head, int no, const char* name, int score) {
    addStudent(head, no, name, score);
}
void read(struct student*& head) {
    // 相对路径
    const char* filePath = "student.txt";

    // 打开文件  改为用fstream
    ifstream file(filePath);
    if (!file.is_open()) {
        cerr << "无法打开文件" << endl;
        //return 1;
        exit(0);
    }

    // 读取第一行数据学生总数
    int total;
    file >> total;
    if (file.fail()) {
        cerr << "读取学生总数失败" << endl;
        file.close();
        //return 1;
        exit(0);
    }

    // 读取文件内容并添加到链表中
    int studentID;
    char name[20];
    int score;   //这三个不是手动定义！是占个位来判断 为了迎合fscanf_s的使用条件

    while (file >> studentID >> name >> score) {
        addStudent(head, studentID, name, score);
    }//这也太方便了。。。

    // 关闭文件
    //fclose(file);
    file.close();

}
// 添加学生信息到链表
void addStudent(struct student*& head, int no, const char* name, int score) {
    //struct student* newNode = (struct student*)malloc(sizeof(struct student));
    struct student* newNode = new (nothrow) student;
    if (!newNode) {
        cerr << "内存分配失败" << endl;
        exit(EXIT_FAILURE);
    }

    newNode->no = no;
    strncpy_s(newNode->name, sizeof(newNode->name), name, _TRUNCATE);
    newNode->name[sizeof(newNode->name) - 1] = '\0';  // 确保字符串以 null 结尾
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
        cout << "学号: " << current->no << " 姓名: " << current->name << " 成绩: " << current->score << endl;
        current = current->next;
    }
}


// ！！！！！！！！！！！！！！！释放链表内存                          //you see 有的有的放心
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