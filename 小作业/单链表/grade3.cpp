//单链表 - 成绩管理 - 3 - 统计记录
//时间限制	1000ms	空间限制	256MB
//
//主题征集顺利结束，在学生们提交的众多主题中，“黄渡理工也要文学”脱颖而出，它代表了黄渡理工的最高文学水准。此后，文学宣传周在大家对于新主题的欢呼声中轰轰烈烈地开始了筹备。
//
//爱乐普第文学研究所是社会上一个知名的文学研究所，黄渡理工当然不会放过这次机会。他们费尽心思，终于邀请到研究所来学校做讲座。
//
//为了更好地展现学校的文学风貌，学校对学生发放了文学测试，希望先摸底一下学生的文学水平，也希望同学们能先对爱乐普第有初步的了解。这份测试你可以在第三部分的题目描述中看到。老师希望各个分数段的学生都能去参加这个讲座，因此需要先统计一下各个分数段的情况。你因为上一次表现出色，马老师极力推荐你负责这项工作，因此这一次又承担了这个重任。
//
//本题你需要从文件中读取所有学生的信息，文件内容请 点击下载 查看，下载后使用相对路径 student.txt 方便本地调试。
//
//每当你从文件读取出一组信息后，就申请一个结点存放这个学生的信息，最终使所有学生信息形成一个链表，按读取学生顺序进行首尾相连即可。
//
//为防止输出超出限度，本题不要求读取完后输出至屏幕。
//
//当信息读取完成，请对链表进行统计，按成绩进行分段后的人数之和进行输出，期望输出格式请检查测试点，请确保输出信息包含关键点需要的信息。
//
//注意：
//
//请任选 单链表 - 成绩管理 - 1 / 2 中的一种文件读取 / 动态内存申请方式，将其相关功能封装为函数 read()，在本题中调用使用，自行设计函数结构。
//分数段规定如下 : 优[90, 100], 良[80, 90), 中[70, 80), 及格[60, 70), 不及格[0, 60)。
//本题不需要考虑非法输入。
//输入数据说明
//本题没有标准输入数据，请下载文件查看数据内容。
//文件内第一行给出学生数量 m。
//接下来 m 行，由学号 姓名 成绩组成，学号为 1810000 开始的顺序整型，姓名为 10 个字符以下的中文，成绩为 100 以内的整型。
//所有数据保证合法，可自行查看。
//输出格式说明
//应至少包含所有学生的 优、良、中、及格、不及格  的人数统计。
//输出应该考虑人性化提示。
//限制
//不允许使用尚未讲授过的后续课程中的知识点
//过程中请给出相应的输入提示与输出提示
//程序编写应符合锯齿型的书写格式
//不允许使用 goto
//除明确要求外，不允许使用 C++ 的 std::string 类
//运行时间 1 秒
//运行使用内存 128MB
//输出限制 10240 个字符
//评分标准
//若编译运行成功，即有 5 分基础分
//若出现编译 Warning，扣 1 分，若发现非法语句，如system("pause") 和 goto等，扣 2 分
//若出现非正常退出(Runtime Error)，按测试点视情况扣分
//【人工审核项】 若发现代码使用后续知识点，视情况扣分
//【人工审核项】 若代码书写不规范或整洁度极差(如变量取名不规范或没有按照锯齿型书写等)，视情况扣分
//【人工审核项】 不符合题目要求（如要求用递归完成而没有使用、没有错误性输入检测等），视情况扣分
//【人工审核项】 动态申请的内存不释放，扣 2 分
//【人工审核项】 无 read() 函数，扣 3 分
//直接输出答案而非程序运行结果的，0 分
//抄袭舞弊者，0 分
//样例输出
//统计信息如下：优 : 15人  良 : 4人  中 : 6人  及格 : 6人  不及格 : 21人


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
void printList(struct student* head, int& a, int& b, int& c, int& d, int& e);
void freeList(struct student*& head);
void read(struct student*& head);

int main() {
    // 定义链表头节点
    struct student* head = nullptr;

    read(head);


    int a, b, c, d, e;//优 良 中 及格 不及格 人数
    a = b = c = d = e = 0;
    printList(head, a, b, c, d, e);



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
    cout << "统计结果如下：\n";
    cout << "学生总数: " << total << endl;

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
void printList(struct student* head, int& a, int& b, int& c, int& d, int& e) {
    struct student* current = head;
    while (current != nullptr) {
        //cout << "学号: " << current->no << " 姓名: " << current->name << " 成绩: " << current->score << endl;
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
        //cout << "1" << endl;
    }
    cout << "优：" << a << "人 良：" << b << "人 中：" << c << "人 及格：" << d << "人 不及格：" << e << "人" << endl;
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