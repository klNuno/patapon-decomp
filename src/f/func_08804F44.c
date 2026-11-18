#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
} V;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u8 *unk_08;
    u32 unk_0C;
    u32 unk_10;
    f32 unk_14;
} U;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    V *unk_0C;
    u32 unk_10;
    u32 unk_14;
    u8 *unk_18;
    u32 unk_1C;
    V unk_20[35];
} T;

typedef struct {
    U unk_00;
    T unk_18;
} X;

void func_0880462C(void);
u8 func_08805848(X *);
u8 *func_08804814(u8 *arg0, s32 *arg1);

V *func_08804F44(T *arg0, const U *arg1) {
    X x;
    const volatile T *src0;
    s32 i;
    const volatile V *src;
    V *dst;
    s32 n;
    u8 code;
    V *p;

    src0 = arg0;
    x.unk_00.unk_00 = arg1->unk_00;
    x.unk_00.unk_04 = arg1->unk_04;
    x.unk_00.unk_08 = arg1->unk_08;
    x.unk_00.unk_0C = arg1->unk_0C;
    x.unk_00.unk_10 = arg1->unk_10;
    x.unk_00.unk_14 = arg1->unk_14;
    x.unk_18.unk_00 = src0->unk_00;
    x.unk_18.unk_04 = src0->unk_04;
    x.unk_18.unk_08 = src0->unk_08;
    x.unk_18.unk_0C = src0->unk_0C;
    x.unk_18.unk_10 = src0->unk_10;
    x.unk_18.unk_14 = src0->unk_14;
    x.unk_18.unk_18 = src0->unk_18;
    x.unk_18.unk_1C = src0->unk_1C;
    src = src0->unk_20;
    dst = x.unk_18.unk_20;
    n = 35;
    do {
        u32 a = src->unk_00;
        u32 b = src->unk_04;
        n--;
        dst->unk_00 = a;
        dst->unk_04 = b;
        src++;
        dst++;
    } while (n > 0);
    code = x.unk_00.unk_08 != NULL ? (u8)(x.unk_00.unk_08[0] & 0x1F) : 0;
    for (;;) {
        switch (code) {
        default:
        case 1:
        case 14:
            func_0880462C();
            goto end;
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 15:
            code = func_08805848(&x);
            break;
        case 13:
            goto end;
        }
    }

end:
    func_08804814(x.unk_00.unk_08 + 1, &i);
    p = (V *)(x.unk_18.unk_18 + i);
    arg0->unk_00 = p->unk_04;
    arg0->unk_04 = p->unk_00;
    arg0->unk_08 = 0;
    arg0->unk_0C = p;
    return p;
}
