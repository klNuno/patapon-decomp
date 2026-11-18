#include "common.h"

extern "C" {

class B_func_089D0D98 {
public:
    u8 pad_00[0x91C];
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

typedef struct {
    u8 pad_00[0x424];
} E_func_089D0D98;

typedef struct {
    E_func_089D0D98 *unk_00;
    s32 unk_04;
} Vec_func_089D0D98;

typedef struct {
    u8 pad_00[0x8484];
    Vec_func_089D0D98 unk_8484;
    u8 pad_848C[8];
    B_func_089D0D98 *unk_8494;
} Obj_func_089D0D98;

void func_089D0D98(Obj_func_089D0D98 *arg0) {
    E_func_089D0D98 *p;
    Vec_func_089D0D98 *v;
    s32 *n;

    p = arg0->unk_8484.unk_00;
    v = &arg0->unk_8484;
    if ((u32)p != (u32)(*(E_func_089D0D98 **)v + arg0->unk_8484.unk_04)) {
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
