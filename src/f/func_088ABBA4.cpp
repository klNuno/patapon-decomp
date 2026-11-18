#include "common.h"

extern "C" {

struct A088ABBA4 {
    virtual void v0();
    virtual s32 v1();
};

typedef struct {
    u8 pad_00[0x3B0];
    A088ABBA4 unk_3B0;
} R088ABBA4;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W088ABBA4;

typedef struct {
    u8 pad_00[0x14];
    W088ABBA4 *unk_14;
} T088ABBA4;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_08899E18(s32, s32);
s32 func_08894FBC(s32, s32, s32);

void func_088ABBA4(T088ABBA4 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 w;
    R088ABBA4 *r;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    *b = 0;
    w = func_08899E18(arg0->unk_14->unk_36B10, 1);
    if (w != 0) {
        r = (R088ABBA4 *)func_08894FBC(w, *a, 0);
        if (r != NULL) {
            *b = r->unk_3B0.v1();
        }
    }
    func_08852F00(arg1, 0);
}

}
