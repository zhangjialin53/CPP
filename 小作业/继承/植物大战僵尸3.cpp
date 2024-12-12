//继承和派生 - 2 - 豌豆射手
//时间限制	1000ms	空间限制	1024MB
//
//题目描述
//How can a single plant grow and shoot so many peas so quickly ? Peashooter says, "Hard work, commitment, and a healthy, well-balanced breakfast of sunlight and high-fiber carbon dioxide make it all possible."
//
//如果只有向日葵全然是无法抵挡僵尸的进攻的。不过，一刻也没有为被吃掉的向日葵而哀悼，立刻赶来战场的是——豌豆射手！他们帮玩家保护了他们的房子，因此值得拥有姓名。也就是说，玩家需要给他们命名。（是的，你要开始考虑动态内存申请了！）
//
//这一次外包的价格涨到了
//19.19
//元，所以赶紧行动起来吧！
//
//TODO
//本题需要你继承基类 PlantBase ，得到派生类 PeaShooter。PlantBase 已经给出，不允许更改，但需要你在体外添加函数实现。 与上一题不同的是，本题需要用户对每一株植物进行命名。
//
//class PlantBase {
//private:
//	int hp;			// 植物的生命值
//	char* name;		// 植物的名字（长度不超过20）
//
//protected:
//	int cost;		// 种植花费的阳光
//	time_t plant_time;	// 植物被种下的时间
//
//public:
//	PlantBase(int hp, int cost);
//	~PlantBase();
//	bool hurt(int damage);
//	char* get_name();
//};
//基本信息：** 豌豆射手生命值
//60
//，需要消耗
//100
//点阳光，每
//2s
//进行一次攻击，造成
//10
//点伤害。 * *请自行设计派生类 PeaShooter，将其属性和操作封装为数据成员和成员函数。
//
//游戏规则如下：
//
//初始阳光由用户输入，同时每
//3s
//环境会掉落
//25
//阳光。
//花圃（一排）共有
//9
//个位置，只要阳光充足且有空位置，玩家就会在最左侧的空位置放上豌豆射手。植物名字由用户输入得到。
//从第
//n
//秒开始，僵尸发起进攻，每秒钟最右侧的植物会受到
//10
//∗
//(
//	t
//	−
//	n
//)
//的伤害（其中
//t
//表示当前时间）。如果植物的生命值小于等于
//0
//，植物死亡， 该位置变为空位置。数值
//n
//由用户输入得到。
//游戏目标是在
//100s
//内造成
//500
//伤害，如果当前时间
//t
//≥
//100
//且伤害不足，则游戏失败。另外，如果场上没有植物且僵尸已经发起进攻(
//	t
//	≥
//	n
//)，则提前判定游戏失败。
//已为你提供如下框架，请实现缺失的类和游戏主循环中的逻辑。你可以按需修改框架中已有的部分（除了规定不允许更改的部分）。后续题目均以本框架为参考。
//
//#include <iostream>
//#define LAWN_LENGTH 9
//#define SUNLIGHT_TIME 3
//#define TARGET_DAMAGE 500
//using namespace std;
//
//time_t current = 0;  // 模拟记录时间，单位s
//
///*************将基类的声明拷贝至此**************/
//
///********************************************/
//
//
///*************在这里给出基类的实现**************/
//
///********************************************/
//
//
///**********在这里给出派生类的声明和实现***********/
//
///********************************************/
//
//
//int main()
//{
//	/* 变量声明 */
//	int plant_num = 0; // 记录植物总数
//
//	// 输入数据
//	int sunlight, damage;
//	time_t n;
//	cin >> sunlight >> n;
//
//	while (true) {
//		// 1. 环境：每3/6/9/...s掉落一个25的阳光
//		if (current % SUNLIGHT_TIME == 0 && current > 0) {
//			sunlight += 25;
//		}
//
//		/* 2. 植物：发动攻击 */
//
//
//		/* 3. 玩家：放植物（一次只能放一株）*/
//
//
//		/* 4. 僵尸：从第n秒开始，每一秒最右侧的植物会收到10*(current-n)的伤害 */
//
//
//		// 5. 游戏胜利/失败判断
//		if (damage >= TARGET_DAMAGE) {
//			cout << "游戏胜利" << endl;
//			break;
//		}
//		else if (current >= n && plant_num == 0) {  // 提前判定失败
//			cout << "游戏失败" << endl;
//			break;
//		}
//		else if (current >= 100) {  // 如果第100秒过去仍未积累足够阳光，则判负
//			cout << "游戏失败" << endl;
//			break;
//		}
//
//		current++;
//	}
//
//	cout << "时刻数：" << current << " 阳光数：" << sunlight << " 植物数：" << plant_num << endl;
//
//	/* 其他输出与内存回收 */
//
//
//	return 0;
//}
//输入数据说明
//输入数据包括：
//两个整数，初始阳光
//S
//，僵尸发起进攻时间
//n
//.
//每株种下植物的名字（输入顺序与种植时间顺序对应）。
//对于所有数据，保证
//0
//≤
//S
//≤
//1000
//，
//0
//≤
//n
//≤
//100
//。
//不需要考虑输入错误。
//输出格式说明
//输出数据包括：
//游戏成功 / 游戏失败
//游戏结束时刻信息（时刻数、阳光数、植物数）
//每一株植物种下的时刻（如果有）
//每一株幸存植物的名字（如果有），一行一个
//样例
//样例1
//输入
//
//50 10
//PoorPea
//输出
//
//游戏失败
//
//时刻数：13 阳光数：50 植物数：0
//
//每一株植物种下的时刻：
//6
//样例2
//输入
//
//1000 100
//第一株豌豆
//第二株豌豆
//第三株豌豆
//第四株豌豆
//第五株豌豆
//第六株豌豆
//第七株豌豆
//第八株豌豆
//第九株豌豆
//输出
//
//游戏胜利
//
//时刻数：16 阳光数：225 植物数：9
//
//每一株植物种下的时刻：
//0 1 2 3 4 5 6 7 8
//
//幸存植物的名字：
//第一株豌豆
//第二株豌豆
//第三株豌豆
//第四株豌豆
//第五株豌豆
//第六株豌豆
//第七株豌豆
//第八株豌豆
//第九株豌豆
//样例3
//输入
//
//600 13
//玉米
//卷心菜
//西红柿
//胡萝卜
//土豆
//南瓜
//西瓜
//输出
//
//游戏胜利
//
//时刻数：20 阳光数：50 植物数：3
//
//每一株植物种下的时刻：
//0 1 2 3 4 5 12
//
//幸存植物的名字：
//玉米
//卷心菜
//西红柿


