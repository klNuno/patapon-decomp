#include "common.h"

extern "C" {

static inline void init(s8 *p, s32 n) {
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
}

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} S;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} T;

void func_088226BC(s8 *, s8 *, ...);
s32 func_0881AE10(s8 *);
void func_089BCFF8(s32, S *, T *);
extern f32 D_089F2768[];
extern f32 D_089F276C[];
extern s8 D_08A08F54[];

void func_089BCCD8(s32 arg0, S *arg1) {
    s8 temp[8];
    s8 temp1[4];
    S temp2;
    T temp3;
    u32 i;
    s8 *p;
    f32 temp4;
    f32 temp5;
    s32 index;

    func_088226BC(temp, D_08A08F54);
    i = 0;
    p = temp;
    do {
        init(temp1, 2);
        temp1[0] = *p;
        temp4 = arg1->unk_04 + D_089F276C[0];
        temp5 = arg1->unk_00 + D_089F2768[0];
        temp2.unk_04 = temp4;
        temp2.unk_00 = temp5;
        temp4 = 7.0f;
        temp4 *= (f32)i;
        temp2.unk_00 = *(volatile f32 *)&temp2.unk_00 + temp4;
        index = func_0881AE10(temp1);
        temp3.unk_00 = 1.0f;
        temp3.unk_04 = 1.0f;
        func_089BCFF8(arg0 + index * 0x90 + 0x390, &temp2, &temp3);
        i++;
        p++;
    } while (i < 2U);
}
}
