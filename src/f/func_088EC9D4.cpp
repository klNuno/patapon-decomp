#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0xC];
    s32 *unk_0C;
} E088EC9D4;

typedef struct N088EC9D4 {
    s32 unk_00;
    struct N088EC9D4 *unk_04;
    E088EC9D4 *unk_08;
} N088EC9D4;

typedef struct {
    u8 pad_00[0x224];
    N088EC9D4 *unk_224;
    u8 pad_228[0x240 - 0x228];
    u32 unk_240;

    E088EC9D4 *get() {
        struct { N088EC9D4 *unk_00; } it;
        if (unk_240 < 2) {
            return NULL;
        }
        it.unk_00 = unk_224;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        return it.unk_00->unk_08;
    }
} L088EC9D4;

typedef struct {
    u8 pad_00[0x6B0];
    L088EC9D4 unk_6B0;
    u8 pad_8F4[0x960 - 0x8F4];
    void *unk_960;
} T088EC9D4;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W088EC9D4;

typedef struct {
    u8 pad_00[0x14];
    W088EC9D4 *unk_14;
} S088EC9D4;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088533F8(void *, s32);
s32 func_0885A680(void);
s32 func_08899E18(s32, s32);
T088EC9D4 *func_08894FBC(s32, s32, s32);
void func_088ECC50(void *, s32 *, s32 *, u8);

void func_088EC9D4(S088EC9D4 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    u8 e;
    T088EC9D4 *r;
    s32 *p;
    L088EC9D4 *t;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = func_088533F8(arg1, 3);
    r = func_08894FBC(func_08899E18(arg0->unk_14->unk_36B10, *a), *b, 0);
    if (r != NULL && r->unk_960 != NULL) {
        func_088ECC50(r->unk_960, c, d, e);
        t = &r->unk_6B0;
        p = t->get()->unk_0C;
        *p = func_0885A680();
    }
    func_08852F00(arg1, 0);
}

}
