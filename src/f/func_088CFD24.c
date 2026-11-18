#include "common.h"

typedef struct {
    s32 unk_00, unk_04, unk_08, unk_0C;
    u8 pad_10[8];
    f32 unk_18[2];
    s32 unk_20;
} T;

T *func_088CFE48(s32, u32);
void func_088CF3B4(f32, s32, s32, s32);
void func_088CF594(s32, s32, s32);
void func_088CF75C(s32, void *, s32);
void func_088CF8C0(s32, s32, s32);
void func_088CFA9C(s32, s32, s32);

void func_088CFD24(f32 arg0, s32 arg1, u32 arg2, s32 arg3) {
    s32 temp;
    u32 j, i;
    T *p;
    T *q;

    (p = func_088CFE48(arg1, arg2))->unk_20 = arg3;
    j = 0;
    do {
        s32 bit = 1 << j;
        if (arg3 & bit) {
            temp = ~bit;
            i = 0;
            do {
                if (i != arg2) {
                    q = func_088CFE48(arg1, i);
                    q->unk_20 &= temp;
                }
                i++;
            } while (i < 2U);
            j++;
        } else {
            j++;
        }
    } while (j < 4U);
    func_088CF3B4(arg0, arg1, p->unk_00, arg2);
    func_088CF594(arg1, p->unk_08, arg2);
    func_088CF75C(arg1, &p->unk_18, arg2);
    func_088CF8C0(arg1, p->unk_04, arg2);
    func_088CFA9C(arg1, p->unk_0C, arg2);
}
