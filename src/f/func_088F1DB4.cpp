#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00[2];
} V;

typedef struct {
    u8 pad_00[0x808];
    s32 unk_808;
    u8 pad_80C[4];
    u8 unk_810[1];
} S;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    void *unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    s32 unk_1C;
    V unk_20;
    V unk_28;
    s32 unk_30;
    s32 unk_34;
    S *unk_38;
    s32 unk_3C;
    u8 pad_40[8];
} T;

typedef struct {
    u8 pad_00[0x48];
} U;

class C {
public:
    u8 pad_00[0x1C];
    virtual void unk_08(T *);
};

void *func_08807190(s32, void *);
void *func_088F1EC8(void *, const U *);
s32 func_088F1FF0(char *, s32);
s32 func_088F2000(char *);
void func_088F2008(U *, s32, s32, s32, C *);
extern f32 D_089FDC20[];
extern f32 D_089FDC28[];

void func_088F1DB4(S *arg0, s32 arg1, s32 arg2, s32 arg3, C *arg4) {
    U temp;
    T t;
    void *p;

    func_088F2008(&temp, arg1, arg2, arg3, arg4);
    p = func_08807190(0x40, (void *)func_088F1FF0((char *)arg0, func_088F2000((char *)arg0)));
    if (p != NULL) {
        func_088F1EC8(p, &temp);
    }
    arg0->unk_808++;
    if (arg4 != NULL) {
        t.unk_0C = arg0->unk_810;
        f32 x = D_089FDC20[0];
        t.unk_04 = arg1;
        t.unk_08 = arg2;
        f32 y = D_089FDC20[1];
        t.unk_20.unk_00[0] = x;
        t.unk_10 = arg3;
        f32 z = D_089FDC28[0];
        t.unk_20.unk_00[1] = y;
        t.unk_18 = 0;
        f32 w = D_089FDC28[1];
        t.unk_1C = 0;
        t.unk_00 = 0;
        t.unk_30 = 0;
        t.unk_34 = 0;
        t.unk_38 = arg0;
        t.unk_28.unk_00[0] = z;
        t.unk_28.unk_00[1] = w;
        t.unk_3C = arg0->unk_808;
        arg4->unk_08(&t);
    }
}

}
