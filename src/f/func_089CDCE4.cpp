#include "common.h"

extern "C" {

struct A_089CDCE4 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_089CDCE4 {
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

struct SP_089CDCE4 {
    void *unk_00;
    C_089CDCE4 unk_04;
};

typedef struct {
    s32 unk_00;
    A_089CDCE4 *unk_04;
    SP_089CDCE4 unk_08;
} E_089CDCE4;

typedef struct {
    u8 pad_00[0xA0];
    u8 unk_A0;
    u8 pad_A1[0x37];
    E_089CDCE4 *unk_D8;
    s32 unk_DC;
} Obj_089CDCE4;

s32 func_089D4460(void *, s32);
void func_089CDE94(E_089CDCE4 *, E_089CDCE4 *, E_089CDCE4 *);
void func_089CDF48(void *, s32);

s32 func_089CDCE4(Obj_089CDCE4 *arg0, s32 arg1) {
    E_089CDCE4 *p;
    E_089CDCE4 *end;
    E_089CDCE4 *e;
    SP_089CDCE4 *s;
    C_089CDCE4 *c;
    s32 r;
    s32 &size = arg0->unk_DC;
    E_089CDCE4 *&data = arg0->unk_D8;

    p = arg0->unk_D8;
    end = p + arg0->unk_DC;
    for (; p != end; p++) {
        r = func_089D4460(p->unk_08.unk_00, arg1);
        if (r != -1) {
            func_089CDE94(p, p + 1, data + size);
            arg0->unk_DC--;
            e = arg0->unk_D8 + arg0->unk_DC;
            if (e != NULL) {
                if (e != NULL) {
                    s = &e->unk_08;
                    if (e->unk_08.unk_00 != NULL) {
                        c = &e->unk_08.unk_04;
                        if (c->release() == 0) {
                            e->unk_04->v1(s->unk_00, *(s32 **)c, e->unk_00);
                            func_089CDF48(s->unk_00, e->unk_00);
                        }
                    }
                }
            }
            r = arg0->unk_A0 ? -1 : r;
            return r;
        }
    }
    return -1;
}

}
