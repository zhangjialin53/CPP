//单链表 - 成绩管理 - 1 - 显示记录(C 方式)
//时间限制	1000ms	空间限制	256MB
//
//【一、黄渡往事】
//
//黄渡理工是江苏省的一所知名理工学校，为了发展黄渡理工成为综合性大学，老师们希望能够提高学生们的文学素养。经过热烈的讨论，大家决定办一个文学宣传周。文学宣传周需要先进行主题的拟定，学校打算面向全校学生进行主题征集。
//
//马老师负责核查投稿宣传周主题的学生信息，以防止外部势力的偷袭。学生的信息都存在电脑的一个文本文件中，但是他太老了，不会用电脑。马老师听说你练过三四个月编程，因此他找到你，希望你能帮助写一个程序，读取文件中的学生信息并输出到屏幕上。你知道马老师是掌门人——当然，是校门的掌门人，但这并不妨碍他德高望重，因此你打算投其所好。由于马老师的一大爱好是“耗子尾”，而链表的灵活性与之很相似，因此你计划以链表的形式存储学生的信息。
//
//本题你需要从文件中读取所有学生的信息，文件内容请 点击下载 查看，下载后使用相对路径 student.txt 方便本地调试。
//
//每当你从文件读取出一组信息后，就申请一个结点存放这个学生的信息，最终使所有学生信息形成一个链表，按读取学生顺序进行首尾相连即可。当信息读取完毕后，输出所有学生的信息至屏幕。
//
//注意：
//
//本题请使用动态内存申请 C 方式的 malloc 或 calloc，以及 free 函数。字节数不能直接给数字，如 malloc(40)，而应是类似 malloc(10 * sizeof(int)) 的形式。动态申请内存必须判断是否成功，使用完成后必须释放。
//本题请使用 C 方式的 fopen 打开文件句柄，用 fscanf 进行文件读取，使用相对路径 student.txt ，本题已为编译器开放文件读取权限。注意：由于编译器是 VS2022 + G++ 双平台编译器，所以如果你没有定义宏而使用 fopen 或 fscanf 将会掷出编译错误，具体方式请参考测试问题中的第2题。
//输出学生信息的格式：同一学生的不同信息之间用空格分隔，不同学生的信息需换行显示。
//规定链表结构体如下
//struct student {
//    int no;                // 学号
//    char name[20];         // 姓名
//    int score;             // 成绩
//    struct student* next;  // 下一结点
//    /*! 不允许修改上述结构 !*/
//}
//本题不需要考虑非法输入。
//输入数据说明
//本题没有标准输入数据，请下载文件查看数据内容。
//文件内第一行给出学生数量 m。
//接下来 m 行，由 学号 姓名 成绩 组成，学号为 1810000  开始的顺序整型，姓名为 10 个字符以下的中文，成绩为 100 以内的整型。
//所有数据保证合法，可自行查看。
//在代码中使用相对路径读取student.txt中的内容
//输出格式说明
//应至少包含所有学生的 学号，姓名，成绩。
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
//若出现编译 Warning，扣 1 分，若发现非法语句，如 system("pause") 和 goto 等，扣 2 分
//若出现非正常退出(Runtime Error)，按测试点视情况扣分
//【人工审核项】 若发现代码使用后续知识点，视情况扣分
//【人工审核项】 若代码书写不规范或整洁度极差(如变量取名不规范或没有按照锯齿型书写等)，视情况扣分
//【人工审核项】 不符合题目要求（如要求用递归完成而没有使用、没有错误性输入检测等），视情况扣分
//【人工审核项】  动态申请的内存不释放，扣 2 分
//直接输出答案而非程序运行结果的，0 分
//抄袭舞弊者，0 分
//输出样例1
//所有的学生信息如下：
//学号 : 1810000 姓名 : 张三 成绩 : 15
//学号 : 1810001 姓名 : 李四 成绩 : 95
//学号 : 1810002 姓名 : 王二 成绩 : 35
//学号 : 1810003 姓名 : 麻子 成绩 : 45
//学号 : 1810004 姓名 : 王五 成绩 : 75
//学号 : 1810005 姓名 : 赵六 成绩 : 85
//学号 : 1810006 姓名 : 钱七 成绩 : 65
//学号 : 1810007 姓名 : 孙八 成绩 : 55
//学号 : 1810008 姓名 : 杨九 成绩 : 25
//学号 : 1810009 姓名 : 吴十 成绩 : 100
//学号 : 1810010 姓名 : 刘冠军 成绩 : 23
//学号 : 1810011 姓名 : 赵红军 成绩 : 53
//学号 : 1810012 姓名 : 陈解放 成绩 : 76
//学号 : 1810013 姓名 : 李建国 成绩 : 85
//学号 : 1810014 姓名 : 李红衣 成绩 : 46
//学号 : 1810015 姓名 : 胡自强 成绩 : 74
//学号 : 1810016 姓名 : 武胜利 成绩 : 65
//学号 : 1810017 姓名 : 赵有才 成绩 : 25
//学号 : 1810018 姓名 : 刘飞跃 成绩 : 99
//学号 : 1810019 姓名 : 王大刚 成绩 : 78
//学号 : 1810020 姓名 : 牛顿 成绩 : 100
//学号 : 1810021 姓名 : 爱因斯坦 成绩 : 100
//学号 : 1810022 姓名 : 伽利略 成绩 : 100
//学号 : 1810023 姓名 : 冯诺依曼 成绩 : 100
//学号 : 1810024 姓名 : 图灵 成绩 : 100
//学号 : 1810025 姓名 : 高斯 成绩 : 100
//学号 : 1810026 姓名 : 欧拉 成绩 : 100
//学号 : 1810027 姓名 : 傅里叶 成绩 : 100
//学号 : 1810028 姓名 : 拉格朗日 成绩 : 100
//学号 : 1810029 姓名 : 莱布尼兹 成绩 : 100
//学号 : 1810030 姓名 : 唐僧 成绩 : 88
//学号 : 1810031 姓名 : 孙悟空 成绩 : 78
//学号 : 1810032 姓名 : 沙悟净 成绩 : 55
//学号 : 1810033 姓名 : 猪八戒 成绩 : 44
//学号 : 1810034 姓名 : 白龙马 成绩 : 76
//学号 : 1810035 姓名 : 观音菩萨 成绩 : 88
//学号 : 1810036 姓名 : 白骨精 成绩 : 0
//学号 : 1810037 姓名 : 玉皇大帝 成绩 : 100
//学号 : 1810038 姓名 : 牛魔王 成绩 : 10
//学号 : 1810039 姓名 : 金角大王 成绩 : 59
//学号 : 1810040 姓名 : 之赴宝 成绩 : 66
//学号 : 1810041 姓名 : 王大锤 成绩 : 66
//学号 : 1810042 姓名 : 乔治 成绩 : 0
//学号 : 1810043 姓名 : 佩奇 成绩 : 0
//学号 : 1810044 姓名 : 李狗蛋 成绩 : 1
//学号 : 1810045 姓名 : 刘大富 成绩 : 2
//学号 : 1810046 姓名 : 张翠花 成绩 : 3
//学号 : 1810047 姓名 : 尼古拉斯 成绩 : 60
//学号 : 1810048 姓名 : 赵四 成绩 : 26
//学号 : 1810049 姓名 : 东方富贵 成绩 : 100
//学号 : 1810050 姓名 : 小王 成绩 : 59
//学号 : 1810051 姓名 : 小李 成绩 : 61

