/**
 * 动态分配内存
 * @author unknow
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main () {
    char name[100];
    char *description;

    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
    description = (char *)malloc(200 * sizeof(char));
    //description = (char *)calloc(200, sizeof(char));

    if (description == NULL) {
        fprintf(stderr, "error - unable to allocate required memory\n");
    } else {
        strcpy(description, "zara ali a DPS student in class 10th");
    }

    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
}