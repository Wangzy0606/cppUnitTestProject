#include "task2_logic.h"
#include <algorithm>
#include <cstdlib>

bool canReachTarget(int sx, int sy, int fx, int fy, unsigned int t) {
    int dx = std::abs(fx - sx);
    int dy = std::abs(fy - sy);
    
    int min_steps = std::max(dx, dy);

    if (t < min_steps) return false;    
 
    return (t % 2) == (min_steps % 2);
}