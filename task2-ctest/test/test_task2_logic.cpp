#include "task2_logic.h"
#include <iostream>
#include <cstdlib>

void runTest(const char* name, bool condition) {
    if (!condition) {
        std::cerr << "[FAIL] " << name << std::endl;
        std::exit(1); // 测试失败
    }
    std::cout << "[PASS] " << name << std::endl;
}

int main() {
    // 测试1: 起点和终点相同
    runTest("SameStartAndEnd (t=0)", canReachTarget(0, 0, 0, 0, 0));
    runTest("SameStartAndEnd (t=1)", !canReachTarget(0, 0, 0, 0, 1));
    runTest("SameStartAndEnd (t=2)", canReachTarget(0, 0, 0, 0, 2));
    runTest("SameStartAndEnd (t=3)", !canReachTarget(0, 0, 0, 0, 3));

    // 测试2: 对角线移动
    runTest("Diagonal (t=1)", canReachTarget(0, 0, 1, 1, 1));
    runTest("Diagonal (t=2)", !canReachTarget(0, 0, 1, 1, 2));
    runTest("Diagonal (t=3)", canReachTarget(0, 0, 1, 1, 3));

    // 测试3: 轴向移动
    runTest("Axis (t=1)", !canReachTarget(0, 0, 2, 0, 1));
    runTest("Axis (t=2)", canReachTarget(0, 0, 2, 0, 2));
    runTest("Axis (t=3)", !canReachTarget(0, 0, 2, 0, 3));

    // 测试4: 复杂案例
    runTest("Complex (t=3)", !canReachTarget(0, 0, 3, 4, 3));
    runTest("Complex (t=4)", canReachTarget(0, 0, 3, 4, 4));
    runTest("Complex (t=5)", !canReachTarget(0, 0, 3, 4, 5));
    runTest("Complex (t=6)", canReachTarget(0, 0, 3, 4, 6));

    std::cout << "\nPress Enter to exit...";
    std::cin.ignore();

    return 0; // 所有测试通过
}