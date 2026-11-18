#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x14];
    s64 unk_28;
    u8 pad_30[0x114];
    s32 unk_144;
} A_08862760;

s32 sceIoPollAsync(s32, s64 *);
s32 sceKernelDelayThreadCB(u32);

s32 func_08862760(s32 arg0, A_08862760 *arg1, s32 arg2) {
    s64 res;
    s32 fd;
    s32 r;

    res = 0;
    if (arg2 != 0) {
        if (arg1->unk_0C != 0) {
            fd = arg1->unk_10;
            if (sceIoPollAsync(fd, &res) == 1) {
                while (sceIoPollAsync(fd, &res) == 1) {
                    sceKernelDelayThreadCB(10000);
                }
            }
        }
        if (arg1->unk_00 == 1) {
            arg1->unk_08 = 1;
            arg1->unk_00 = 0;
            arg1->unk_10 = -1;
            arg1->unk_0C = 0;
        } else {
            arg1->unk_0C = 0;
            arg1->unk_00 = arg1->unk_144;
            arg1->unk_08 = 5;
        }
        return 0;
    }
    r = sceIoPollAsync(arg1->unk_10, &res);
    if (r != 0) {
        if (r == (s32)0x8002032A) {
            arg1->unk_0C = 0;
            arg1->unk_00 = arg1->unk_144;
            arg1->unk_08 = 5;
        }
        arg1->unk_28 = res;
        return 0;
    }
    if (res < 0) {
        if (arg1->unk_00 == 1) {
            arg1->unk_08 = 1;
            arg1->unk_00 = 0;
            arg1->unk_10 = -1;
            arg1->unk_0C = 0;
        }
        arg1->unk_28 = res;
        return 0;
    }
    arg1->unk_0C = 0;
    arg1->unk_08 = 5;
    arg1->unk_28 = res;
    return 1;
}
