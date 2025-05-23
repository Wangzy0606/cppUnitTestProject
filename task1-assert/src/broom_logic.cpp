#include "broom_logic.h"

int findBroomHolder(int n, int time) {
    if (n <= 0 || time < 0) return -1; // 处理无效输入
    
    if (n == 1) return 1; // 只有一个人
    
    int cycle = 2 * (n - 1); // 一个完整来回的周期
    time %= cycle; // 取模减少计算量
    
    if (time < n) {
        // 去程：从1到n
        return time + 1;
    } else {
        // 回程：从n回到1
        return 2 * n - time - 1;
    }
}    