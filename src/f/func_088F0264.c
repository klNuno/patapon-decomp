#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x708];
    s32 unk_718;
    u8 pad_71C[0x1C4];
    s32 unk_8E0;
} T;

typedef struct {
    u8 pad_00[0x14];
    T *unk_14;
    u8 pad_18[8];
    u8 unk_20[0x200];
} S;

extern s32 D_08AD8110[];
void func_0881F5C0(void *, s32, s32);
s32 func_088268AC(void *);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088D450C(s32, s32);
s32 func_088F2D84(void *);

void func_088F0264(S *arg0, void *arg1) {
    s32 n;
    T *p;
    s32 x;

    if (arg0->unk_14 == NULL) {
        func_08852F00(arg1, 0);
        return;
    }
    if (func_08852EB8(arg1) == 0 && func_088268AC(arg0->unk_20) == 0) {
        p = arg0->unk_14;
        if (p != NULL && p->unk_718 == 4) {
            func_08852EDC(arg1, 2);
            if (func_088F2D84(arg0->unk_14->unk_10) != 0) {
                func_08852EDC(arg1, 3);
            }
        }
    }
    n = func_08852EB8(arg1);
    switch (n) {
    case 0:
        D_08AD8110[0] = *func_0885356C(arg1, 0, 1, 4);
        func_08852EDC(arg1, n + 1);
        arg0->unk_14->unk_8E0 = 0;
        if (func_088268AC(arg0->unk_20) != 0) {
            func_088D450C((s32)arg0->unk_14, (s32)arg0->unk_20);
            func_0881F5C0(arg0->unk_20, 0, 0x200);
        }
        if (D_08AD8110[0] == 0) {
            func_08852F00(arg1, 0);
            return;
        }
        break;
    case 1:
        x = arg0->unk_14->unk_718;
        if (x == 4) {
            func_08852EDC(arg1, n + 1);
            return;
        }
        if (x == 1) {
            func_08852F00(arg1, 0);
            return;
        }
        break;
    case 2:
        if (func_088F2D84(arg0->unk_14->unk_10) != 0) {
            func_08852EDC(arg1, n + 1);
            return;
        }
        break;
    case 3:
        x = D_08AD8110[0];
        if (x <= 0) {
            func_08852EDC(arg1, n + 1);
        } else {
            D_08AD8110[0] = x - 1;
        }
        break;
    case 4:
        func_08852F00(arg1, 0);
        break;
    }
}
