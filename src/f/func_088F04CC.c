#include "common.h"

typedef struct {
    u8 pad_00[0x718];
    s32 unk_718;
    u8 pad_71C[0x8E0 - 0x71C];
    s32 unk_8E0;
} S_088F04CC;

typedef struct {
    u8 pad_00[0x14];
    S_088F04CC *unk_14;
    S_088F04CC *unk_18;
    u8 pad_1C[4];
    u16 unk_20[0x100];
} T_088F04CC;

void func_0881F5C0(void *, s32, s32);
s32 func_088268AC(void *);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088D450C(s32, s32);
void func_088D45F4(S_088F04CC *);

void func_088F04CC(T_088F04CC *arg0, void *arg1) {
    s32 s;
    s32 *a;
    s32 n;
    s32 t;
    u16 *p;

    s = func_08852EB8(arg1);
    if (s == 0) {
        a = func_0885356C(arg1, 0, 1, 4);
        if (*func_0885356C(arg1, 1, 1, 4) == 1) {
            func_088D45F4(arg0->unk_18);
            func_08852F00(arg1, 0);
            return;
        }
        if (arg0->unk_14 == NULL) {
            func_08852F00(arg1, 0);
            return;
        }
        t = s + 1;
        func_08852EDC(arg1, t);
        if (*a == 1) {
            if (func_088268AC(arg0->unk_20) != 0) {
                func_08852EDC(arg1, t + 1);
                arg0->unk_14->unk_8E0 = 0;
                if ((n = func_088268AC(arg0->unk_20)) != 0) {
                    p = (u16 *)((u8 *)arg0->unk_20 + n * 2 - 2);
                    if (*p == 0x2F) {
                        *p = 0;
                    }
                }
                func_088D450C((s32)arg0->unk_14, (s32)arg0->unk_20);
                func_0881F5C0(arg0->unk_20, 0, 0x200);
            }
        } else {
            func_088D45F4(arg0->unk_14);
        }
    } else if (s == 1) {
        n = arg0->unk_14->unk_718;
        if (n == 4 || n == 1) {
            func_08852EDC(arg1, s + 1);
        }
    } else {
        func_08852F00(arg1, 0);
    }
}
