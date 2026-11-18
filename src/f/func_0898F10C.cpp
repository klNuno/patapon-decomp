#include "common.h"

extern "C" {

class E_0898F10C {
public:
    u8 pad_00[0xE4];
    virtual void v08(s32);
    u8 pad_E8[8];
};

typedef struct {
    u8 pad_00[0x3C10];
    E_0898F10C *unk_3C10;
    s32 unk_3C14;
    u8 pad_3C18[0x110];
    E_0898F10C **unk_3D28;
    s32 unk_3D2C;
} Obj_0898F10C;

s32 func_0898F490(Obj_0898F10C *);
E_0898F10C *func_0898F478(Obj_0898F10C *, s32);
E_0898F10C *func_08807190(s32, E_0898F10C *);
void func_0898F2D8(E_0898F10C *, s32);

void func_0898F10C(Obj_0898F10C *arg0, s32 arg1) {
    E_0898F10C **p;
    E_0898F10C ***pd;
    E_0898F10C *e;
    E_0898F10C **d;
    s32 *n;
    E_0898F10C **slot;
    u32 i;

    p = arg0->unk_3D28;
    pd = &arg0->unk_3D28;
    if ((u32)p != (u32)(p + arg0->unk_3D2C)) {
        do {
            p++;
        } while (p != *pd + arg0->unk_3D2C);
    }
    arg0->unk_3D2C = 0;

    if (arg1 != 0) {
        e = arg0->unk_3C10;
        d = &arg0->unk_3C10;
        if ((u32)e != (u32)(e + arg0->unk_3C14)) {
            n = &arg0->unk_3C14;
            do {
                e->v08(-1);
                e++;
            } while (e != *d + *n);
        }
        arg0->unk_3C14 = 0;
        i = 0;
        n = &arg0->unk_3C14;
        for (; i < 0x40; i++) {
            e = func_08807190(0xF0, func_0898F478(arg0, func_0898F490(arg0)));
            if (e != NULL) {
                func_0898F2D8(e, arg1);
            }
            arg0->unk_3C14++;
            e = *d + *n - 1;
            slot = arg0->unk_3D28 + arg0->unk_3D2C;
            if (slot != NULL) {
                *slot = e;
            }
            arg0->unk_3D2C++;
        }
    } else {
        i = 0;
        d = &arg0->unk_3C10;
        for (; i < 0x40; i++) {
            e = *d + (0x3F - i);
            slot = arg0->unk_3D28 + arg0->unk_3D2C;
            if (slot != NULL) {
                *slot = e;
            }
            arg0->unk_3D2C++;
        }
    }
}

}
