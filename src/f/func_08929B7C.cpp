#include "common.h"

extern "C" {
struct A {
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

void func_0892AC5C(s32, char **);

struct H {
    s32 unk_00;
    A *unk_04;
    s32 unk_08;
    s32 *unk_0C;

    void unk_10() {
        if (this != NULL) {
            s32 &r = unk_08;
            if (r != 0) {
                --**(s32 *volatile *)&unk_0C;
                s32 *p = unk_0C;
                if ((p != NULL ? *p : 0) == 0) {
                    unk_04->unk_0C(r, p, unk_00);
                    func_0892AC5C(r, (char **)unk_00);
                }
            }
        }
    }
};

typedef struct L_089299D4 {
    struct L_089299D4 *unk_00;
    struct L_089299D4 *unk_04;
    u8 pad_08[0x1C];
    void *unk_24;
} L_089299D4;

typedef struct {
    u8 pad_00[0x304];
    s32 *unk_304;
    s32 unk_308;
} U;

typedef struct {
    u8 pad_00[0x14];
    s32 *unk_14;
    s32 unk_18;
    s32 unk_1C;
} V;

typedef struct {
    s32 unk_00;
    u8 unk_04[0x1004];
    H *unk_1008;
    s32 unk_100C;
    u8 pad_1010[8];
    U unk_1018;
    L_089299D4 unk_1324;
    L_089299D4 unk_134C;
    u8 pad_1374[0xC];
    u8 unk_1380[0x2A0];
    V unk_1620;
    u8 unk_1640[0x20];
    u8 unk_1660[4];
} T;

extern u8 D_08A45350[];
void func_0880416C(void *);
void func_088804C0(void *, s32);
void func_0888065C(L_089299D4 *);
void func_08929D90(void);
void func_089315FC(void *, s32);
void func_089458C8(void *, s32);

T *func_08929B7C(T *arg0, s16 arg1) {
    H *p;

    if (arg0 != NULL) {
        func_08929D90();
        if (arg0->unk_1660 != NULL) {
            func_088804C0(arg0->unk_1660, -1);
        }
        func_089458C8(arg0->unk_1640, -1);
        if (&arg0->unk_1620 != NULL) {
            s32 *q = *(s32 *volatile *)&arg0->unk_1620.unk_14;
            s32 n = arg0->unk_1620.unk_18;
            s32 *&r = arg0->unk_1620.unk_14;
            if ((u32)q != (u32)(q + n)) {
                do {
                    q++;
                } while (q != r + n);
            }
            arg0->unk_1620.unk_18 = 0;
        }
        func_089315FC(arg0->unk_1380, -1);
        if (&arg0->unk_134C != NULL) {
            arg0->unk_134C.unk_24 = D_08A45350;
            func_0888065C(&arg0->unk_134C);
            func_088804C0(&arg0->unk_134C, -1);
        }
        if (&arg0->unk_1324 != NULL) {
            arg0->unk_1324.unk_24 = D_08A45350;
            func_0888065C(&arg0->unk_1324);
            func_088804C0(&arg0->unk_1324, -1);
        }
        if (&arg0->unk_1018 != NULL) {
            s32 *q = *(s32 *volatile *)&arg0->unk_1018.unk_304;
            s32 n = arg0->unk_1018.unk_308;
            s32 *&r = arg0->unk_1018.unk_304;
            if ((u32)q != (u32)(q + n)) {
                do {
                    q++;
                } while (q != r + n);
            }
            arg0->unk_1018.unk_308 = 0;
        }
        if (arg0->unk_04 != NULL) {
            p = arg0->unk_1008;
            H *&r = arg0->unk_1008;
            if ((u32)p != (u32)(p + arg0->unk_100C)) {
                s32 &n = arg0->unk_100C;
                do {
                    if (p != NULL) {
                        p->unk_10();
                    }
                    p++;
                } while (p != r + n);
            }
            arg0->unk_100C = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
}
