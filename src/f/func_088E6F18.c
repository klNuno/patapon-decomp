#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
} S;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S1;

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
    f32 unk_44;
    f32 unk_48;
    s32 unk_4C;
} R;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
R *func_0885AB7C(s32, s32, s32);
S1 *func_08877444(u8 *);
extern u8 *D_08AD1F14[];

void func_088E6F18(S *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    s32 *b = func_0885356C(arg1, 1, 1, 4);
    f32 *c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    f32 *d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    s32 *e = func_0885356C(arg1, 4, 1, 4);
    R *r;

    if (arg0->unk_14 != NULL) {
        r = func_0885AB7C(func_08877444(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_10, 0, *a);
        if (r != NULL) {
            *b = r->unk_40;
            *c = r->unk_44;
            *d = r->unk_48;
            *e = r->unk_4C;
        }
    }
    func_08852F00(arg1, 0);
}
