#include <stdio.h>
#include <string.h>

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    char prev[10], name[10];
    int num = 0;
    strcpy(prev, "start");
    while(scanf("%s\n", name) != EOF) {
        num = 1 ? strcmp(prev, name) : num++;
        printf("S%sMUT%d.fasta.txt\n", name, num);
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
