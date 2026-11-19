#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x28];
    s32 unk_28;
} T;

typedef T T3;

void func_089D4840(T *arg0);
void func_089D4A50(T3 *arg0);
void func_089D4C70(T *arg0, u32 arg1);

void func_089D47D4(void *arg0, u32 arg1) {
    T *temp = (T *)arg0;

    switch (temp->unk_28) {
    case 1:
        func_089D4840(temp);
        return;
    case 2:
        func_089D4A50(temp);
        return;
    case 3:
        func_089D4C70(temp, arg1);
        return;
    }
}
}
