
#include <stdio.h>

enum DAY {
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
} day;

enum Season {
    Spring, Summer=3, Autumn, Winter
};

/*
int main() {
    for (day = MON; day <= SUN; day ++) {
        printf("day: %d\n", day);
    }

    printf("Spring: %d\n", Spring); // 0
    printf("Summer: %d\n", Summer); // 3
    printf("Autumn: %d\n", Autumn); // 4
    printf("Winter: %d\n", Winter); // 5

    return 0;
}*/
