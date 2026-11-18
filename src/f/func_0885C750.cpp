#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

class O_0885C750 {
public:
    u8 pad_00[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32);
};

class L_0885C750 {
public:
    virtual void v0();
    virtual s32 v1();
    virtual s32 v2();
};

typedef struct {
    u8 pad_00[0x78];
    s32 unk_78;
    u8 pad_7C[4];
    L_0885C750 unk_80;
    u8 pad_84[0x13BC];
    s32 unk_1440;
} G_0885C750;

O_0885C750 *func_08827A50(s32, s32);
O_0885C750 *func_0885AD78(O_0885C750 *);
s32 func_0885ADF8(O_0885C750 *, s32, s32, s32, s32, s32, s32, s32, s32);
O_0885C750 **func_0885C8C8(L_0885C750 *);
void func_0885D61C(O_0885C750 *, s32);

O_0885C750 *func_0885C750(G_0885C750 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    O_0885C750 *p;

    if (arg1 == 0) {
        return NULL;
    }
    if (arg0->unk_80.v1() >= arg0->unk_80.v2()) {
        return NULL;
    }
    p = func_08827A50(0xA4, arg0->unk_1440);
    if (p != NULL) {
        p = func_0885AD78(p);
    }
    if (p == NULL) {
        return NULL;
    }
    if (p == NULL) {
        func_0885D61C(p, arg0->unk_1440);
        return NULL;
    }
    if (func_0885ADF8(p, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8) == 0) {
        func_0885D61C(p, arg0->unk_1440);
        return NULL;
    }
    p->v4(arg0->unk_78);
    new (func_0885C8C8(&arg0->unk_80)) O_0885C750 *(p);
    return p;
}

}
