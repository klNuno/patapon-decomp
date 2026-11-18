#include "common.h"

extern "C" {

struct A088E8288_Base {
    u8 pad_00[0x28];
};

struct A088E8288 : A088E8288_Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(s32);
};

typedef struct {
    u8 pad_00[0x30];
    A088E8288 unk_30;
} R088E8288;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W088E8288;

typedef struct {
    u8 pad_00[0x14];
    W088E8288 *unk_14;
} T088E8288;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_08899E18(s32, s32);
s32 func_08894FBC(s32, s32, s32);

void func_088E8288(T088E8288 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    R088E8288 *r;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_14 != NULL) {
        r = (R088E8288 *)func_08894FBC(func_08899E18(arg0->unk_14->unk_36B10, 1), *a, 0);
        if (r != NULL) {
            r->unk_30.v3(*b);
        }
    }
    func_08852F00(arg1, 0);
}

}
