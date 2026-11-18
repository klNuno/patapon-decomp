#include "common.h"

extern "C" {

class Alloc_088E6040 {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

void func_08891578(s32, s32);

struct M_088E6040 {
    s32 unk_00;
    Alloc_088E6040 *unk_04;
    s32 unk_08;
    s32 *unk_0C;

    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->unk_0C(p, c, unk_00);
                func_08891578(p, unk_00);
            }
        }
    }
};

typedef struct {
    void *unk_00;
    u8 pad_04[0x49C];
    M_088E6040 unk_4A0;
} Obj_088E6040;

extern u8 D_08A46568[];
extern u8 D_08A4638C[];
void func_08852860(Obj_088E6040 *, s32);
void func_0880416C(void *);

Obj_088E6040 *func_088E6040(Obj_088E6040 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A46568;
        if (&arg0->unk_4A0 != NULL) {
            if (&arg0->unk_4A0 != NULL) {
                arg0->unk_4A0.release();
            }
        }
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A4638C;
            func_08852860(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
