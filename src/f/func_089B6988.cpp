#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x424];
} E_089B6988;

typedef struct {
    E_089B6988 *unk_00;
    s32 unk_04;
} Vec_089B6988;

class C_089B6988 {
public:
    u8 pad_00[0x91C];
    virtual void v0();
    virtual void v1();
};

typedef struct {
    u8 pad_00[0x8484];
    Vec_089B6988 unk_8484;
    u8 pad_848C[0x8];
    C_089B6988 *unk_8494;
} Obj_089B6988;

void func_089B6988(Obj_089B6988 *arg0) {
    E_089B6988 *p;
    Vec_089B6988 *vp;
    s32 *sp;

    p = arg0->unk_8484.unk_00;
    vp = &arg0->unk_8484;
    if ((u32)p != (u32)(*(E_089B6988 **)vp + arg0->unk_8484.unk_04)) {
        sp = &arg0->unk_8484.unk_04;
        do {
            p++;
        } while (p != vp->unk_00 + *sp);
    }
    arg0->unk_8484.unk_04 = 0;
    if (arg0->unk_8494 != NULL) {
        arg0->unk_8494->v1();
    }
}

}
