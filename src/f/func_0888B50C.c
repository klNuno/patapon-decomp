#include "common.h"

typedef struct {
    s8 unk_00;
    u8 pad_01;
    s8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
} Node_0888B50C;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    u8 pad_0C[0x4];
    s32 unk_10;
} Obj_0888B50C;

extern s32 func_0888B1AC(s32, s32, s32);
s32 func_0881AD24(s32);

void func_0888B50C(Obj_0888B50C *arg0, s32 arg1) {
    u8 *p;
    s8 c;
    s32 v;

    p = (u8 *)arg0->unk_10;
    if (p == NULL || (p != NULL && ((Node_0888B50C *)p)->unk_02 < 0)) {
        func_0888B1AC((s32)arg0, arg0->unk_08, *(s32 *)(arg0->unk_08 + 0x24));
        return;
    }
    if (arg0->unk_00 != ((Node_0888B50C *)p)->unk_00 && arg1 == 0) {
        return;
    }
    v = func_0881AD24(arg0->unk_00);
    for (;;) {
        p += ((Node_0888B50C *)p)->unk_02;
        c = ((Node_0888B50C *)p)->unk_00;
        if (c > 0 && c > v) {
            continue;
        }
        if (c > 0 && !(v < c)) {
            break;
        }
        if (arg0->unk_00 == c) {
            break;
        }
        if (((Node_0888B50C *)p)->unk_02 < 0) {
            func_0888B1AC((s32)arg0, arg0->unk_08, *(s32 *)(arg0->unk_08 + 0x24));
            return;
        }
    }
    func_0888B1AC((s32)arg0, arg0->unk_08, (s32)((u32)(((p[6] << 0x18) | ((p[5] << 0x10) | (p[3] | (p[4] << 8)))) - 0x28) >> 4));
}
