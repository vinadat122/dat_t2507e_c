#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    
    printf("Nhap chuoi S1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    
    printf("Nhap chuoi S2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    char *shorter, *longer;
    if (strlen(s1) <= strlen(s2)) {
        shorter = s1;
        longer = s2;
    } else {
        shorter = s2;
        longer = s1;
    }

    int lenShort = strlen(shorter);
    int lenLong = strlen(longer);
    int found = 0;

    for (int i = 0; i <= lenLong - lenShort; i++) {
        int match = 1;
        for (int j = 0; j < lenShort; j++) {
            if (longer[i + j] != shorter[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

