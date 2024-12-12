//单链表 - 成绩管理 - 10 - 带表头结点 - 删除记录
//时间限制	1000ms	空间限制	256MB
//
//(三) 文学类文本阅读(本题共3小题，15分)
//
//阅读下面的文字，完成7～9题。
//
//
//文章内容在某道题的序言故事中，请自行寻找！
//
//
//下列对小说相关内容和艺术特色的分析鉴赏，不正确的一项是（3分）
//A.小说情节分为两部分，第一部分讲述小甜和阿秋的相遇相识相处，第二部分讲述在疫情来袭后，两人最终分离，结局凄美。
//
//B.小说插入了对校园环境，学习生活日常等的有关描写，这既符合主人公的学生身份，也为小说增添了更真切的故事背景。
//
//C.小说文笔优美细腻，以人物内心独白和神态描写为主，在叙事上有明确的主线却无集中的故事叙述，颇有散文体小说之感。
//
//D.小说描写了小甜和阿秋最终没能走到一起的遗憾，作为疫情给人们带来不便和苦楚的缩影，反映了人们对疫情早日结束的期盼。
//
//
//请分析文中划线句子的含义。（6分）
//直到返校的时候，小甜站在全副武装的学校大门面前，觉得什么都没变，又好像什么都变了。
//
//
//有人认为，文章中出现的有关文件压缩的内容显得冗余，应该删去。你觉得是否应该删去文件压缩的内容？请简述理由。（6分）
//
//本题你需要从文件中读取所有学生的信息，文件内容请 点击下载 查看，下载后使用相对路径 student.txt 方便本地调试。
//
//注意本题与 单链表 - 成绩管理 - 6 的区别是你需要先新建一个表头结点。
//每当你从文件读取出一组信息后，就申请一个结点存放这个学生的信息，最终使所有学生信息形成一个链表，按读取学生顺序进行首尾相连即可。
//
//为防止输出超出限度，本题不要求读取完后输出至屏幕。
//
//当信息读取完成，请用标准输入流 cin 输入要删除的学生学号，若查询到则释放该结点，若未查询到，请输出提示语，本题允许的提示语请见限制，当接收到退出 / 不继续指令时，输出现有的名单信息。
//
//注意：
//
//此题要求为带表头结点的链表
//请任选 单链表 - 成绩管理 - 1 / 2 中的一种文件读取 / 动态内存申请方式，将其相关功能进行修改封装为函数 read()，将 单链表 - 成绩管理 - 5 的相关查询函数进行修改封装成 searchbyID()，在本题中调用使用，自行设计函数结构。
//本题要求循环读取输入，即每读取完一条学号，再读取一次是否继续的指令(规定继续指令为 y，退出指令为 n)，小陈认为你可能会需要用到这样的循环读取结构，所以写了一段残缺不全的程序，你可以适当进行补全。
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
//        /* 执行查询与删除 */
//        if (!isContinue())
//        {
//            break; // 当接收到不需要继续，则退出循环
//        }
//    }
//    /* 退出前打印现有名单 */
//    return 0;
//}
//本题不需要考虑非法输入。
//输入数据说明
//本题文件内容描述请见前置题目，标准输入每个测试点将有不定长度的输入，输入以 n 结束。
//将给出不定长度行的输入，每行包含 2 个数据。
//第一个数据为 整型，数据范围 - 2147483648~2147483647，代表你将要删除的学号。
//第二个数据为 字符，内容为 'y' 或 'n'，代表是否继续查询。
//输出格式说明
//若学号存在，删除时不需要输出任何语句。
//当接收到 n 时，输出至少包含剩余学生的 学号、姓名、成绩。
//输出应该考虑人性化提示。
//限制
//不允许使用尚未讲授过的后续课程中的知识点
//过程中请给出相应的输入提示与输出提示
//程序编写应符合锯齿型的书写格式
//不允许使用 goto
//除明确要求外，不允许使用 C++ 的 std::string 类
//本题允许的未查询到的语句仅仅为 "不存在"
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
//【人工审核项】 链表不带表头结点，扣 5 分
//直接输出答案而非程序运行结果的，0 分
//抄袭舞弊者，0 分


