#include "common.h"

extern "C" {

struct A_08889EAC {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_08889EAC {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_08889EAC {
    void *unk_00;
    C_08889EAC unk_04;
};

typedef struct {
    s32 unk_00;
    A_08889EAC *unk_04;
    SP_08889EAC unk_08;
} M_08889EAC;

typedef struct {
    u8 pad_00[0x614];
    u8 unk_614[0x4];
} N_08889EAC;

typedef struct {
    u8 pad_00[0x4];
    N_08889EAC unk_04;
    u8 pad_61C[0xC];
    u8 unk_628[0x72C];
    M_08889EAC unk_D54;
} Obj_08889EAC;

void func_0880416C(void *);
void func_08889A2C(void *, s32);
void func_088B2588(void *, s32);
void func_08889CBC(void *, s32);
void func_08889E48(void *, s32);

Obj_08889EAC *func_08889EAC(Obj_08889EAC *arg0, s16 arg1) {
    SP_08889EAC *s;
    C_08889EAC *c;

    if (arg0 != NULL) {
        if (&arg0->unk_D54 != NULL) {
            if (&arg0->unk_D54 != NULL) {
                s = &arg0->unk_D54.unk_08;
                if (arg0->unk_D54.unk_08.unk_00 != NULL) {
                    c = &arg0->unk_D54.unk_08.unk_04;
                    if (c->release() == 0) {
                        arg0->unk_D54.unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_D54.unk_00);
                        func_08889A2C(s->unk_00, arg0->unk_D54.unk_00);
                    }
                }
            }
        }
        func_088B2588(arg0->unk_628, -1);
        if (&arg0->unk_04 != NULL) {
            func_08889CBC(arg0->unk_04.unk_614, 0);
            func_08889E48(&arg0->unk_04, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
