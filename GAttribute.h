/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2024-12-15 21:17:18
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2024-12-15 22:08:34
 * @FilePath: \game_test\GAttribute.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/**
 * @brief 控制状态 16二进制 前八位为层数 后八位分别作为状态
 */
enum class DebuffControll{
    none = 0,
    /**
     * @brief 震慑
     */
    awe = 1,
    /**
     * @brief 缴械
     */
    disarm = 1<<1,
    /**
     * @brief 沉默 技穷
     */
    silence = 1<<2,
    /**
     * @brief 混乱
     */
    disarray = 1<<3,
    /**
     * @brief 嘲讽
     */
    taunt = 1<<4,
    /**
     * @brief 虚弱
     */
    asthenia = 1<<5,
    /**
     * @brief 断粮
     */
    unfood = 1<<6,

    all = 0b11111111
};

/**
 * @brief 普通异常状态 16二进制 前八位为层数 后八位分别作为状态
 */
enum class Debuff{
    none = 0,

    /**
     * @brief 洪水
     */
    flood = 1,

    /**
     * @brief 火攻
     */
    fire = 1<<1,

    /**
     * @brief 风暴
     */
    storm = 1<<2,

    /**
     * @brief 畏惧
     */
    dread = 1<<3,

    /**
     * @brief 妖术
     */
    sorcery = 1<<4,

    /**
     * @brief 焚烧
     */
    incineration = 1<<5,
    all = 0b0000000011111111
};

struct Buff
{
    /**
     * @brief 减伤
     */
    double DeDamage{0};
    /**
     * @brief 物理减伤
     */
    double physicsDeDamage{0};
    /**
     * @brief 魔法减伤
     */
    double magicDeDamage{0};
    /**
     * @brief 普通减伤
     */
    double normalDeDamage{0};
    /**
     * @brief 增伤
     */
    double upDamage{0};
    /**
     * @brief 物理增伤
     */
    double physicsUpDamage{0};
    /**
     * @brief 魔法增伤
     */
    double magicUpDamage{0};
    /**
     * @brief 普通增伤
     */
    double normalUpDamage{0};
};

/**
 * @brief 状态 正面 负面状态
 */
struct Status
{
    /**
     * @brief  负面状态
     */
    Debuff deb;

    /**
     * @brief 负面控制状态
     */
    DebuffControll dec;

    /**
     * @brief 增益状态
     */
    Buff buf;
};

/**
 * @brief 基本属性
 */
struct BaseAttrbute
{
    /**
     * @brief 武力
     */
    double force{0};
    /**
     * @brief 智力
     */
    double intellect{0};
    /**
     * @brief 统率
     */
    double generalship{0};
    /**
     * @brief 先攻
     */
    double strike{0};
};
/**
 * @brief 二级属性
 */
struct SecAttribute
{
    /**
     * @brief 物理吸血
     */
    double physicsLeech{0};
    /**
     * @brief 物理暴击
     */
    double physicsCriticalHit{0};

    /**
     * @brief 法术吸血
     */
    double magicLeech{0};
    /**
     * @brief 法术暴击
     */
    double magicCriticalHit{0};

    /**
     * @brief 闪避
     */
    double evasion{0};

    /**
     * @brief 抵御 非零为层数
     */
    int resist{0};

    /**
     * @brief 反击率
     */
    double counterattack{0};
};



