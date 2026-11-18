#include "common.h"

typedef struct {
    u8 pad_00[0x90];
    f32 unk_90;
} T;

typedef struct {
    u8 pad_00[0x114];
    s32 unk_114;
    u8 pad_118[0x294];
    u8 unk_3AC;
    u8 pad_3AD[0x943];
    T unk_CF0;
} E;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S;

s32 func_0888FCFC(s32, s32);
extern s32 func_08890CEC(s32, s32);
extern s32 func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);
s32 func_088F5BA0(s32);

void func_08970060(S **arg0, f32 arg1) {
    s32 i;
    s32 temp;
    s32 j;
    E *p;
    T *t;

    if (arg1 < 0.0f) {
        return;
    }
    for (i = 0; i < 3; ++i) {
        temp = func_08894FBC(func_08899E18((*arg0)->unk_36B10, 0), i, 0);
        if (temp != 0) {
            for (j = 0; j < 6; ++j) {
                if (j < func_0888FCFC(temp, 0)) {
                    p = (E *)func_08890CEC(temp, j);
                    if (p != NULL && func_088F5BA0(p->unk_114) == 0 && p->unk_3AC == 1) {
                        t = &p->unk_CF0;
                        if (t != NULL && t->unk_90 > arg1) {
                            t->unk_90 = arg1;
                        }
                    }
                }
            }
        }
    }
}
