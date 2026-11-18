#include "common.h"

extern "C" {

class L_0885CB00 {
public:
    virtual void v08();
    virtual s32 v0C();
    virtual s32 v10();
};

class N_0885CB00 {
public:
    u8 pad_00[8];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18(s32);
};

typedef struct {
    u8 pad_00[0x78];
    s32 unk_78;
    u8 pad_7C[4];
    L_0885CB00 unk_80;
    u8 pad_84[0x13BC];
    s32 unk_1440;
} Obj_0885CB00;

void *func_08827A50(s32, s32);
N_0885CB00 *func_0885B200(void *);
s32 func_0885B288(N_0885CB00 *, s32, s32, s32, s32, s32, s32, s32, s32);
N_0885CB00 **func_0885C8C8(L_0885CB00 *);
void func_0885D670(N_0885CB00 *, s32);

N_0885CB00 *func_0885CB00(Obj_0885CB00 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    N_0885CB00 *p;
    N_0885CB00 **slot;

    if (arg1 == 0) {
        return NULL;
    }
    if (arg0->unk_80.v0C() >= arg0->unk_80.v10()) {
        return NULL;
    }
    p = (N_0885CB00 *)func_08827A50(0xAC, arg0->unk_1440);
    if (p != NULL) {
        p = func_0885B200(p);
    }
    if (p == NULL) {
        return NULL;
    }
    if (p == NULL) {
        func_0885D670(p, arg0->unk_1440);
        return NULL;
    }
    if (!func_0885B288(p, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)) {
        func_0885D670(p, arg0->unk_1440);
        return NULL;
    }
    p->v18(arg0->unk_78);
    slot = func_0885C8C8(&arg0->unk_80);
    if (slot != NULL) {
        *slot = p;
    }
    return p;
}

}
