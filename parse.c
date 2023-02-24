#include <stdio.h>
#include <string.h>

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    char prev[10], name[10];
    int num = 0;
    scanf("%s\n", prev);
    while(scanf("%s\n", name) != EOF) {
        num = strcmp(prev, name) ? 1 : num + 1;
        printf("S%sMUT%d.fasta.txt\n", name, num);
        strcpy(prev, name);
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
