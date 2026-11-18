#include "common.h"

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    s32 unk_08;
    struct N *unk_0C;
} N;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    u8 pad_24[0xC];
    u8 unk_30[0x28];
    s32 unk_58;
} S088CE0C0;

typedef struct {
    u8 pad_00[0x1008];
    N *unk_1008;
    u8 pad_100C[0x318];
    struct {
        N *unk_00;
        N *unk_04;
        u8 pad_08[0x18];
        s32 unk_20;
        u8 pad_24[4];
    } unk_1324;
    S088CE0C0 unk_134C;
    u8 pad_13A8[0x294];
    s32 unk_163C;
} S;

void func_088802D0(s32 *, S088CE0C0 *, s32);
void func_088804B4(s32 *, S088CE0C0 *);
extern int func_088CE1EC(s32, char *);
s32 func_0892AB90(s32, s32);
void func_0892B6F8(s32, s32, s32, u8, s32, s32, f32);
s32 func_0892C008(s32);

static inline s32 temp(S *arg0, N *arg1, N *arg2) {
    N *p = arg0->unk_1324.unk_00;
    if (p != arg2) {
        arg1->unk_00 = p;
        arg0->unk_1324.unk_00->unk_04 = arg1;
        arg0->unk_1324.unk_00 = arg1;
        return 1;
    } else {
        arg0->unk_1324.unk_00 = arg1;
        arg0->unk_1324.unk_04 = arg1;
        arg1->unk_00 = arg2;
        return 1;
    }
}

s32 func_0892A5E0(S *arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, f32 arg6) {
    s32 a;
    s32 b;
    char *p;
    N *q;
    N *h;
    s32 r;

    if (arg0->unk_134C.unk_20 == 0) {
        return 0;
    }
    p = (char *)((N *)arg0->unk_134C.unk_04)->unk_08;
    func_088804B4(&b, &arg0->unk_134C);
    func_088802D0(&a, &arg0->unk_134C, b);
    q = (N *)func_0892C008((s32)p);
    h = (N *)&arg0->unk_1324;
    if (h != q) {
        r = temp(arg0, q, h);
        q->unk_04 = (N *)&arg0->unk_1324;
        if (r) {
            q->unk_0C = (N *)&arg0->unk_1324;
            ++arg0->unk_1324.unk_20;
        }
    }
    r = func_0892AB90((s32)arg0, arg1);
    func_0892B6F8((s32)p, r, ((N *)((u8 *)arg0->unk_1008 + (arg2 << 4)))->unk_08, arg3, arg4, arg5, arg6);
    if (p == NULL) {
        return 0;
    }
    if (p != NULL) {
        p += 0x250;
    }
    func_088CE1EC(arg0->unk_163C, p);
    return 0;
}
