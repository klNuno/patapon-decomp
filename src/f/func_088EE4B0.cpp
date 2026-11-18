#include "common.h"

extern "C" {

class C088EE4B0 {
public:
    virtual void v08();
    virtual s32 v0C();
};

typedef struct {
    u8 pad_00[0xD80];
    f32 unk_D80;
} U088EE4B0;

typedef struct {
    u8 pad_00[8];
    U088EE4B0 **unk_08;
} L088EE4B0;

typedef struct {
    u8 pad_00[0x3B0];
    C088EE4B0 unk_3B0;
    u8 pad_3B4[0x25C];
    L088EE4B0 *unk_610;
    u8 pad_614[0x78C];
    void *unk_DA0;
    u8 pad_DA4[0x9E8];
    f32 unk_178C;
} G088EE4B0;

typedef struct {
    u8 pad_00[0x14];
    G088EE4B0 *unk_14;
} S088EE4B0;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
f32 func_088A87F0(void *);

void func_088EE4B0(S088EE4B0 *arg0, void *arg1) {
    s32 *a;
    f32 *b;
    f32 *c;
    U088EE4B0 *u;
    s32 has;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    if (arg0->unk_14->unk_3B0.v0C() > 0) {
        u = *arg0->unk_14->unk_610->unk_08;
        has = u != NULL;
        *a = has;
        if (has) {
            *b = u->unk_D80;
            if (arg0->unk_14->unk_DA0 != NULL) {
                *c = func_088A87F0(arg0->unk_14->unk_DA0);
            } else {
                *c = u->unk_D80;
            }
        } else {
            *c = arg0->unk_14->unk_178C;
        }
    }
    func_08852F00(arg1, 0);
}

}
