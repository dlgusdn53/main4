#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    ArrayList list;
    init(&list);

    // 10개 추가 (초기 크기 3이라 realloc 여러번 발생)
    for (int i = 1; i <= 10; i++) {
        add(&list, i * 10);
    }

    print(&list);

    free(list.data);  // 메모리 해제
    return 0;
}
