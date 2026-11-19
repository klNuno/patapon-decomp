#include "common.h"

typedef struct {
    u8 pad_00[0x84];
    u8 unk_84;
} U;

typedef struct T T;

T *func_08827C34(void *);
void func_08882E70(void *);
void func_08882EC0(T *arg0);

T *func_08882414(U *arg0) {
    T *temp = func_08827C34(arg0);
    if (temp == NULL) {
        temp = NULL;
    } else if (temp != NULL) {
        func_08882E70(temp);
    }
    if (temp != NULL) {
        func_08882EC0(temp);
        arg0->unk_84 = 1;
    }
    return temp;
}
