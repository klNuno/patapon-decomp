#include "common.h"

extern "C" {

struct A_0891F5C8 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_0891F5C8 {
    s32 *unk_00;
    s32 get() {
        return unk_00 != NULL ? *unk_00 : 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_0891F5C8 {
    void *unk_00;
    C_0891F5C8 unk_04;
};

typedef struct {
    s32 unk_00;
    A_0891F5C8 *unk_04;
    SP_0891F5C8 unk_08;
} E_0891F5C8;

typedef struct {
    E_0891F5C8 *unk_00;
    s32 unk_04;
} V_0891F5C8;

typedef struct {
    u8 pad_00[0x44];
    V_0891F5C8 unk_44;
} I_0891F5C8;

typedef struct {
    u8 pad_00[0x314];
    u8 unk_314[0x18];
} M_0891F5C8;

typedef struct {
    u8 pad_00[0x4];
    I_0891F5C8 unk_04;
    M_0891F5C8 unk_50;
    u8 unk_37C[0x4];
} Obj_0891F5C8;

void func_0880416C(void *);
void func_089458C8(void *, s32);
void func_0891F3D8(void *, s32);
void func_0891F564(void *, s32);
void func_08920388(void *, s32);

Obj_0891F5C8 *func_0891F5C8(Obj_0891F5C8 *arg0, s16 arg1) {
    E_0891F5C8 *p;
    V_0891F5C8 *v;
    s32 *sz;
    SP_0891F5C8 *s;

    if (arg0 != NULL) {
        func_089458C8(arg0->unk_37C, -1);
        if (&arg0->unk_50 != NULL) {
            func_0891F3D8(arg0->unk_50.unk_314, 0);
            func_0891F564(&arg0->unk_50, 0);
        }
        if (&arg0->unk_04 != NULL) {
            v = &arg0->unk_04.unk_44;
            p = arg0->unk_04.unk_44.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_04.unk_44.unk_04)) {
                sz = &arg0->unk_04.unk_44.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            s = &p->unk_08;
                            if (p->unk_08.unk_00 != NULL) {
                                if (p->unk_08.unk_04.release() == 0) {
                                    p->unk_04->v1(s->unk_00, p->unk_08.unk_04.unk_00, p->unk_00);
                                    func_08920388(s->unk_00, p->unk_00);
                                }
                            }
                        }
                    }
                    p++;
                } while (p != v->unk_00 + *sz);
            }
            arg0->unk_04.unk_44.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