#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>

using namespace std;

struct student {
    int no;                // 学号
    char name[20];         // 姓名
    int score;             // 成绩
    struct student* next;  // 下一结点
};

void addStudent(struct student*& head, int no, const char* name, int score);
void freeList(struct student*& head);
void read(struct student*& head);
bool isContinue();
void searchbyID(int& query, struct student*& head, bool& if_exit);

int main() {
    /* 在这里读取文件 */
    // 定义带哨兵的链表头节点

    struct student* head = new student{ 0, "", 0, nullptr }; // 头节点

    read(head);
    cout << "请输入要查找的学号\n";
    //bubbleSort(head);
    bool if_exit = 0;
    while (1) {
        // 程序查询循环
        int query = 0;
        cin >> query;
        searchbyID(query, head, if_exit);
        if (if_exit) {
            break;
        }
    }

    struct student* current = head->next;
    while (current != nullptr) {
        cout << "学号: " << current->no << " 姓名: " << current->name << " 成绩: " << current->score << endl;
        current = current->next;
    }

    // 释放
    freeList(head);
    return 0;
}

void read(struct student*& head) {
    // 相对路径
    const char* filePath = "student.txt";

    // 打开文件
    ifstream file(filePath);
    if (!file.is_open()) {
        cerr << "无法打开文件" << endl;
        exit(0);
    }

    // 读取第一行数据学生总数
    int total;
    file >> total;
    if (file.fail()) {
        cerr << "读取学生总数失败" << endl;
        file.close();
        exit(0);
    }

    // 读取文件内容并添加到链表中
    int studentID;
    char name[20];
    int score;

    while (file >> studentID >> name >> score) {
        addStudent(head, studentID, name, score);
    }

    // 关闭文件
    file.close();
}

// 添加学生信息到链表
void addStudent(struct student*& head, int no, const char* name, int score) {
    struct student* newNode = new (nothrow) student;
    if (!newNode) {
        cerr << "内存分配失败" << endl;
        exit(EXIT_FAILURE);
    }

    newNode->no = no;
    strncpy_s(newNode->name, sizeof(newNode->name), name, _TRUNCATE);
    newNode->name[sizeof(newNode->name) - 1] = '\0';
    newNode->score = score;
    newNode->next = nullptr;

    if (head->next == nullptr) {
        // 链表为空的情况
        head->next = newNode;
    }
    else {
        // 寻找链表的最后一个节点
        struct student* current = head->next;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// 释放链表内存
void freeList(struct student*& head) {
    struct student* current = head->next;
    while (current != nullptr) {
        struct student* temp = current;
        current = current->next;
        delete temp;
    }
    delete head; // 释放头结点
    head = nullptr;
}

bool isContinue() {
    cout << "是否继续？(y/n): \n";
    char tmp;
    cin >> tmp;
    if (tmp == 'Y' || tmp == 'y') {
        return true;
    }
    return false;
}

void searchbyID(int& query, struct student*& head, bool& if_exit) {
    /* 执行查询 */
    bool found = 0;
    struct student* current = head->next;
    struct student* prev = head; // previous one

    while (current != nullptr && !found) {
        if (query == current->no) {
            if (current == head->next) {
                // 特殊情况：删除的是头结点后面的第一个节点
                head->next = current->next;
                prev = current->next;
            }
            else {
                prev->next = current->next;
            }

            found = 1;
        }
        if (found) {
            cout << "删除成功\n";
        }
        else {
            prev = current;
        }
        current = current->next;
    }
    if (!found) {
        cout << "不存在\n";
    }
    if (!isContinue()) {
        if_exit = 1;
        return;
    }
}