#include <iostream>
#include <cstring>
#include <vector>
#include <ctime>
#define LAWN_LENGTH 9
#define SUNLIGHT_TIME 3
#define TARGET_DAMAGE 500
#define ATTACK_INTERVAL 2  // 每2秒攻击一次
using namespace std;

time_t current = 0;  // 模拟记录时间，单位s

/*************将基类的声明拷贝至此**************/
class PlantBase {
private:
    int hp;         // 植物的生命值
    char* name;     // 植物的名字（长度不超过20）

protected:
    int cost;       // 种植花费的阳光
    time_t plant_time;  // 植物被种下的时间

public:
    PlantBase(int hp, int cost);
    ~PlantBase();
    bool hurt(int damage);
    char* get_name();
};

/********************************************/

/*************在这里给出基类的实现**************/
PlantBase::PlantBase(int hp, int cost) : hp(hp), cost(cost), plant_time(current) {
    name = new char[20];
    name[0] = '\0';  // 初始化为空字符串
}

PlantBase::~PlantBase() {
    delete[] name;
}

bool PlantBase::hurt(int damage) {
    hp -= damage;
    return hp <= 0;
}

char* PlantBase::get_name() {
    return name;
}
/********************************************/

/**********在这里给出派生类的声明和实现***********/
class PeaShooter : public PlantBase {
public:
    PeaShooter() : PlantBase(60, 100) {}

