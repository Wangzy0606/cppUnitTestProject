cmake_minimum_required(VERSION 3.10)
project(task2_logic)

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 启用测试
enable_testing()

# 添加主库
add_library(task2_logic src/task2_logic.cpp)
target_include_directories(task2_logic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# 添加测试可执行文件
add_executable(test_task2_logic test/test_task2_logic.cpp)
target_link_libraries(test_task2_logic PRIVATE task2_logic)

# 注册测试
add_test(NAME Task2LogicTest COMMAND test_task2_logic)

# 可选：安装规则（如果需要）
install(TARGETS task2_logic DESTINATION lib)
install(FILES include/task2_logic.h DESTINATION include)