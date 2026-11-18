#include "common.h"

extern "C" {

struct T08924758_C {
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1C();
    virtual void vfunc_20();
    virtual void vfunc_24();
};

typedef struct {
    T08924758_C **unk_00;
    s32 unk_04;
} T08924758_V;

typedef struct {
    u8 pad_00[0x44];
    T08924758_V unk_44;
    u8 pad_4C[0x18];
    s32 unk_64;
    u8 pad_68[0x11];
    u8 unk_79;
    u8 unk_7A;
} T08924758;

extern void func_0883BF6C(s32, s32);

void func_08924758(T08924758 *arg0) {
    T08924758_C **p;
    T08924758_V *v;
    s32 *sz;

    func_0883BF6C(arg0->unk_64, 1);
    arg0->unk_7A = 1;
    arg0->unk_79 = 0;
    p = arg0->unk_44.unk_00;
    v = &arg0->unk_44;
    if ((u32)p != (u32)(p + arg0->unk_44.unk_04)) {
        sz = &arg0->unk_44.unk_04;
        do {
            (*p)->vfunc_24();
            p++;
        } while (p != v->unk_00 + *sz);
    }
}

}
