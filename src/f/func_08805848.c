#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u8 *unk_08;
    u32 unk_0C;
    u32 unk_10;
    f32 unk_14;
} U;

typedef struct {
    u8 unk_00[0x138];
} T;

typedef struct {
    U unk_00;
    T unk_18;
} X;

typedef struct T_08805FA8 T_08805FA8;
typedef struct A_08805FA8 A_08805FA8;
typedef struct T_08805B40 T_08805B40;
typedef struct S S;
typedef struct A A;

void func_0880462C(void);
u8 *func_08804814(u8 *arg0, s32 *arg1);
u8 *func_08804778(u8 *arg0, u32 *arg1);
s32 func_08805FA8(T_08805FA8 *arg0, A_08805FA8 *arg1);
void func_08805B40(u32 arg0, T_08805B40 *arg1);
void func_08805F0C(S *arg0, A *arg1);

s32 func_08805848(X *arg0) {
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    u32 t5;
    u32 t6;
    s32 t7;
    s32 t8;
    s32 t9;
    s32 t10;
    s32 t11;
    s32 t12;
    s32 t13;
    s32 t14;
    s32 t15;
    u32 t16;
    u32 t17;
    s32 t18;
    s32 t19;
    struct { u8 pad_00[4]; s32 unk_04; } t20;
    u32 t21;
    s32 t22;
    s32 t23;
    u32 t24;
    u32 t25;
    s32 t26;
    s32 temp;
    T *q;
    u8 *p;
    u32 code;
    u8 *r;

    q = &arg0->unk_18;
    for (;;) {
        p = arg0->unk_00.unk_08;
        if (((p != NULL) ^ 1) || (p[0] & 0x80)) {
            func_08805B40(func_08805FA8((T_08805FA8 *)q, (A_08805FA8 *)arg0), (T_08805B40 *)arg0);
            if (arg0->unk_00.unk_04 == 0) {
                func_0880462C();
            }
            func_08805F0C((S *)q, (A *)arg0);
            if (arg0->unk_00.unk_08 == NULL) {
                continue;
            }
            goto end;
        } else {
            switch (p[0] & 0x1F) {
            case 2:
                p = func_08804814(p + 1, &t0);
                arg0->unk_00.unk_08 = p + 4;
                break;
            case 3:
                p = func_08804814(p + 1, &t1);
                p = func_08804814(p, &t2);
                arg0->unk_00.unk_08 = p + 4;
                break;
            case 4:
                p = func_08804814(p + 1, &t3);
                arg0->unk_00.unk_08 = p + 4;
                break;
            case 5:
                p = func_08804814(p + 1, &t4);
                p = func_08804778(p, &t5);
                p = func_08804778(p, &t6);
                arg0->unk_00.unk_08 = p + 4;
                break;
            case 6:
                p = func_08804814(p + 1, &t7);
                p = func_08804814(p, &t8);
                arg0->unk_00.unk_08 = p + 4;
                break;
            case 7:
                p = func_08804814(p + 1, &t9);
                p = func_08804814(p, &t10);
                arg0->unk_00.unk_08 = p + 4;
                break;
            case 8:
                p = func_08804814(p + 1, &t11);
                p = func_08804814(p, &t12);
                p = func_08804814(p, &t13);
                arg0->unk_00.unk_08 = p + 4;
                break;
            case 9:
                p = func_08804814(p + 1, &t14);
                p = func_08804814(p, &t15);
                p = func_08804778(p, &t16);
                p = func_08804778(p, &t17);
                arg0->unk_00.unk_08 = p + 4;
                break;
            case 10:
                p = func_08804814(p + 1, &t18);
                arg0->unk_00.unk_08 = p + 4;
                break;
            case 11:
                p = func_08804814(p + 1, &t19);
                p = func_08804814(p, &t20.unk_04);
                arg0->unk_00.unk_08 = p + 4;
                break;
            case 12:
                p = func_08804778(p + 5, &t21);
                p = func_08804814(p, &t22);
                arg0->unk_00.unk_08 = p;
                break;
            case 13:
                p = func_08804814(p + 1, &t23);
                arg0->unk_00.unk_08 = p;
                break;
            case 15:
                p = func_08804778(p + 1, &t24);
                p = func_08804778(p, &t25);
                p = func_08804814(p, &t26);
                arg0->unk_00.unk_08 = p + t24 * 4;
                break;
            default:
            case 0:
            case 1:
            case 14:
                func_0880462C();
                break;
            }
            break;
        }
    }
end:
    r = arg0->unk_00.unk_08;
    code = r[0] & 0x1F;
    if (code == 1) {
        do {
            func_08804814(*(u8 *volatile *)&arg0->unk_00.unk_08 + 1, &temp);
            r = arg0->unk_00.unk_08 + temp;
            arg0->unk_00.unk_08 = r;
            code = r[0] & 0x1F;
        } while (code == 1);
    }
    return code;
}
