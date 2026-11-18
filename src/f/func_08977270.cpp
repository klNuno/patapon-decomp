#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10();
};

typedef struct {
    volatile s32 unk_00, unk_04;
    s32 * volatile unk_08;
    s32 *unk_0C;
    s32 unk_10;
} U;

typedef struct { u8 pad_00[8]; U *unk_08; } V;

typedef struct {
    u8 pad_00[0x10];
    T unk_10;
    u8 pad_14[0xC];
    s32 unk_20, unk_24;
    u8 pad_28[0x208];
    u8 unk_230[0x28];
    u8 unk_258[0x28];
    u8 unk_280;
    u8 pad_281[3];
    f32 unk_284;
} S;

extern s32 func_0885A680(void);
void func_0888D554(T *, f32);
s32 func_0888D59C(char *);
s32 func_0888D5A4(void *, V *);
V *func_0888D610(void *);
s32 func_0888DA74(char *);

inline U *func_00(S *arg0) {
    s32 i;
    V *p;
    f32 a, b;

    i = arg0->unk_10.unk_0C();
    if (!(i < arg0->unk_10.unk_10())) {
        return NULL;
    }
    if (func_0888DA74((char *)arg0->unk_258) != 0) {
        return NULL;
    }
    p = func_0888D610(arg0->unk_258);
    if (p == NULL) {
        return NULL;
    }
    if ((u8)func_0888D5A4(arg0->unk_230, p) == 0) {
        return NULL;
    }
    arg0->unk_24 = func_0888D59C((char *)arg0->unk_230);
    a = (f32)arg0->unk_24 / (f32)arg0->unk_20;
    if (arg0->unk_280 != 0) {
        b = arg0->unk_284;
        if (a > b) {
            func_0888D554(&arg0->unk_10, 0.05f + b);
        }
    }
    return p->unk_08;
}

void func_08977270(S *arg0, s32 *arg1) {
    arg0 = (S *)func_00(arg0);
    U *p = (U *)arg0;
    if (p != NULL) {
        p->unk_0C = &p->unk_10;
        p->unk_04 = 0;
        p->unk_08 = NULL;
        p->unk_00 = 0;
        p->unk_04 = 0;
        p->unk_08 = NULL;
        p->unk_08 = arg1;
        if (arg1 != NULL) {
            p->unk_0C = arg1;
        }
        s32 *q = p->unk_0C;
        *q = func_0885A680();
        p->unk_00 = 2;
    }
}

}
