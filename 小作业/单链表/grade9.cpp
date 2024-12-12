//单链表 - 成绩管理 - 9 - 学生成绩管理系统
//时间限制	1000ms	空间限制	256MB
//
//阅读下面的文言文，完成1 - 3题。（10分）
//
//全寝挂科，非题不利，学不善，弊在摆烂。摆烂而无术，挂科之道也。或曰：四人互挂，率摆烂耶？曰：不摆者以摆者缓考。盖失强援，不能独完。故曰：弊在摆烂也。 课以签到之外，小则应付，大则不学。较学之所得，与摆烂而得者，其实百倍；缓考之所亡，与不缓而亡者，其实亦百倍。则课程之所大欲，同学之所大患，固不在考矣。思厥先学长，暴霜露，斩荆棘，总结尺寸之经验。后人视之不甚惜，举以缓考，如弃草芥。今日缓五科，明日缓十科，然后得一夕安寝。起视日历，而考试又至矣。然则考试之科有限，摆烂之欲无厌，缓之弥繁，摆之愈急。故不考而优良胜负已判矣。至于挂科，理固宜然。古人云：“以缓事考，犹抱薪救火，薪不尽，火不灭。”此言得之。 齐人未尝摆烂，终继舍友迁灭，何哉？与外人而不助舍友也。舍友既挂，齐亦不免矣。燕赵之君，始有远略，自成其学，义不缓考。是故燕虽愚钝而后挂，斯学习之效也。至友以染疾为计，始速祸焉。赵尝五战于期末，二优而三良。后计图考赵者再，线上连却之。洎线上以作弊诛，考试零分，惜其好学而不终也。且燕赵处科目缓考殆尽之际，可谓智力孤危，学败而挂，诚不得已。向使三人各学其科，齐人勿附于外人，作弊不行，健康犹在，则胜负之数，优良之理，当与摆烂相较，或未易量。 呜呼！以缓考之时学考试之知识，以作弊之心研考试之科目，并力复习，则吾恐出题人食之不得下咽也。悲夫！有如此之势，而为惰性积摆之所染，日摆月摆，以趋于挂。为学者无使为积摆之所劫哉！ 夫全寝与辅修皆学生，其科少于辅修，而犹有可以不缓而过之之势。苟以重修之利，下而从全寝挂科之故事，是又在全寝下矣。
//
//翻译全文。（0分）
//
//你有什么思考？谈谈这对你的期末考试有什么启发。（0分）
//
//完成下面的编程题。（10分）
//
//本题你需要从文件中读取所有学生的信息，文件内容请 点击下载 查看，下载后使用相对路径 student.txt 方便本地调试。
//
//本题为综合题，你需要将 单链表 - 成绩管理 - 1~8 的所有相关函数进行封装，并设计体验良好的 GUI。
//
//注意：
//
//分别把前置题目中涉及的相关功能封装成函数在此题中调用使用：disp(), count(), sort(), searchbyID(), delbyID(), modibyID(), addbyID(), read(), 并建议将相关释放步骤放到函数 quit()，在本题中调用使用，自行设计函数结构。
//本题退出相关模块不需要打印名单，单独模块(模块 4, 5, 6, 7) 内仍需要考虑设计循环读取，具体指令请看测试点详情。
//开发程序框架供你参考如下：
//void menu()
//{
//    int i;
//    std::cout << std::endl;
//    for (i = 0; i < 57; i++)
//    {
//        std::cout << '*';
//    }
//    std::cout << std::endl;
//    std::cout << "*\t1 显示记录\t2 统计记录\t3 排序记录\t*\n";
//    std::cout << "*\t4 查找记录\t5 删除记录\t6 修改记录\t*\n";
//    std::cout << "*\t7 添加记录\t0 退出系统\t\t\t*\n";
//    for (i = 0; i < 57; i++)
//    {
//        std::cout << '*';
//    }
//}
//
//int main()
//{
//    int choice; // 保证输入的为正整数数字
//    char ch;
//    read(*); // 在这里读取文件或作初始化操作，自行设计
//    menu();  // 调用菜单显示函数，为防止输出超出限度，请将此项放在循环外部
//
//    while (true) // 注意该循环退出的条件
//    {
//        std::cout << "选择菜单项(0~7):";
//        std::cin >> choice;
//        if (choice == 0) // 选择退出
//        {
//            std::cout << "\n 确定退出吗?(y/n)" << std::endl;
//            std::cin >> ch;
//            if (ch == 'y' || ch == 'Y')
//            {
//                quit(*); // 自行设计
//                break;
//            }
//            else
//                continue;
//        }
//        switch (choice)
//        {
//        case 1:
//            disp(*); // 自行设计
//            break;
//        case 2:
//            count(*); // 自行设计
//            break;
//        case 3:
//            sort(*); // 自行设计
//            break;
//        case 4:
//            searchbyID(*); // 自行设计
//            break;
//        case 5:
//            delbyID(*); // 自行设计
//            break;
//        case 6:
//            modibyID(*); // 自行设计
//            break;
//        case 7:
//            addbyID(*); // 自行设计
//            break;
//        default:
//            std::cout << "\n输入错误，请从新输入" << std::endl;
//        }
//    }
//    return 0;
//}
//本题不需要考虑非法输入。
//如果点击提交之后没有反应，检查代码中是否有system函数，如果有，删掉再提交（包括注释里）
//输入数据说明
//本题文件内容描述请见前置题目，标准输入每个测试点将有不定长度的输入，输入以 n 结束。
//将给出不定长度行的输入，每行包含不定项数据。
//首先会给出菜单操作的指令，该指令为整型，数据范围 0~7，保证指令的合法性。
//对应指令的操作输入数据格式请参考前置题目。
//注意非循环读取的操作（如排序和输出）请 不要 询问是否继续。
//输出格式说明
//应给出相关操作之后所对应的不合法语句，请参考前置题目。
//对应指令的输出格式请参考前置题目。
//输出应该考虑人性化提示。
//限制
//不允许使用尚未讲授过的后续课程中的知识点
//过程中请给出相应的输入提示与输出提示
//程序编写应符合锯齿型的书写格式
//不允许使用 goto
//除明确要求外，不允许使用 C++ 的 std::string 类
//本题允许的提示语句列表与前置题目中的要求不变
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
//直接输出答案而非程序运行结果的，0 分
//抄袭舞弊者，0 分

