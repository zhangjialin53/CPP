//继承和派生 - 1 - 向日葵
//时间限制	1000ms	空间限制	1000MB
//
//题目描述
//Sunflower can't resist bouncing to the beat. Which beat is that? Why, the life-giving jazzy rhythm of the Earth itself, thumping at a frequency only Sunflower can hear.
//
//爱乐普第文学研究所打算扩展他们的游戏业务，他们首先把目标对准了植物大战僵尸。考虑到原本的游戏实现比较复杂，因此他们打算简化游戏逻辑，比如只设置1 - 1那样的一行地图，而且植物无冷却，阳光自动收集，发动攻击就直接造成伤害等等（具体见TODO）。此外，他们也不打算实现僵尸的设计。向日葵作为游戏中最重要的植物，自然被列为了最首要的实现任务。
//
//由于负责的同学对编程一窍不通，因此他花
//11.45
//元找来你外包，并且给了你一份参考资料。相信你能完成他的任务！
//
//本系列题目需要你模拟一些简单的小游戏，游戏的代码框架均会给出，你只需要根据规则介绍补全代码，并重点考虑类的实现。另外，请注意在实际游戏开发中，由于需要考虑的情况不同，这些类划分设计的方法可能并不适用，这里仅供大家练习用。
//
//TODO
//本题需要你继承基类 PlantBase ，实现派生类 SunFlower 。PlantBase 已经给出，不允许更改，但需要你在体外添加函数实现。
//
//class PlantBase {
//private:
//	int hp;				// 植物的生命值
//
//protected:
//	time_t plant_time;	// 植物被种下的时间
//	time_t interval;	// 植物攻击或生产的时间间隔
//
//public:
//	PlantBase(int hp, time_t interval);
//	bool hurt(int damage);
//};
//
//基本信息：向日葵生命值
//60
//，需要消耗
//50
//阳光，每
//5s
//生产
//25
//点阳光。请你自行设计派生类 SunFlower，将其属性和操作封装为数据成员和成员函数。
//
//游戏规则如下：
//
//初始阳光由用户输入，同时每
//3s
//环境会掉落
//25
//阳光。
//
//花圃（一排）共有
//9
//个位置，只要阳光充足且有空位置，玩家就会在最左侧的空位置放上向日葵。
//
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
//表示当前时间）。如果向日葵的生命值小于等于
//0
//，向日葵死亡， 该位置变为空位置。数值
//n
//由用户输入得到。
//
//游戏目标是在
//100s
//内生产出
//500
//阳光。如果当前时间
//t
//≥
//100
//且阳光不足，则游戏失败。另外，如果场上没有植物且僵尸已经发起进攻(
//	t
//	≥
//	n
//)，则提前判定游戏失败。
//
//【已在框架中给出，后续题目相同】在本组题目中，游戏内最短的时间间隔单位是
//1s
//，每一次均依次执行以下操作：
//
//环境掉落阳光。
//向日葵生产阳光。（模拟植物操作）
//玩家在最左侧的空位置放上指定的植物。（模拟玩家操作）
//最右侧的植物受到
//10
//∗
//(
//	t
//	−
//	n
//)
//的伤害。（模拟僵尸操作）
//判断游戏状态。
//已为你提供如下框架，请实现缺失的类和游戏主循环中的逻辑。你可以按需修改框架中已有的部分（除了规定不允许更改的部分）。
//
//#include <iostream>
//#define LAWN_LENGTH 9
//#define SUNLIGHT_TIME 3
//#define TARGET_SUNLIGHT 500
//using namespace std;
//
//time_t current = 0;  // 模拟记录时间，单位s
//
//class PlantBase {
//private:
//	int hp;				// 植物的生命值
//
//protected:
//	time_t plant_time;	// 植物被种下的时间
//	time_t interval;	// 植物攻击或生产的时间间隔
//
//public:
//	PlantBase(int hp, time_t interval);
//	bool hurt(int damage);
//};
//
///***********在这里给出PlantBase的实现***********/
//
///********************************************/
//
//
///********在这里给出SunFlower的声明和实现*********/
//
///********************************************/
//
//int main()
//{
//	/* 变量声明 */
//	SunFlower* lawn[LAWN_LENGTH] = {};
//	int plant_num = 0; // 记录植物总数
//
//	// 输入数据
//	int sunlight;
//	time_t n;
//	cin >> sunlight >> n;
//
//	while (true) {
//		// 1. 环境：每3/6/9/...s掉落一个25的阳光
//		if (current % SUNLIGHT_TIME == 0 && current > 0) {
//			sunlight += 25;
//		}
//
//		/* 2. 植物：产阳光 */
//
//
//		/* 3. 玩家：放植物（一次只能放一株）*/
//
//
//		/* 4. 僵尸：从第n秒开始，每一秒最右侧的向日葵会收到10*(current-n)的伤害 */
//
//
//		cout << "时刻数：" << current << " 阳光数：" << sunlight << " 植物数：" << plant_num << endl;
//
//		// 5. 游戏胜利/失败判断
//		if (sunlight >= TARGET_SUNLIGHT) {
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
//	// 内存回收
//	for (int i = 0; i < LAWN_LENGTH; ++i) {
//		if (lawn[i])
//			delete lawn[i];
//	}
//
//	return 0;
//}
//输入数据说明
//输入数据共两个整数，初始阳光
//S
//，僵尸发起进攻时间
//n
//.
//
//对于所有数据，保证
//0
//≤
//S
//<
//	500
//	，
//	0
//	≤
//	n
//	≤
//	100
//	。
//
//	不需要考虑输入错误。
//
//	输出格式说明
//	输出数据包括：
//	每时刻的状态
//	游戏成功 / 游戏失败
//	（框架中已经给出）
//
//	测试样例
//	样例1
//	输入：
//
//	0 6
//	输出：
//
//	时刻数：0 阳光数：0 植物数：0
//	时刻数：1 阳光数：0 植物数：0
//	时刻数：2 阳光数：0 植物数：0
//	时刻数：3 阳光数：25 植物数：0
//	时刻数：4 阳光数：25 植物数：0
//	时刻数：5 阳光数：25 植物数：0
//	时刻数：6 阳光数：0 植物数：1
//	时刻数：7 阳光数：0 植物数：1
//	时刻数：8 阳光数：0 植物数：1
//	时刻数：9 阳光数：25 植物数：0
//	游戏失败
//	解释：
//
//	初始阳光
//	0
//	，僵尸在第
//	6s
//	发起进攻。
//
//	① 时刻3，环境产生
//	25
//	点阳光。
//
//	② 时刻6，环境产生
//	25
//	点阳光，此时有
//	50
//	点阳光，可以种植一个向日葵。所以花费
//	50
//	点阳光，种植
//	1
//	个向日葵。此时僵尸发起进攻，对最右边的向日葵造成
//	10
//	∗
//	(
//		6
//		−
//		6
//	)
//	=
//	0
//	点伤害。
//
//	③ 时刻7，僵尸对最右边的向日葵造成
//	10
//	∗
//	(
//		7
//		−
//		6
//	)
//	=
//	10
//	点伤害。向日葵还剩
//	60
//	−
//	10
//	=
//	50
//	血量。
//
//	④ 时刻8，僵尸对最右边的向日葵造成
//	10
//	∗
//	(
//		8
//		−
//		6
//	)
//	=
//	20
//	点伤害。向日葵还剩
//	50
//	−
//	20
//	=
//	30
//	血量。
//
//	⑤ 时刻9，环境产生
//	25
//	点阳光，僵尸对最右边的向日葵造成
//	10
//	∗
//	(
//		9
//		−
//		6
//	)
//	=
//	30
//	点伤害。向日葵还剩
//	30
//	−
//	30
//	=
//	0
//	血量。向日葵死亡。此时场上没有任何植物，且僵尸已经发起进攻，游戏失败。
//
//	样例2
//	输入：
//
//	100 5
//	输出：
//
//	时刻数：0 阳光数：50 植物数：1
//	时刻数：1 阳光数：0 植物数：2
//	时刻数：2 阳光数：0 植物数：2
//	时刻数：3 阳光数：25 植物数：2
//	时刻数：4 阳光数：25 植物数：2
//	时刻数：5 阳光数：0 植物数：3
//	时刻数：6 阳光数：0 植物数：4
//	时刻数：7 阳光数：0 植物数：4
//	时刻数：8 阳光数：0 植物数：3
//	时刻数：9 阳光数：25 植物数：3
//	时刻数：10 阳光数：25 植物数：4
//	时刻数：11 阳光数：0 植物数：4
//	时刻数：12 阳光数：25 植物数：3
//	时刻数：13 阳光数：25 植物数：2
//	时刻数：14 阳光数：25 植物数：1
//	时刻数：15 阳光数：25 植物数：1
//	时刻数：16 阳光数：25 植物数：0
//	游戏失败
//	样例3
//	输入：
//
//	400 12
//	输出：
//
//	时刻数：0 阳光数：350 植物数：1
//	时刻数：1 阳光数：300 植物数：2
//	时刻数：2 阳光数：250 植物数：3
//	时刻数：3 阳光数：225 植物数：4
//	时刻数：4 阳光数：175 植物数：5
//	时刻数：5 阳光数：150 植物数：6
//	时刻数：6 阳光数：150 植物数：7
//	时刻数：7 阳光数：125 植物数：8
//	时刻数：8 阳光数：100 植物数：9
//	时刻数：9 阳光数：150 植物数：9
//	时刻数：10 阳光数：200 植物数：9
//	时刻数：11 阳光数：250 植物数：9
//	时刻数：12 阳光数：325 植物数：9
//	时刻数：13 阳光数：375 植物数：9
//	时刻数：14 阳光数：400 植物数：9
//	时刻数：15 阳光数：475 植物数：8
//	时刻数：16 阳光数：475 植物数：9
//	时刻数：17 阳光数：525 植物数：8
//	游戏胜利
//	时刻
//	17
//	的游戏进程顺序如下：
//
//	① 环境不掉落阳光。
//
//	② 两株向日葵产出阳光，总阳光达到
//	525
//	。
//
//	③ 场上植物种满，玩家不种植向日葵。
//
//	④ 最右侧向日葵受到
//	50
//	点伤害，生命值为
//	20
//	−
//	50
//	=
//	−
//	30
//	<
//	0
//	，向日葵死亡。
//
//	⑤ 阳光数量
//	525
//	>
//	500
//	，游戏胜利。


