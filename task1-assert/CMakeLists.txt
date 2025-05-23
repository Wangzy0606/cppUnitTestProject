cmake_minimum_required(VERSION 3.10)
project(BroomPassProblem)

set(CMAKE_CXX_STANDARD 11)

# 添加测试目标
add_executable(broom_test 
    src/broom_logic.cpp 
    src/assert_functions.cpp
)

# 添加测试
enable_testing()
add_test(NAME BroomTest COMMAND broom_test)

# 包含目录
target_include_directories(broom_test PUBLIC include)

# 设置编译选项（启用断言）
if(CMAKE_COMPILER_IS_GNUCXX)
    target_compile_options(broom_test PRIVATE -Wall -Wextra -pedantic -DENABLE_ASSERTS)
endif()    