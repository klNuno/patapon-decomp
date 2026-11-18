#include "common.h"

extern "C" {

struct A_0895EFE4 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_0895EFE4 {
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

struct SP_0895EFE4 {
    void *unk_00;
    C_0895EFE4 unk_04;
};

typedef struct {
    s32 unk_00;
    A_0895EFE4 *unk_04;
    SP_0895EFE4 unk_08;
} Obj_0895EFE4;

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    Obj_0895EFE4 unk_0C;
} S_0895EFE4;

extern u8 D_08A47A04[];

void func_0880416C(void *);
void func_088CDC08(void *, s32);

S_0895EFE4 *func_0895EFE4(S_0895EFE4 *arg0, s16 arg1) {
    SP_0895EFE4 *s;
    C_0895EFE4 *c;

    if (arg0 != NULL) {
        arg0->unk_08 = D_08A47A04;
        if (&arg0->unk_0C != NULL) {
        if (&arg0->unk_0C != NULL) {
            s = &arg0->unk_0C.unk_08;
            if (arg0->unk_0C.unk_08.unk_00 != NULL) {
                c = &arg0->unk_0C.unk_08.unk_04;
                if (c->release() == 0) {
                    arg0->unk_0C.unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_0C.unk_00);
                    func_088CDC08(s->unk_00, arg0->unk_0C.unk_00);
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