    int attack() const {
        return 10;  // 每次攻击造成10点伤害
    }

    // 提供访问 cost 和 plant_time 的方法
    int get_cost() const {
        return cost;
    }

    time_t get_plant_time() const {
        return plant_time;
    }
};

/********************************************/

// 设置名字
void set_name(PlantBase& plant, const char* newName) {
    strncpy_s(plant.get_name(), 20, newName, 19);  // 修正 strncpy_s 使用
}


int main() {
    /* 变量声明 */
    int sunlight, damage = 0, plant_num = 0;
    time_t n;
    vector<PeaShooter*> lawn(LAWN_LENGTH, nullptr);
    vector<time_t> plant_times;
    vector<string> alive_plants;

    cin >> sunlight >> n;

    while (true) {
        // 1. 环境：每3/6/9/...s掉落一个25的阳光
        if (current % SUNLIGHT_TIME == 0 && current > 0) {
            sunlight += 25;
        }

        /* 2. 植物：发动攻击 */
        for (int i = 0; i < LAWN_LENGTH; i++) {
            if (lawn[i] != nullptr) {
                time_t plant_time = lawn[i]->get_plant_time();  // 使用 PeaShooter 的接口
                if ((current - plant_time) % ATTACK_INTERVAL == 0) {
                    damage += lawn[i]->attack();
                    // 输出当前时刻和累计伤害
                    cout << "时刻：" << current << " 累计伤害：" << damage << endl;
                }
            }
        }

        /* 3. 玩家：放植物（一次只能放一株）*/
        if (sunlight >= 100) {
            for (int i = 0; i < LAWN_LENGTH; i++) {
                if (lawn[i] == nullptr) {
                    PeaShooter* newPlant = new PeaShooter();
                    sunlight -= newPlant->get_cost();  // 使用 PeaShooter 的接口

                    string plant_name;
                    cin >> plant_name;
                    set_name(*newPlant, plant_name.c_str());  // 使用全局函数设置名字
                    lawn[i] = newPlant;

                    plant_times.push_back(current);
                    plant_num++;
                    break;
                }
            }
        }

        /* 4. 僵尸：从第n秒开始，每一秒最右侧的植物会收到10*(current-n)的伤害 */
        if (current >= static_cast<int>(n)) {
            for (int i = LAWN_LENGTH - 1; i >= 0; i--) {
                if (lawn[i] != nullptr) {
                    if (lawn[i]->hurt(10 * static_cast<int>(current - n))) {
                        delete lawn[i];
                        lawn[i] = nullptr;
                        plant_num--;
                    }
                    break;
                }
            }
        }

        // 5. 游戏胜利/失败判断
        if (damage >= TARGET_DAMAGE) {
            cout << "游戏胜利" << endl;
            break;
        }
        else if (current >= n && plant_num == 0) {
            cout << "游戏失败" << endl;
            break;
        }
        else if (current >= 100) {
            cout << "游戏失败" << endl;
            break;
        }

        current++;
    }

    // 输出游戏状态
    cout << "时刻数：" << current << " 阳光数：" << sunlight << " 植物数：" << plant_num << endl;

    cout << "每一株植物种下的时刻：" << endl;
    for (time_t time : plant_times) {
        cout << time << " ";
    }
    cout << endl;

    cout << "幸存植物的名字：" << endl;
    for (int i = 0; i < LAWN_LENGTH; i++) {
        if (lawn[i] != nullptr) {
            alive_plants.push_back(lawn[i]->get_name());
        }
    }

    for (const string& name : alive_plants) {
        cout << name << endl;
    }

    // 清理内存
    for (int i = 0; i < LAWN_LENGTH; i++) {
        delete lawn[i];
    }

    /* 其他输出与内存回收 */
    return 0;
}
