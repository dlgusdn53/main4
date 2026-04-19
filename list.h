#ifndef LIST_H
#define LIST_H

#define INIT_SIZE 3  // 초기 배열 크기

typedef struct {
    int *data;    // 동적 배열 포인터
    int size;     // 현재 배열 크기
    int count;    // 현재 저장된 데이터 수
} ArrayList;

void init(ArrayList *list);
void add(ArrayList *list, int value);
void print(ArrayList *list);

#endif
