#include <stdio.h>

typedef struct info {
    char name[10];
    int ID;
    int age;
    int income;
} info;

int main(void) {
    FILE *ifp;
    info info = {"", 0, 0, 0};
    ifp = fopen("employee.bin", "rb");
    int i=1;
    while (fscanf(ifp, "%s %d %d %d", info.name, &info.ID, &info.age, &info.income) != EOF) {
        printf("%d번째 직원 : %s %d %d %d\n", i, info.name, info.ID, info.age, info.income);
        i++;
    }
    fclose(ifp);
    return 0;
}
