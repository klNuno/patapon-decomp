#include "common.h"

typedef struct {
    u8 unk_00[4];
} V;

typedef struct {
    u8 pad_00[0x4AD4];
    V *unk_4AD4;
    volatile u32 unk_4AD8;
} T;

void func_088F511C(T *arg0, u8 arg1, u32 arg2) {
    u32 i = 0;
    V temp;
    if (arg2 != 0) {
        temp.unk_00[0] = arg1;
        temp.unk_00[1] = 0xFF;
        temp.unk_00[2] = 0xFF;
        temp.unk_00[3] = 0xFF;
        if (i < arg2) {
            do {
                V *p = &arg0->unk_4AD4[arg0->unk_4AD8];
                if (p != NULL) {
                    *p = temp;
                }
                i++;
                arg0->unk_4AD8++;
            } while (i < arg2);
        }
    }
}
