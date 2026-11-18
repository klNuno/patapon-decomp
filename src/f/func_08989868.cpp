#include "common.h"

extern "C" {

class Alloc_08989868 {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

struct RC_08989868 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        } else {
            return 0;
        }
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct M_08989868 {
    s32 unk_00;
    Alloc_08989868 *unk_04;
    s32 unk_08;
    RC_08989868 unk_0C;
};

struct W_08989868 {
    M_08989868 unk_00;
};

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_08989868;

typedef struct {
    u8 pad_00[0x24];
    V_08989868 unk_24;
} I_08989868;

typedef struct Obj_08989868 {
    u8 pad_00[0x18];
    W_08989868 unk_18;
    I_08989868 unk_28;
} Obj_08989868;

void func_0880416C(void *);
void func_08989974(Obj_08989868 *);
void func_0898A334(s32, s32);

Obj_08989868 *func_08989868(Obj_08989868 *arg0, s16 arg1) {
    s32 *p;
    V_08989868 *v;

    if (arg0 != NULL) {
        func_08989974(arg0);
        if (&arg0->unk_28 != NULL) {
            p = arg0->unk_28.unk_24.unk_00;
            v = &arg0->unk_28.unk_24;
            if ((u32)p != (u32)(p + arg0->unk_28.unk_24.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_28.unk_24.unk_04);
            }
            arg0->unk_28.unk_24.unk_04 = 0;
        }
        if (&arg0->unk_18 != NULL) {
            if (&arg0->unk_18.unk_00 != NULL) {
                s32 *h = &arg0->unk_18.unk_00.unk_08;
                if (arg0->unk_18.unk_00.unk_08 != 0) {
                    RC_08989868 *rc = &arg0->unk_18.unk_00.unk_0C;
                    if (arg0->unk_18.unk_00.unk_0C.release() == 0) {
                        arg0->unk_18.unk_00.unk_04->unk_0C(*h, rc->unk_00, arg0->unk_18.unk_00.unk_00);
                        func_0898A334(*h, arg0->unk_18.unk_00.unk_00);
                    }
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
