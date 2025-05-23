#include "broom_logic.h"
#include <cassert>
#include <iostream>

void testFindBroomHolder() {
    std::cout << "Running tests..." << std::endl;
    
    // 基本功能测试
    assert(findBroomHolder(5, 0) == 1);
    assert(findBroomHolder(5, 1) == 2);
    assert(findBroomHolder(5, 4) == 5);
    assert(findBroomHolder(5, 5) == 4);
    assert(findBroomHolder(5, 8) == 1);
    
    // 周期循环测试
    assert(findBroomHolder(3, 6) != 1);//==3
    assert(findBroomHolder(3, 7) == 2);
    
    // 单人情况测试
    assert(findBroomHolder(1, 0) == 1);
    assert(findBroomHolder(1, 100) == 1);
    
    // 无效输入测试
    assert(findBroomHolder(0, 10) == -1);
    assert(findBroomHolder(-5, 10) == -1);
    assert(findBroomHolder(5, -3) == -1);
    
}

int main() {
    testFindBroomHolder();

    std::cout << "All tests passed!" << std::endl;
    std::cout << "Press Enter to exit...";
    std::cin.ignore();
    return 0;
}