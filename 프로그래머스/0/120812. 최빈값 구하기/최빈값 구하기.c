#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int count = 0;
    int x = 0;
    int ans = 0;

    for (int i = 0; i < array_len; i++) {
        count = 0;

        for (int j = 0; j < array_len; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }

        if (count > x) {
            x = count;
            ans = array[i];
        }
    }

    // 최빈값이 여러 개인지 확인
    for (int i = 0; i < array_len; i++) {
        count = 0;

        for (int j = 0; j < array_len; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }

        if (count == x && array[i] != ans) {
            return -1;
        }
    }

    return ans;
}