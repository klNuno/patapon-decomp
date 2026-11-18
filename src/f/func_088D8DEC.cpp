#include "common.h"

extern "C" {

struct A_088D8DEC {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088D8DEC {
    s32 *unk_00;
    s32 get() {
        return unk_00 != NULL ? *unk_00 : 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_088D8DEC {
    void *unk_00;
    C_088D8DEC unk_04;
};

typedef struct {
    s32 unk_00;
    A_088D8DEC *unk_04;
    SP_088D8DEC unk_08;
} E_088D8DEC;

typedef struct {
    E_088D8DEC *unk_00;
    u32 unk_04;
} V_088D8DEC;

typedef struct {
    u8 pad_00[0x104];
    V_088D8DEC unk_104;
} Obj_088D8DEC;

void func_08853A80(void *, s32);

void func_088D8DEC(Obj_088D8DEC *arg0) {
    E_088D8DEC *p;
    V_088D8DEC *v;
    u32 *n;
    SP_088D8DEC *s;

    p = arg0->unk_104.unk_00;
    v = &arg0->unk_104;
    if ((u32)p != (u32)(p + arg0->unk_104.unk_04)) {
        n = &arg0->unk_104.unk_04;
        do {
            if (p != NULL) {
                if (p != NULL) {
                    s = &p->unk_08;
                    if (p->unk_08.unk_00 != NULL) {
                        if (p->unk_08.unk_04.release() == 0) {
                            p->unk_04->v1(s->unk_00, p->unk_08.unk_04.unk_00, p->unk_00);
                            func_08853A80(s->unk_00, p->unk_00);
                        }
                    }
                }
            }
            p++;
        } while (p != v->unk_00 + *n);
    }
    arg0->unk_104.unk_04 = 0;
}

}
