//单链表 - 成绩管理 - 5 - 查找记录
//时间限制	1000ms	空间限制	256MB
//
//【二、爱乐普第】
//
//202X年，佳定城中心，央中大道熙熙攘攘，车水马龙。日光照在央中大道边最高的建筑——皋丞大厦上，显得其更加伟岸挺拔。大道边上的大屏幕正在播报今天的新闻。
//
//“近日，知名企业Momo集团创始人，董事长飞姐发文称，她将辞去Momo集团董事长的职务，但并未透露后续安排。Momo集团（某某集团）是业内数一数二的集团，飞姐的辞职代表着一代飞字号传奇即将落下帷幕。”
//
//皋丞大厦内，Momo集团总部。
//
//“飞姐，您真的决定了吗？辞去董事长的职务，去创建文学研究所？”秘书怯怯地问道。
//
//“嗯。”一个女人回答道。她正是Momo集团的董事长，业内叱咤风云的人物——飞姐。飞姐缓缓站起来，对秘书说道：“这些年来我兢兢业业，把集团做到现在这个水平。”飞姐边说，边向落地窗边走去，“但是我现在发现，这世上还有更值得做的事。”飞姐停了下来，看着楼下的车水马龙，继续说道：“所以我决定，云游四方，召集各路人才，创办一个文学研究所。”
//
//秘书点了点头。
//
//“但是在这之前，还有一件事需要办好”飞姐突然转过身，对秘书说道。
//
//“什么事？”秘书问道。
//
//飞姐笑了笑，说道：
//
//本题你需要从文件中读取所有学生的信息，文件内容请 点击下载 查看，下载后使用相对路径 student.txt 方便本地调试。
//
//每当你从文件读取出一组信息后，就申请一个结点存放这个学生的信息，最终使所有学生信息形成一个链表，按读取学生顺序进行首尾相连即可。
//
//为防止输出超出限度，本题不要求读取完后输出至屏幕。
//
//当信息读取完成，请用标准输入流 cin 输入要查询的学生学号（人工保证输入合法性即可），在链表中按此学号进行查找并将找到的学生信息进行输出，格式请参考测试点，若未查询到，请输出提示语，本题允许的提示语请见限制。
//
//注意：
//
//请任选 单链表 - 成绩管理 - 1 / 2 中的一种文件读取 / 动态内存申请方式，将其相关功能封装为函数 read()，在本题中调用使用，自行设计函数结构。
//本题要求循环读取输入，即每读取完一条学号，再读取一次是否继续的指令(规定继续指令为 y，退出指令为 n)，小陈认为你可能会需要用到这样的循环读取结构，所以写了一段残缺不全的程序，你可以适当进行补全。
//bool isContinue()
//{
//    std::cout << "是否继续？(y/n): \n";
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
//        // 程序查询循环
//        int query;
//        std::cin >> query;
//        /* 执行查询 */
//        if (!isContinue())
//        {
//            break; // 当接收到不需要继续，则退出循环
//        }
//    }
//
//    return 0;
//}
//本题不需要考虑非法输入。
//输入数据说明
//本题文件内容描述请见前置题目，标准输入每个测试点将有不定长度的输入，输入以 n 结束。
//将给出不定长度行的输入，每行包含 2 个数据。
//第一个数据为 整型，数据范围 - 2147483648 ~2147483647，代表你将要查询的学号。
//第二个数据为 字符，内容为 'y' 或 'n'，代表是否继续查询。
//输出格式说明
//若学号存在，输出至少包括该学号的 学号、姓名、成绩。
//输出应该考虑人性化提示。
//限制
//不允许使用尚未讲授过的后续课程中的知识点
//过程中请给出相应的输入提示与输出提示
//程序编写应符合锯齿型的书写格式
//不允许使用 goto
//除明确要求外，不允许使用 C++ 的 std::string 类
//本题允许的未查询到的语句为 : 不存在，请确保不存在的学生有以上错误信息
//运行时间 1 秒
//运行使用内存 128MB
//输出限制 10240 个字符
//评分标准
//若编译运行成功，即有 5 分基础分
//若出现编译 Warning，扣 1 分，若发现非法语句，如 system("pause") 和 goto 等，扣 2 分
//若出现非正常退出(Runtime Error)，按测试点视情况扣分
//【人工审核项】 若发现代码使用后续知识点，视情况扣分
//【人工审核项】 若代码书写不规范或整洁度极差(如变量取名不规范或没有按照锯齿型书写等)，视情况扣分
//【人工审核项】 不符合题目要求（如要求用递归完成而没有使用、没有错误性输入检测等），视情况扣分
//【人工审核项】 动态申请的内存不释放，扣 2 分
//【人工审核项】 无 read() 函数，扣 3 分
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
void bubbleSort(struct student* head);
void freeList(struct student*& head);
void read(struct student*& head);
bool isContinue();

int main() {

    /* 在这里读取文件 */
    // 定义链表头节点
    struct student* head = nullptr;

    read(head);
    cout << "请输入要查找的学号\n";
    //bubbleSort(head);
    while (1)
    {
        // 程序查询循环
        int query;
        cin >> query;

        /* 执行查询 */
        bool found = 0;
        struct student* current = head;
        while (current != nullptr) {
            if (query == current->no) {
                cout << "该同学信息为： 学号: " << current->no << " 姓名: " << current->name << " 成绩: " << current->score << endl;
                // cout << "学号: " << current->no << " 姓名: " << current->name << " 成绩: " << current->score << endl;

                found = 1;
            }
            current = current->next;
        }
        if (found == 0) {
            //cout << "抱歉，您输入的学号不在本班级内。\n";
            cout << "不存在\n";
        }
        if (!isContinue())
        {
            break; // 当接收到不需要继续，则退出循环
        }
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


