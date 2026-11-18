#include "common.h"

extern "C" {

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    s32 unk_08;
} N;

typedef union {
    N *unk_00;
    f32 unk_00_f;
} I;

typedef struct {
    u8 pad_00[0x348];
    N *unk_348;
    N *unk_34C;
    N *unk_350;
    s32 unk_354;
    u8 pad_358[0x4088 - 0x358];
    s32 *unk_4088;
    s32 unk_408C;
    u8 pad_4090[0x10];
    u8 *unk_40A0;
} T_0898FBD0;

s32 func_088C6484(s32);
s32 func_088BCF94(s32);
void func_0898E4C0(s32, u8 *, s32, s32, s32, s32, s32, s32);

s32 func_0898FBD0(T_0898FBD0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    struct {
        volatile I unk_00;
        volatile I unk_04;
    } temp;
    s32 x;
    N *p;
    N *q;
    N *r;
    s32 *t;

    x = *(s32 *)((u8 *)arg0->unk_4088 + *(s32 *)&arg0->unk_408C * 4 - 4);
    (*(volatile s32 *)&arg0->unk_408C)--;
    func_0898E4C0(x, arg0->unk_40A0, func_088BCF94(func_088C6484((s32)&arg0->unk_40A0[0x506F0])), arg1, arg2, arg3, arg4, arg5);
    temp.unk_04.unk_00 = (N *)&arg0->unk_348;
    r = arg0->unk_350;
    p = r->unk_00;
    temp.unk_00.unk_00_f = temp.unk_04.unk_00_f;
    if (p != r) {
        q = p->unk_00;
        if (q != NULL) {
            q->unk_04 = p->unk_04;
        }
        q = p->unk_04;
        if (q != NULL) {
            q->unk_00 = p->unk_00;
        }
        p->unk_00 = NULL;
        p->unk_04 = NULL;
    } else {
        p = NULL;
    }
    r = temp.unk_00.unk_00;
    q = r->unk_04;
    arg0->unk_354++;
    q->unk_00 = p;
    r->unk_04 = p;
    p->unk_00 = r;
    p->unk_04 = q;
    t = &p->unk_08;
    if (t != NULL) {
        *t = x;
    }
    return x;
}
}
