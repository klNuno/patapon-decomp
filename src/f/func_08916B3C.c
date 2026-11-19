#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[0xB];
    s32 unk_0C;
} R;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} T;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[0x1500 - 0x24];
    s32 unk_1500;
    u8 pad_1504[0xC];
    u8 unk_1510[0x8];
    R *unk_1518;
    u8 pad_151C[0x5];
    u8 unk_1521;
    u8 pad_1522[0x2];
    s32 unk_1524;
    u8 pad_1528[0x24CC - 0x1528];
    u8 unk_24CC;
} S;

extern void *D_08A8812C[];
extern void *D_08AD2070[];

s32 func_08860820(void *, s32);
void func_0887C240(void *, s32);
s32 func_088DD4B8(R *, s32);
void *func_08827A50(s32, s32);
void *func_088D809C(void *, s32, s32, S *);
void func_08916C9C(T *, void *, s32);
void func_08916AE0(T *, void *);
void func_0891592C(T *, s32);

s32 func_08916B3C(S *arg0, s32 arg1) {
    T t;
    s32 n;
    void *p;
    R **sp;

    if (arg0->unk_1521 == 0) {
        if (func_08860820(D_08A8812C[0] != NULL ? D_08A8812C[0] : NULL, 0) != 0) {
            func_0887C240(D_08AD2070[0] != NULL ? D_08AD2070[0] : NULL, arg1);
            if (arg0->unk_1518 != NULL) {
                arg0->unk_1521 = arg0->unk_1518->unk_00;
                sp = &arg0->unk_1518;
                if (arg0->unk_1521 != 0) {
                    return func_088DD4B8(*sp, arg1);
                }
            }
            return 0x10000;
        }
        if (arg0->unk_24CC == 0) {
            return 0x10000;
        }
        if (arg0->unk_1518 == NULL) {
            n = arg0->unk_20;
            p = func_08827A50(0x1D8010, n);
            if (p != NULL) {
                p = func_088D809C(p, arg0->unk_20, arg0->unk_1500, arg0);
            }
            func_08916C9C(&t, p, n);
            func_08916AE0(&t, arg0->unk_1510);
            func_0891592C(&t, -1);
            arg0->unk_1518->unk_0C = arg0->unk_1524;
        } else {
            arg0->unk_1521 = arg0->unk_1518->unk_00;
            return func_088DD4B8(arg0->unk_1518, arg1);
        }
    }
    if (arg0->unk_1518 != NULL) {
        return func_088DD4B8(arg0->unk_1518, arg1);
    }
    return 0x10000;
}
