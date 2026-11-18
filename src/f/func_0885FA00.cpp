#include "common.h"

extern "C" {

struct A_0885FA00 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_0885FA00 {
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

struct SP_0885FA00 {
    void *unk_00;
    C_0885FA00 unk_04;
};

typedef struct {
    s32 unk_00;
    A_0885FA00 *unk_04;
    SP_0885FA00 unk_08;
} M_0885FA00;

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} N_0885FA00;

typedef struct {
    u8 pad_00[4];
    N_0885FA00 unk_04;
    u8 pad_18[4];
    M_0885FA00 unk_1C;
} B_0885FA00;

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0xC];
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    void *unk_1C;
    u8 pad_20[0x98];
    B_0885FA00 unk_B8;
    u8 pad_E4[0x20];
    void *unk_104;
} O_0885FA00;

extern u8 D_08A44A3C[];
extern u8 D_08A44AB0[];
extern u8 D_08A44AC8[];
extern u8 D_08A44AD8[];

void func_0880416C(void *);
void func_0885DE4C(void *);
void func_0885F7EC(void *, s32);

O_0885FA00 *func_0885FA00(O_0885FA00 *arg0, s16 arg1) {
    SP_0885FA00 *s;
    C_0885FA00 *c;

    if (arg0 != NULL) {
        arg0->unk_104 = D_08A44AB0;
        if (&arg0->unk_B8 != NULL) {
            if (&arg0->unk_B8.unk_1C != NULL) {
                if (&arg0->unk_B8.unk_1C != NULL) {
                    s = &arg0->unk_B8.unk_1C.unk_08;
                    if (arg0->unk_B8.unk_1C.unk_08.unk_00 != NULL) {
                        c = &arg0->unk_B8.unk_1C.unk_08.unk_04;
                        if (c->release() == 0) {
                            arg0->unk_B8.unk_1C.unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_B8.unk_1C.unk_00);
                            func_0885F7EC(s->unk_00, arg0->unk_B8.unk_1C.unk_00);
                        }
                    }
                }
            }
            if (&arg0->unk_B8.unk_04 != NULL) {
                arg0->unk_B8.unk_04.unk_10 = D_08A44A3C;
            }
        }
        if (arg0->unk_04 != NULL) {
            arg0->unk_1C = D_08A44AC8;
            if (arg0->unk_04 != NULL) {
                arg0->unk_1C = D_08A44AD8;
                func_0885DE4C(arg0->unk_04);
                arg0->unk_10 = 0;
                arg0->unk_18 = 0;
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
