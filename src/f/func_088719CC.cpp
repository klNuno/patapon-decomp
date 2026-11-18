#include "common.h"

extern "C" {

class B_func_088719CC {
public:
    u8 pad_00[0x91C];
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

typedef struct {
    u8 pad_00[0x424];
} E_func_088719CC;

typedef struct {
    E_func_088719CC *unk_00;
    s32 unk_04;
} Vec_func_088719CC;

typedef struct {
    u8 pad_00[0x8484];
    Vec_func_088719CC unk_8484;
    u8 pad_848C[8];
    B_func_088719CC *unk_8494;
} Obj_func_088719CC;

void func_088719CC(Obj_func_088719CC *arg0) {
    E_func_088719CC *p;
    Vec_func_088719CC *v;
    s32 *n;

    p = arg0->unk_8484.unk_00;
    v = &arg0->unk_8484;
    if ((u32)p != (u32)(*(E_func_088719CC **)v + arg0->unk_8484.unk_04)) {
        n = &arg0->unk_8484.unk_04;
        do {
            p++;
        } while (p != v->unk_00 + *n);
    }
    arg0->unk_8484.unk_04 = 0;
    if (arg0->unk_8494 != NULL) {
        arg0->unk_8494->vfunc_0C();
    }
}

}
