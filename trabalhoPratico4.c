/*
Trabalho Pratico 4 - Arthur Campello Gausmann

LeetCode 179
*/

int comparar(const void* a, const void* b) {
    int n1 = *(int*)a;
    int n2 = *(int*)b;

    char s1[25], s2[25];
    char ab[50], ba[50];

    sprintf(s1, "%d", n1);
    sprintf(s2, "%d", n2);

    strcpy(ab, s1);
    strcat(ab, s2);
    strcpy(ba, s2);
    strcat(ba, s1);

    return strcmp(ba, ab);
}

char* largestNumber(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), comparar);

    if (nums[0] == 0) {
        char* res = malloc(sizeof(char) + 1);
        strcpy(res, "0");
        return res;
    }

    int tam = 0;
    for (int i = 0; i < numsSize; i++) {
        char temp[25];
        sprintf(temp, "%d", nums[i]);
        tam += strlen(temp);
    }

    char* res = (char*)malloc(tam + 1);
    res[0] = '\0';

    for (int i = 0; i < numsSize; i++) {
        char temp[25];
        sprintf(temp, "%d", nums[i]);
        strcat(res, temp);
    }

    return res;
}