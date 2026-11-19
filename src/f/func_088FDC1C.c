#include "common.h"

typedef struct {
    u8 pad_00[0x920];
    s32 unk_920;
    u8 pad_924[0x44];
    u8 unk_968;
    u8 unk_969;
    u8 unk_96A;
} A_088FDC1C;

typedef struct {
    s32 unk_00;
    u8 unk_04[0x200];
    u8 unk_204[0x200];
    u8 unk_404[0x20];
} B_088FDC1C;

typedef struct {
    u8 pad_00[0x8484];
    B_088FDC1C *unk_8484;
    s32 unk_8488;
    B_088FDC1C *unk_848C;
    s32 unk_8490;
    A_088FDC1C *unk_8494;
    u8 pad_8498[4];
    u8 unk_849C[4];
} C_088FDC1C;

typedef struct {
    u8 pad_00[0x131CD8];
    C_088FDC1C unk_131CD8;
} D_088FDC1C;

typedef struct {
    u8 pad_00[0x10];
    D_088FDC1C *unk_10;
    s32 unk_14;
} S_088FDC1C;

void func_08852C5C(void *, s32, s32);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088F1A78(A_088FDC1C *, s32);
void func_088F1C7C(A_088FDC1C *);
void func_088F1DB4(A_088FDC1C *, s32, s32, s32, void *);
void func_088F2104(s32, s32);

static inline s32 unk_00(C_088FDC1C *arg0, s32 arg1, s32 arg2) {
    A_088FDC1C **temp;
    A_088FDC1C **temp2;
    A_088FDC1C *temp3;
    B_088FDC1C *p;
    B_088FDC1C *end;
    s32 ret;
    s32 n = arg0->unk_8488;

    if (n == 0) {
        return 0;
    } else {
        temp = &arg0->unk_8494;
        func_088F2104((s32)*temp, (s32)&arg0->unk_849C);
        func_088F1C7C(*temp);
        p = arg0->unk_8484;
        end = p + arg0->unk_8488;
        if (p != end) {
            temp2 = &arg0->unk_8494;
            do {
                func_088F1DB4(*temp2, (s32)p->unk_04, (s32)p->unk_204, (s32)p, p->unk_404);
                ++p;
            } while (p != end);
        }
        temp3 = *temp;
        temp3->unk_969 = 0;
        temp3->unk_968 = 0;
        temp3->unk_96A = arg1;
        func_088F1A78(temp3, arg2);
        ret = 1;
    }
    return ret;
}

static inline B_088FDC1C *unk_04(C_088FDC1C *arg0, A_088FDC1C *arg1) {
    if (arg1->unk_969 != 0) {
        if (arg1->unk_920 >= 0) {
            return &arg0->unk_8484[arg1->unk_920];
        }
    }
    return NULL;
}

void func_088FDC1C(S_088FDC1C *arg0, void *arg1) {
    s32 temp;
    C_088FDC1C *s;
    s32 *temp2;
    s32 *temp3;
    s32 temp4;
    s32 temp5, temp6;
    A_088FDC1C *t;
    u8 b;
    s32 temp7;
    A_088FDC1C **temp9;
    B_088FDC1C *p;
    B_088FDC1C *base;
    B_088FDC1C *end;

    temp = func_08852EB8(arg1);
    if (temp == 0) {
        temp2 = func_0885356C(arg1, 0, 0, 4);
        temp3 = func_0885356C(arg1, 1, 0, 4);
        temp4 = *(volatile s32 *)temp2;
        arg0->unk_14 = temp4;
        temp5 = *(volatile s32 *)temp3;
        temp6 = temp4 > 0;
        temp5 = -(temp5 == 0);
        s = &arg0->unk_10->unk_131CD8;
        if (!unk_00(s, temp6, temp5)) {
            func_08852F00(arg1, 0);
            return;
        }
        func_08852EDC(arg1, temp + 1);
    }
    s = &arg0->unk_10->unk_131CD8;
    temp9 = &s->unk_8494;
    t = *(A_088FDC1C *volatile *)(u32)temp9;
    b = t->unk_969;
    if (b != 0) {
        s32 temp8 = t->unk_920 < 0;
        if (temp8 != 0) {
            temp8 = b != 0;
        }
        if (temp8 != 0) {
            temp7 = arg0->unk_14;
        } else {
            temp7 = unk_04(s, s->unk_8494)->unk_00;
        }
        p = s->unk_8484;
        base = *(B_088FDC1C *volatile *)(u32)&s->unk_8484;
        if (p != base + s->unk_8488) {
            end = base + *(volatile s32 *)(u32)&s->unk_8488;
            do {
                ++p;
            } while (p != end);
        }
        s->unk_8488 = 0;
        t = s->unk_8494;
        if (t != NULL) {
            func_088F1C7C(t);
        }
        func_08852C5C(arg1, temp7, 0);
        func_08852F00(arg1, 0);
    }
}
