#include "common.h"

extern "C" {

struct A_088B8B30 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088B8B30 {
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

struct SP_088B8B30 {
    void *unk_00;
    C_088B8B30 unk_04;
};

typedef struct {
    s32 unk_00;
    A_088B8B30 *unk_04;
    SP_088B8B30 unk_08;
} Obj_088B8B30;

typedef struct {
    u8 pad_00[0x404];
    s32 unk_404;
    u32 unk_408;
} V_088B8B30;

typedef struct {
    u8 pad_00[0x58];
    V_088B8B30 unk_58;
} S_088B8B30;

void func_088B8BFC(Obj_088B8B30 *, V_088B8B30 *, s32);
void func_088B84E8(void *, s32);
void func_088B5A98(s32, char **);
void func_088CED30(S_088B8B30 *, s32);

void func_088B8B30(S_088B8B30 *arg0, s32 arg1) {
    u32 i;
    Obj_088B8B30 o;
    SP_088B8B30 *s;
    C_088B8B30 *c;

    func_088CED30(arg0, arg1);
    i = 0;
    if (arg0->unk_58.unk_408 != 0) {
    do {
        func_088B8BFC(&o, &arg0->unk_58, i);
        func_088B84E8(o.unk_08.unk_00, arg1);
        s = &o.unk_08;
        if (o.unk_08.unk_00 != NULL) {
            c = &o.unk_08.unk_04;
            if (c->release() == 0) {
                o.unk_04->v1(s->unk_00, c->unk_00, o.unk_00);
                func_088B5A98((s32)s->unk_00, (char **)o.unk_00);
            }
        }
        i++;
    } while (i < arg0->unk_58.unk_408);
    }
}

}
