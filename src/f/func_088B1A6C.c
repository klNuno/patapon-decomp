#include "common.h"

typedef struct {
    s16 unk_00[64];
} H;

typedef struct {
    H unk_00;
    H unk_80;
} Q;

typedef struct {
    u32 unk_00;
    Q unk_04;
} E;

static inline void func_088B1A6C_unk_00(E *arg0, E *arg1) {
    Q temp;
    u32 k;

    k = *(volatile u32 *)&arg0->unk_00;
    arg0->unk_00 = *(volatile u32 *)&arg1->unk_00;
    arg1->unk_00 = k;
    temp = arg0->unk_04;
    arg0->unk_04.unk_00 = arg1->unk_04.unk_00;
    arg0->unk_04.unk_80 = arg1->unk_04.unk_80;
    arg1->unk_04.unk_00 = temp.unk_00;
    arg1->unk_04.unk_80 = temp.unk_80;
}

static inline void func_088B1A6C_unk_04(E *arg0, E *arg1) {
    struct { u8 pad_00[0x10]; Q unk_10; } temp;
    u32 k;

    k = *(volatile u32 *)&arg0->unk_00;
    arg0->unk_00 = *(volatile u32 *)&arg1->unk_00;
    arg1->unk_00 = k;
    temp.unk_10 = arg0->unk_04;
    arg0->unk_04.unk_00 = arg1->unk_04.unk_00;
    arg0->unk_04.unk_80 = arg1->unk_04.unk_80;
    arg1->unk_04.unk_00 = temp.unk_10.unk_00;
    arg1->unk_04.unk_80 = temp.unk_10.unk_80;
}

void func_088B1A6C(E *arg0, E *arg1, E *arg2) {
    u32 a = arg0->unk_00;
    u32 b = arg2->unk_00;
    u32 c = arg1->unk_00;
    u8 t = (u8)!(b < a);
    u8 u = (u8)!(c < b);
    if (t && u) {
        return;
    }
    if (!t && !u) {
        func_088B1A6C_unk_00(arg0, arg1);
        return;
    }
    if (c < a) {
        func_088B1A6C_unk_00(arg0, arg1);
    }
    if (t) {
        func_088B1A6C_unk_00(arg1, arg2);
    } else {
        func_088B1A6C_unk_04(arg0, arg2);
    }
}