#include <iostream>
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
    struct student* head = nullptr;
    int choice;
    char ch = '\0';
    read(head);
    menu();
    int id;

    while (true) {
        cout << "选择菜单项(0~7):";
        cin >> choice;
        if (choice == 0) {
            return 0;
        }
        switch (choice) {
        case 1://显示记录
            disp(head);
            break;
        case 2://统计
            int a, b, c, d, e;
            count(head, a, b, c, d, e);
            break;
        case 3://排序
            sort(head);
            break;
        case 4://查找
            while (1) {
                cout << "请输入查找的学生ID: ";
                cin >> id;
                searchbyID(head, id);
                if (!isContinue()) break;
            }
            break;
        case 5://删除
            while (1) {
                cout << "请输入删除的学生ID: ";
                cin >> id;
                delbyID(head, id);
                if (!isContinue()) break;

            }
            break;
        case 6://修改
            while (1) {
                cout << "请输入修改的学生ID及其新的成绩: ";
                cin >> id;

                modibyID(head, id);
                if (!isContinue()) break;
            }
            break;
        case 7://添加
            while (1) {
                cout << "请输入添加的学生学号: \n";

                //char newName2[20];
                cin >> id;
                addbyID(head, id);
                if (!isContinue()) break;
            }
            break;
        default:
            cout << "\n输入错误，请重新输入" << endl;
        }
    }
    return 0;
}


void addStudent(struct student*& head, int no, const char* name, int score) {
    struct student* newNode = new (nothrow) student;
    if (!newNode) {
        cerr << "内存分配失败" << endl;
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
        cout << "学号: " << current->no << " 姓名: " << current->name << " 成绩: " << current->score << endl;
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
    cout << "优：" << a << "人 良：" << b << "人 中：" << c << "人 及格：" << d << "人 不及格：" << e << "人" << endl;
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
        cout << "学号: " << current->no << " 姓名: " << current->name << " 成绩: " << current->score << endl;
        current = current->next;
    }*/
}

void searchbyID(struct student*& head, int id) {
    bool found = false;
    struct student* current = head;
    while (current != nullptr) {
        if (current->no == id) {
            cout << "已检索到该学生: 学号: " << current->no << " 姓名: " << current->name << " 成绩: " << current->score << endl;
            found = true;
            break;
        }
        current = current->next;
    }

    if (!found) {
        cout << "不存在\n";
    }
}

void delbyID(struct student*& head, int id) {
    struct student* current = head;
    struct student* prev = nullptr;

    while (current != nullptr) {
        if (current->no == id) {
            if (prev == nullptr) {
                // 如果是要删除的是头节点
                head = current->next;
                prev = current->next;
            }
            else {
                // 如果是要删除的是中间或尾节点
                prev->next = current->next;
            }
            delete current;
            cout << "删除成功\n";
            return;
        }
        prev = current;
        current = current->next;
    }

    cout << "不存在\n";
}
//
//void delbyID(int& query, struct student*& head) {
//    /* 执行查询 */
//    bool found = 0;
//    struct student* current = head;
//    struct student* prev = head;//previous one
//
//    while (current != nullptr && found == 0) {
//        if (query == current->no) {
//            //delete the student
//            if (current == head) {
//                //特殊情况！！！！！！！！！
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
//            cout << "删除成功\n";
//        }
//        else {
//            prev = current;
//        }
//        current = current->next;
//    }
//    if (found == 0) {
//        //cout << "抱歉，您输入的学号不在本班级内。\n";
//        cout << "不存在\n";
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
            cout << "已检索到该学生，请问您想将其分数修改为多少？\n";
            int newScore = 0;
            cin >> newScore;
            current->score = newScore;

            //cout << "成绩已修改为：" << current->score << endl;
        }
        else {
            prev = current;
            current = current->next;
        }
    }

    if (!found) {
        cout << "不存在\n";
    }
}

void addbyID(struct student*& head, int id) {
    bool found = false;
    struct student* current = head;
    struct student* prev = nullptr;

    while (current != nullptr && !found) {
        if (current->no == id) {
            found = true;
            cout << "学生已存在\n";
            return;
        }
        else {
            prev = current;
            current = current->next;
        }
    }

    if (!found) {
        cout << "请输入其姓名、成绩\n";
        char name_add[20];
        int score_new = 0;
        cin >> name_add >> score_new;
        addStudent(head, id, name_add, score_new);
    }

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
    int score;

    while (file >> studentID >> name >> score) {
        addStudent(head, studentID, name, score);
    }//这也太方便了。。。
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
    cout << "*\t1 显示记录\t2 统计记录\t3 排序记录\t*\n";
    cout << "*\t4 查找记录\t5 删除记录\t6 修改记录\t*\n";
    cout << "*\t7 添加记录\t0 退出系统\t\t\t*\n";
    for (i = 0; i < 57; i++) {
        cout << '*';
    }
}