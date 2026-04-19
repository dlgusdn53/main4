#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// 초기화
void init(ArrayList *list) {
    list->data = (int*)malloc(INIT_SIZE * sizeof(int));  // 초기 배열 할당
    list->size = INIT_SIZE;
    list->count = 0;
}

// 추가
void add(ArrayList *list, int value) {
    // 꽉 찼으면 realloc으로 2배 늘리기
    if (list->count == list->size) {
        list->size *= 2;  // 크기 2배
        list->data = (int*)realloc(list->data, list->size * sizeof(int));
        printf("배열 크기 증가 → %d\n", list->size);
    }
    list->data[list->count++] = value;  // 값 저장
}

// 출력
void print(ArrayList *list) {
    for (int i = 0; i < list->count; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}
