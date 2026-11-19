#include "common.h"

typedef struct { s32 unk_00, unk_04; } T;

void func_089D64DC(T *arg0, s32 arg1, s32 arg2) {
    switch (arg2) {
        case 0: arg0->unk_04 = 5; break;
        case 1:
        case -1:
        case 2: arg0->unk_04 = 2; break;
    }
}
