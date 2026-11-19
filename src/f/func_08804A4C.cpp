#include "common.h"

extern "C" {

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
    struct { V unk_00[35]; } unk_20;
} T;

typedef struct {
    U unk_00;
    T unk_18;
} X;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u8 pad_0C[8];
    u8 *unk_14;
} S;

void func_0880462C(void);
u8 func_08805848(X *);
u8 *func_08804814(u8 *arg0, s32 *arg1);
u8 *func_08804778(u8 *arg0, u32 *arg1);
s32 func_088043E8(const char *, const char *, u32 *);
void func_08805098(T *, const U *, u8 *);
void func_08805CE0(T *, const U *, u32);

static inline const char *func_08804A4C_unk_00(const u8 *p) {
    return (const char *)(((u32)p[3] << 24) | ((p[2] << 16) | (p[0] | (p[1] << 8))));
}

static inline s32 func_08804A4C_unk_01(const char *arg0, const u8 *arg1, const u32 *arg2) {
    struct {
        u8 pad_00[0xC];
        u32 unk_0C;
        u8 pad_10[4];
    } temp;
    u32 i = 0;
    if (*arg2 != 0) {
        do {
            if ((1 ^ (func_088043E8(arg0, func_08804A4C_unk_00(arg1), &temp.unk_0C) != 0)) == 0) {
                return 1;
            }
            i++;
            arg1 += 4;
        } while (i < *arg2);
    }
    return 0;
}

u8 *func_08804A4C(T *arg0, const U *arg1, u32 *arg2) {
    X x;
    s32 unk_4C;
    u32 unk_48;
    const char *volatile unk_44;
    u8 *volatile unk_40;
    s32 unk_3C;
    u32 unk_38;
    u32 unk_34;
    u8 code;
    u8 *p;
    u8 *q;
    S *s;

    x.unk_00.unk_00 = arg1->unk_00;
    x.unk_00.unk_04 = arg1->unk_04;
    x.unk_00.unk_08 = arg1->unk_08;
    x.unk_00.unk_0C = arg1->unk_0C;
    x.unk_00.unk_10 = arg1->unk_10;
    x.unk_00.unk_14 = arg1->unk_14;
    x.unk_18.unk_00 = arg0->unk_00;
    x.unk_18.unk_04 = arg0->unk_04;
    x.unk_18.unk_08 = arg0->unk_08;
    x.unk_18.unk_0C = arg0->unk_0C;
    x.unk_18.unk_10 = arg0->unk_10;
    x.unk_18.unk_14 = arg0->unk_14;
    x.unk_18.unk_18 = arg0->unk_18;
    x.unk_18.unk_1C = arg0->unk_1C;
    x.unk_18.unk_20 = arg0->unk_20;
    code = x.unk_00.unk_08 != NULL ? (u8)(x.unk_00.unk_08[0] & 0x1F) : 0;
    for (;;) {
        switch (code) {
        case 12: {
            const char *temp;
            u32 v;
            u8 *tail;
            const volatile u8 *p = x.unk_00.unk_08;
            u32 b = (u32)p[2] << 8;
            u32 c = p[3];
            u32 a = p[1];
            a |= b;
            c <<= 16;
            v = c | a;
            u32 e = p[4];
            tail = (u8 *)p + 5;
            temp = (const char *)((e << 24) | v);
            unk_44 = temp;
            if (temp != NULL) {
                v = (u32)temp;
            } else {
                v = 0;
            }
            unk_44 = (const char *)v;
            q = func_08804778(tail, &unk_48);
            func_08804814(q, &unk_4C);
            const char *key = (const char *)*(volatile u32 *)&arg0->unk_00;
            if (func_088043E8(key, unk_44, arg2) == 0) {
                goto next;
            }
            goto end;
        }
        case 15:
            q = func_08804778(x.unk_00.unk_08 + 1, &unk_34);
            q = func_08804778(q, &unk_38);
            q = func_08804814(q, &unk_3C);
            unk_40 = q;
            if (!func_08804A4C_unk_01((const char *)arg0->unk_00, q, &unk_34)) {
                p = x.unk_00.unk_08;
                func_08805098(arg0, arg1, p);
                s = (S *)(arg0->unk_18 + unk_3C);
                s->unk_00 = arg0->unk_04;
                s->unk_04 = arg0->unk_00;
                s->unk_08 = arg0->unk_08;
                s->unk_14 = p;
                func_08805CE0(arg0, arg1, arg1->unk_00 + unk_38);
            }
            break;
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
        case 13:
            break;
        }
next:
        code = func_08805848(&x);
    }
end:
    return x.unk_00.unk_08;
}

}