#include <iostream>
#include <cstdio>
#include <cstring>

#include <thread>
#include <chrono>
//缓慢等待进入file

using namespace std;

//根据vs报错提示把读取的改成了fscanf_s，打开file也改成了fopen_s


struct student {
    int no;                // 学号
    char name[20];         // 姓名
    int score;             // 成绩
    struct student* next;  // 下一结点
    /*! 不允许修改上述结构 !*/
}student;
//好嘟好嘟知道噜 不修改就是了;


void addStudent(struct student*& head, int no, const char* name, int score);
void printList(struct student* head);
void freeList(struct student*& head);


int main() {
    //人性化输出提示
    //this_thread::sleep_for(chrono::seconds(1));
    cout << "Now, i would like to show all of the information of the classmates in the file that you have provided for me.\n";
    //this_thread::sleep_for(chrono::seconds(2));
    cout << "If u wanna to change another file, please change the path to the file.\n";
    //this_thread::sleep_for(chrono::seconds(1));
    /*for (int i = 0; i < 3; ++i) {
        cout << ".";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;*/



    // 相对路径
    const char* filePath = "student.txt";

    // 打开文件
    FILE* file;
    errno_t result = fopen_s(&file, filePath, "r");
    if (result != 0 || file == nullptr) {
        cerr << "无法打开文件" << endl;
        return 1;
    }

    //cout << "提取完成，下面是这个班级的数据：\n";
    //this_thread::sleep_for(chrono::seconds(2));

    // 读取第一行数据学生总数
    int total;
    result = fscanf_s(file, "%d", &total);
    if (result == EOF) {
        cerr << "读取学生总数失败" << endl;
        fclose(file);
        return 1;
    }
    cout << "学生总数: " << total << endl;

    // 定义链表头节点
    struct student* head = nullptr;

    // 读取文件内容并添加到链表中
    int studentID;
    char name[20];
    int score;   //这三个不是手动定义！是占个位来判断 为了迎合fscanf_s的使用条件
    while (fscanf_s(file, "%d %s %d", &studentID, name, static_cast<unsigned int>(sizeof(name)), &score) == 3) {
        //为了符合fscanf_s的函数定义 名字显式地换成了unsigned int
        addStudent(head, studentID, name, score);
    }

    // 关闭文件
    fclose(file);


    // 打印链表内容
    printList(head);

    // 释放链表内存
    freeList(head);

    return 0;
}

// 添加学生信息到链表
void addStudent(struct student*& head, int no, const char* name, int score) {
    struct student* newNode = (struct student*)malloc(sizeof(struct student));
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
void printList(struct student* head) {
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
        free(temp);

    }


    head = nullptr;
}