//继承和派生 - 4 - 阳光豌豆
//时间限制	1000ms	空间限制	1024MB
//
//题目描述
//SunnyPea is always excluded by both "pea family" and "sunshine family" because of his dual identity. "I didn't do anything wrong," he complained in frustration, "I can't go back to that night and tell them not to get drunk."
//
//研究所对目前的复现成果很满意，他们打算进一步做一些创新内容。他们看了你前面做的项目，并对这款游戏进行了深入的研究（指集齐游戏全成就），发现能生产阳光的植物都不能攻击，能攻击的植物都不能生产阳光——也许你可以将向日葵和豌豆射手结合到一种植物上，研究出一种叫做“阳光豌豆”的植物。
//
//TODO
//本题需要你：
//
//继承基类 PlantBase ，得到派生类 PeaShooter 和 SunFlower。（注意 PlantBase 在本题中移除了复制构造函数）
//继承 PeaShooter 和 SunFlower ，得到派生类 SunnyPea 。
//PlantBase 已经给出，不允许更改，但需要你在体外添加函数实现。
//
//注意：本题存在菱形继承关系，你需要考虑如何确保基类在派生类中只有一份内存。
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
//基本信息：** 阳光豌豆生命值
//60
//，需要消耗
//125
//点阳光，每
//2s
//进行一次攻击，造成
//10
//点伤害；另外，其每
//5s
//还会生产
//25
//点阳光。 * *请自行设计几个派生类，将其属性和操作封装为数据成员和成员函数。
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
//个位置，只要阳光充足且有空位置，玩家就会在最左侧的空位置放上阳光豌豆。植物名字由用户输入得到。
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
//1000
//伤害，如果当前时间
//t
//≥
//100
//且伤害不足，则游戏失败。另外，如果场上没有植物且僵尸已经发起进攻(
//	t
//	≥
//	n
//)，则提前判定游戏失败。
//参考框架见第二题。
//
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
//125 10
//AAA
//BBB
//输出
//
//游戏失败
//
//时刻数：15 阳光数：75 植物数：0
//
//每一株植物种下的时刻：
//0 10
//样例2
//输入
//
//750 20
//AAA
//BBB
//CCC
//DDD
//EEE
//FFF
//GGG
//HHH
//III
//JJJ
//KKK
//LLL
//MMM
//NNN
//输出
//
//游戏胜利
//
//时刻数：29 阳光数：175 植物数：8
//
//每一株植物种下的时刻：
//0 1 2 3 4 5 7 10 13 24 26 27 28 29
//
//幸存植物的名字：
//AAA
//BBB
//CCC
//DDD
//EEE
//FFF
//GGG
//HHH
//样例3
//输入
//
//0 100
//AAA
//BBB
//CCC
//DDD
//EEE
//FFF
//GGG
//HHH
//III
//输出
//
//游戏胜利
//
//时刻数：64 阳光数：375 植物数：9
//
//每一株植物种下的时刻：
//15 25 33 39 44 48 51 54 58
//
//幸存植物的名字：
//AAA
//BBB
//CCC
//DDD
//EEE
//FFF
//GGG
//HHH
//III


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
#include <ctime>
#include <chrono>

#define LAWN_LENGTH 9
#define SUNLIGHT_TIME 3
#define TARGET_DAMAGE 1000
#define ATTACK_INTERVAL 2
#define SUNLIGHT_GENERATE_INTERVAL 5

using namespace std;

time_t current = 0;  // 模拟记录时间，单位s

/*************基类声明**************/
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



/**********派生类声明和实现***********/
class PeaShooter : virtual public PlantBase {
public:
    PeaShooter() : PlantBase(60, 100) {}

    int attack() const {
        return 10;  // 每次攻击10点伤害
    }
};

class SunFlower : virtual public PlantBase {
public:
    SunFlower() : PlantBase(60, 50) {}

    int generate_sunlight() const {
        return 25;  // 每次生成25点阳光
    }
};

class SunnyPea : public PeaShooter, public SunFlower {
private:
    time_t local_plant_time;

public:
    SunnyPea() : PlantBase(60, 125), local_plant_time(current) {}

    int attack() const {
        return PeaShooter::attack();
    }

    int generate_sunlight() const {
        return SunFlower::generate_sunlight();
    }

    time_t get_local_plant_time() const {
        return local_plant_time;
    }
    ~SunnyPea() {}
};

