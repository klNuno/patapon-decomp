#include "common.h"

void func_0880416C(void *);

typedef struct {
    u8 unk_00[0x20];
} U;

typedef struct {
    u8 pad_00[0x104];
    U *unk_104;
    u32 unk_108;
} T;

T *func_0895057C(T *arg0, s16 arg1)
{
    if (arg0 != 0) {
        if (arg0 != 0) {
            u32 count = arg0->unk_108;
            U *temp = arg0->unk_104;
            U *volatile *ptr = &arg0->unk_104;

            if ((u32)temp != (u32)(temp + count)) {
                U *end = *ptr + count;
                do {
                    temp++;
                } while (temp != end);
            }
            arg0->unk_108 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
