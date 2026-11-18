#include "common.h"

extern "C" {

class Alloc_0884E54C {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32 *);
};

typedef struct {
    s32 *unk_00;
    u32 unk_04;
    Alloc_0884E54C *unk_08;
} Vec_0884E54C;

typedef struct {
    u8 pad_00[0x4];
    Vec_0884E54C unk_04;
} M1A8_0884E54C;

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_0884E54C;

typedef struct {
    u8 pad_00[0x404];
    V_0884E54C unk_404;
} M1D8_0884E54C;

typedef struct {
    u8 pad_00[0x194];
    u8 unk_194[0x10];
} M04_0884E54C;

typedef struct {
    u8 pad_00[0x20];
} M1B8_0884E54C;

typedef struct {
    void *unk_00;
    M04_0884E54C unk_04;
    M1A8_0884E54C unk_1A8;
    M1B8_0884E54C unk_1B8;
    M1D8_0884E54C unk_1D8;
} Obj_0884E54C;

extern u8 D_08A44838[];

void func_0880416C(void *);
void func_0884E13C(void *, s32);
void func_0884E2C8(void *, s32);
void func_0884EAC0(void *, s16);

Obj_0884E54C *func_0884E54C(Obj_0884E54C *arg0, s16 arg1) {
    s32 *p;
    V_0884E54C *v;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A44838;
        if (&arg0->unk_1D8 != NULL) {
            p = arg0->unk_1D8.unk_404.unk_00;
            v = &arg0->unk_1D8.unk_404;
            if ((u32)p != (u32)(p + arg0->unk_1D8.unk_404.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_1D8.unk_404.unk_04);
            }
            arg0->unk_1D8.unk_404.unk_04 = 0;
        }
        func_0884EAC0(&arg0->unk_1B8, -1);
        if (&arg0->unk_1A8 != NULL) {
            if (&arg0->unk_1A8.unk_04 != NULL) {
                if (arg0->unk_1A8.unk_04.unk_04 != 0) {
                    arg0->unk_1A8.unk_04.unk_08->unk_10(arg0->unk_1A8.unk_04.unk_00);
                }
            }
        }
        if (&arg0->unk_04 != NULL) {
            func_0884E13C(arg0->unk_04.unk_194, 0);
            func_0884E2C8(&arg0->unk_04, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