/*************全局函数实现**************/
//void set_name(PlantBase& plant, const char* newName) {
//    strncpy_s(plant.get_name(), 20, newName, 19);
//    plant.get_name()[19] = '\0';
//}
void set_name(SunnyPea& plant, const char* newName) {
    strncpy_s(plant.get_name(), 20, newName, 19);
    plant.get_name()[19] = '\0';
}

/*************主程序**************/
int main() {
    int sunlight, damage = 0, plant_num = 0;
    time_t n;
    //vector<PlantBase*> lawn(LAWN_LENGTH, nullptr);  // 花圃
    vector<SunnyPea*> lawn(LAWN_LENGTH, nullptr);  // 花圃
    vector<time_t> plant_times;
    vector<string> plant_names;

    // 输入阳光和僵尸进攻时间
    cin >> sunlight >> n;

    // 提前输入所有植物的名字
    string temp_name;
    while (cin >> temp_name) {
        plant_names.push_back(temp_name);
    }

    int name_index = 0;  // 名字索引

    while (true) {
        // 1. 环境：每3秒掉落25点阳光
        if (current % SUNLIGHT_TIME == 0 && current > 0) {
            sunlight += 25;
        }

        // 2. 植物：发动攻击并生成阳光
        for (int i = 0; i < LAWN_LENGTH; i++) {
            /*if (lawn[i] != nullptr) {
                auto sunny_pea = dynamic_cast<SunnyPea*>(lawn[i]);
                if (sunny_pea) {
                    if ((current - sunny_pea->get_local_plant_time()) % ATTACK_INTERVAL == 0) {
                        damage += sunny_pea->attack();
                    }
                    if ((current - sunny_pea->get_local_plant_time()) % SUNLIGHT_GENERATE_INTERVAL == 0) {
                        sunlight += sunny_pea->generate_sunlight();
                    }
                }
            }*/
            if (lawn[i] != nullptr) {
                // 直接使用 lawn[i] 作为 SunnyPea* 类型
                if ((current - lawn[i]->get_local_plant_time()) % ATTACK_INTERVAL == 0) {
                    damage += lawn[i]->attack();
                }
                if ((current - lawn[i]->get_local_plant_time()) % SUNLIGHT_GENERATE_INTERVAL == 0) {
                    sunlight += lawn[i]->generate_sunlight();
                }
            }


        }




        // 3. 玩家：种植阳光豌豆
        bool planted = false;
        for (int i = 0; i < LAWN_LENGTH; i++) {
            if (lawn[i] == nullptr && sunlight >= 125) {
                sunlight -= 125;
                SunnyPea* newPlant = new SunnyPea();

                if (name_index < plant_names.size()) {
                    set_name(*newPlant, plant_names[name_index++].c_str());
                }
                else {
                    set_name(*newPlant, "Unnamed");
                }

                lawn[i] = newPlant;
                plant_times.push_back(current);
                plant_num++;
                cout << "时刻 " << current << ": 已种植 SunnyPea: " << newPlant->get_name() << endl;
                planted = true;
                break;
            }
        }

        // 4. 僵尸进攻
        if (current >= n) {
            for (int i = LAWN_LENGTH - 1; i >= 0; i--) {
                if (lawn[i] != nullptr) {
                    if (lawn[i]->hurt(10 * static_cast<int>(current - n))) {
                        cout << "时刻 " << current << ": 植物被吃掉: " << lawn[i]->get_name() << endl;
                        delete lawn[i];
                        lawn[i] = nullptr;
                        plant_num--;
                    }
                    break;
                }
            }
        }

        // 5. 输出状态
        cout << "时刻 " << current
            << " | 阳光: " << sunlight
            << " | 累计伤害: " << damage << endl;

        // 胜利/失败判断
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

    // 输出结果
    cout << "时刻数：" << current << " 阳光数：" << sunlight << " 植物数：" << plant_num << endl;

    cout << "每一株植物种下的时刻：" << endl;
    for (time_t time : plant_times) {
        cout << time << " ";
    }
    cout << endl;

    cout << "幸存植物的名字：" << endl;
    for (int i = 0; i < LAWN_LENGTH; i++) {
        if (lawn[i] != nullptr) {
            cout << lawn[i]->get_name() << endl;
        }
    }

    // 清理内存
    for (int i = 0; i < LAWN_LENGTH; i++) {
        delete lawn[i];
    }

    return 0;
}
