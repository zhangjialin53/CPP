////单链表 - 成绩管理 - 6 - 删除记录
////时间限制	1000ms	空间限制	256MB
////
////研究所创立的故事有许多版本，其中也包括流传的《爱乐普第传》。上面一篇文章便是节选自其中。据说，这是研究所其中一位研究员在早些年写成的，但现在已很难找到原本，真实性也难以考究。
////
////爱乐普第研究员们各个身怀绝技。到目前为止，研究员已经经历了数次纳新，每次纳新的情况各不相同，也都有传奇故事发生。许多人想加入文学研究所，但研究所的纳新程序一向严格保密。
////
////不过一个比较可信的说法是，某一次纳新时，研究所给报名者提出了下面的问题：
////
////今有学生若干，信息皆存之链表。或欲去某某，问何以为之？
////
////这古文虽显得拗口，看起来像是出题人随便找的翻译软件翻译的，但想必也不影响你完成。
////
////本题你需要从文件中读取所有学生的信息，文件内容请 点击下载 查看，下载后使用相对路径 student.txt 方便本地调试。
////
////每当你从文件读取出一组信息后，就申请一个结点存放这个学生的信息，最终使所有学生信息形成一个链表，按读取学生顺序进行首尾相连即可。
////
////为防止输出超出限度，本题不要求读取完后输出至屏幕。
////
////当信息读取完成，请用标准输入流 cin 输入要删除的学生学号，若查询到则释放该结点，若未查询到，请输出提示语，本题允许的提示语请见限制，当接收到退出 / 不继续指令时，输出现有的名单信息。
////
////注意：
////
////请任选 单链表 - 成绩管理 - 1 / 2 中的一种文件读取 / 动态内存申请方式，将其相关功能封装为函数 read()，将 单链表 - 成绩管理 - 5 中相关查询函数封装成函数 searchbyID()，在本题中调用使用，自行设计函数结构。
////本题要求循环读取输入，即每读取完一条学号，再读取一次是否继续的指令(规定继续指令为 y，退出指令为 n)，我们提供一段具有循环读取结构的程序，你可以适当进行补全，也可以自己设计程序逻辑。
////bool isContinue()
////{
////    std::cout << "是否继续?(y/n): \n";
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
////    /* 在这里读取文件 */
////    // 当你读取完成
////    while (1)
////    {
////        /* 执行查询与删除 */
////        if (!isContinue())
////        {
////            break; // 当接收到不需要继续，则退出循环
////        }
////    }
////    /* 退出前打印现有名单 */
////    return 0;
////}
////本题不需要考虑非法输入。
////输入数据说明
////本题文件内容描述请见前置题目，标准输入每个测试点将有不定长度的输入，输入以 n 结束。
////将给出不定长度行的输入，每行包含 2 个数据。
////第一个数据为 整型，数据范围 - 2147483648~2147483647，代表你将要删除的学号。
////第二个数据为 字符，内容为 'y' 或 'n'，代表是否继续查询。
////输出格式说明
////若学号存在，删除时不需要输出任何语句。
////若学号不存在，输出应至少包含下面限制列表内允许的错误语句，注意，本题错误语句与前置题目不太一样。
////当接收到 n 时，输出至少包含剩余学生的 学号、姓名、成绩。
////输出应该考虑人性化提示。
////限制
////不允许使用尚未讲授过的后续课程中的知识点
////过程中请给出相应的输入提示与输出提示
////程序编写应符合锯齿型的书写格式
////不允许使用 goto
////除明确要求外，不允许使用 C++ 的 std::string 类
////本题允许的未查询到的语句仅仅为 "不存在"
////运行时间 1 秒
////运行使用内存 128MB
////输出限制 10240 个字符
////评分标准
////若编译运行成功，即有 5 分基础分
////若出现编译 Warning，扣 1 分，若发现非法语句，如system("pause")和goto等，扣 2 分
////若出现非正常退出(Runtime Error)，按测试点视情况扣分
////【人工审核项】 若发现代码使用后续知识点，视情况扣分
////【人工审核项】 若代码书写不规范或整洁度极差(如变量取名不规范或没有按照锯齿型书写等)，视情况扣分
////【人工审核项】 不符合题目要求（如要求用递归完成而没有使用、没有错误性输入检测等），视情况扣分
////【人工审核项】 动态申请的内存不释放，扣 2 分
////【人工审核项】 无 read() 和 searchbyID() 函数，扣 3 分
////直接输出答案而非程序运行结果的，0 分
////抄袭舞弊者，0 分

#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>

#include <thread>
#include <chrono>
//缓慢等待进入file   (好吧 有时间限制所以没有用到)


//哥 你真的太有才了 前言发给同学搞得他们都想帮我做了
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
void freeList(struct student*& head);
void read(struct student*& head);
bool isContinue();
void searchbyID(int& query, struct student*& head, bool& if_exit);


int main() {

    /* 在这里读取文件 */
    // 定义链表头节点
    struct student* head = nullptr;

    read(head);
    cout << "请输入要查找的学号\n";
    //bubbleSort(head);
    bool if_exit = 0;
    while (1)
    {
        // 程序查询循环
        int query = 0;
        cin >> query;
        searchbyID(query, head, if_exit);
        if (if_exit) {
            break;
        }
    }
    struct student* current = head;
    while (current != nullptr) {
        cout << "学号: " << current->no << " 姓名: " << current->name << " 成绩: " << current->score << endl;
        current = current->next;
    }

    // 释放链表内存
    freeList(head);
    return 0;
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

bool isContinue()
{
    cout << "是否继续？(y/n): \n";
    char tmp;
    cin >> tmp;
    if (tmp == 'Y' || tmp == 'y')
    {
        return true;
    }
    return false;
}

void searchbyID(int& query, struct student*& head, bool& if_exit) {
    /* 执行查询 */
    bool found = 0;
    struct student* current = head;
    struct student* prev = head;//previous one

    while (current != nullptr && found == 0) {
        if (query == current->no) {
            //cout << "该同学信息为： 学号: " << current->no << " 姓名: " << current->name << " 成绩: " << current->score << endl;
            // cout << "学号: " << current->no << " 姓名: " << current->name << " 成绩: " << current->score << endl;

            //delete the student
            if (current == head) {
                //特殊情况！！！！！！！！！
                head = current->next;
                prev = current->next;
            }
            else {
                prev->next = current->next;
            }

            found = 1;
        }
        if (1 == found) {
            cout << "删除成功\n";
        }
        else {
            prev = current;
        }
        current = current->next;
    }
    if (found == 0) {
        //cout << "抱歉，您输入的学号不在本班级内。\n";
        cout << "不存在\n";
    }
    if (!isContinue())
    {
        if_exit = 1;
        return;
    }
}