#include <iostream>
#define LAWN_LENGTH 9
#define SUNLIGHT_TIME 3
#define TARGET_SUNLIGHT 500
using namespace std;

int current = 0;  // 模拟记录时间，单位s

class PlantBase {
private:
    int hp;             // 植物的生命值

protected:
    int plant_time;     // 植物被种下的时间
    int interval;       // 植物攻击或生产的时间间隔

public:
    PlantBase(int hp, int interval);
    bool hurt(int damage);
};

/***********在这里给出PlantBase的实现***********/
PlantBase::PlantBase(int hp, int interval) : hp(hp), interval(interval) {
    plant_time = current;
}

bool PlantBase::hurt(int damage) {
    hp -= damage;
    return hp <= 0;
}
/********************************************/

/********在这里给出SunFlower的声明和实现*********/
class SunFlower : public PlantBase {
private:
    int next_produce_time;

public:
    SunFlower();
    int produce();
};

SunFlower::SunFlower() : PlantBase(60, 5) {
    next_produce_time = plant_time + interval;
}

int SunFlower::produce() {
    if (current >= next_produce_time) {
        next_produce_time += interval;
        return 25;
    }
    return 0;
}
/********************************************/

int main()
{
    /* 变量声明 */
    SunFlower* lawn[LAWN_LENGTH] = {};
    int plant_num = 0; // 记录植物总数

    // 输入数据
    int sunlight;
    int n;
    cin >> sunlight >> n;

    while (true) {
        // 1. 环境：每3/6/9/...s掉落一个25的阳光
        if (current % SUNLIGHT_TIME == 0 && current > 0) {
            sunlight += 25;
        }

        /* 2. 植物：产阳光 */
        for (int i = 0; i < LAWN_LENGTH; ++i) {
            if (lawn[i]) {
                sunlight += lawn[i]->produce();
            }
        }

        /* 3. 玩家：放植物（一次只能放一株）*/
        if (sunlight >= 50) {
            for (int i = 0; i < LAWN_LENGTH; ++i) {
                if (!lawn[i]) {
                    lawn[i] = new SunFlower();
                    sunlight -= 50;
                    ++plant_num;
                    break;
                }
            }
        }

        /* 4. 僵尸：从第n秒开始，每一秒最右侧的向日葵会受到10*(current-n)的伤害 */
        if (current >= n) {
            for (int i = LAWN_LENGTH - 1; i >= 0; --i) {
                if (lawn[i]) {
                    int damage = 10 * (current - n);
                    bool dead = lawn[i]->hurt(damage);
                    if (dead) {
                        delete lawn[i];
                        lawn[i] = nullptr;
                        --plant_num;
                    }
                    break;
                }
            }
        }

        cout << "时刻数：" << current << " 阳光数：" << sunlight << " 植物数：" << plant_num << endl;

        // 5. 游戏胜利/失败判断
        if (sunlight >= TARGET_SUNLIGHT) {
            cout << "游戏胜利" << endl;
            break;
        }
        else if (current >= n && plant_num == 0) {  // 提前判定失败
            cout << "游戏失败" << endl;
            break;
        }
        else if (current >= 100) {  // 如果第100秒过去仍未积累足够阳光，则判负
            cout << "游戏失败" << endl;
            break;
        }

        current++;
    }

    // 内存回收
    for (int i = 0; i < LAWN_LENGTH; ++i) {
        if (lawn[i])
            delete lawn[i];
    }

    return 0;
}
