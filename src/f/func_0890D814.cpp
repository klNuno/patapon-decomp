#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E60_0890D814;

typedef struct {
    u8 pad_00[0x74];
} E74_0890D814;

typedef struct {
    E60_0890D814 *unk_00;
    s32 unk_04;
} V60_0890D814;

typedef struct {
    E74_0890D814 *unk_00;
    s32 unk_04;
} V74_0890D814;

typedef struct {
    u8 pad_00[0xD84];
    V60_0890D814 unk_D84;
} I_0890D814;

typedef struct {
    void *unk_00;
    I_0890D814 unk_04;
} M_0890D814;

typedef struct {
    u8 pad_00[0x7404];
    V74_0890D814 unk_7404;
} A0_0890D814;

class B_0890D814 {
public:
    virtual void v08();
    virtual void v0C();
};

typedef struct {
    u8 pad_00[0xA0];
    A0_0890D814 unk_A0;
    u8 unk_74AC[0x76014];
    u8 unk_7D4C0[0x10];
    M_0890D814 unk_7D4D0;
} Obj_0890D814;

extern u8 D_08A44CAC[];
extern u8 D_08A44C60[];
extern u8 D_08A44C14[];
void func_0890D624(void *, s32);
void func_0890D7B0(void *, s32);
void func_0880416C(void *);

Obj_0890D814 *func_0890D814(Obj_0890D814 *arg0, s16 arg1) {
    E60_0890D814 *q;
    V60_0890D814 *w;
    E74_0890D814 *p;
    V74_0890D814 *v;

    if (arg0 != NULL) {
        if (&arg0->unk_7D4D0 != NULL) {
            arg0->unk_7D4D0.unk_00 = D_08A44CAC;
            if (&arg0->unk_7D4D0 != NULL) {
                arg0->unk_7D4D0.unk_00 = D_08A44C60;
                ((B_0890D814 *)&arg0->unk_7D4D0)->v0C();
                if (&arg0->unk_7D4D0.unk_04 != NULL) {
{
E60_0890D814 *p0 = arg0->unk_7D4D0.unk_04.unk_D84.unk_00;
E60_0890D814 *&data = arg0->unk_7D4D0.unk_04.unk_D84.unk_00;
if (p0 != *(E60_0890D814 **)&data + arg0->unk_7D4D0.unk_04.unk_D84.unk_04) {
s32 &size = arg0->unk_7D4D0.unk_04.unk_D84.unk_04;
do {
p0++;
} while (p0 != data + size);
}
}
                    arg0->unk_7D4D0.unk_04.unk_D84.unk_04 = 0;
                }
                if (&arg0->unk_7D4D0 != NULL) {
                    arg0->unk_7D4D0.unk_00 = D_08A44C14;
                }
            }
        }
        if (arg0->unk_74AC != NULL) {
            func_0890D624(arg0->unk_7D4C0, 0);
            func_0890D7B0(arg0->unk_74AC, 0);
        }
        if (&arg0->unk_A0 != NULL) {
            p = arg0->unk_A0.unk_7404.unk_00;
            v = &arg0->unk_A0.unk_7404;
            if ((u32)p != (u32)(p + arg0->unk_A0.unk_7404.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_A0.unk_7404.unk_04);
            }
            arg0->unk_A0.unk_7404.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
