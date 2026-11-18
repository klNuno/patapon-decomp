#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x22];
    s16 unk_22;
    u8 pad_24[0x164];
} Elem_08942F4C;

typedef struct {
    u8 pad_00[0x64];
    u32 unk_64;
    u8 pad_68[0x120];
    Elem_08942F4C unk_188[1];
} Sub_08942F4C;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x260];
    Sub_08942F4C unk_264;
} Mgr_08942F4C;

typedef struct {
    u8 pad_00[0x14A0];
    Mgr_08942F4C *unk_14A0;
} Glob_08942F4C;

extern Glob_08942F4C *D_08AD1F14[];

class M_08942F4C {
public:
    virtual void vf_08();
    virtual void vf_0C();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18();
    virtual void vf_1C();
    virtual void vf_20();
    virtual void vf_24();
    virtual void vf_28();
    virtual void vf_2C();
    virtual void vf_30();
    virtual void vf_34();
    virtual void vf_38();
    virtual void vf_3C();
    virtual void vf_40();
    virtual void vf_44();
    virtual void vf_48();
    virtual void vf_4C();
};

class C_08942F4C {
public:
    u8 pad_00[0x50];
    virtual void vf_08();
    virtual void vf_0C();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18();
    virtual void vf_1C();
    virtual void vf_20();
    virtual void vf_24();
    virtual void vf_28();
    virtual void vf_2C();
    virtual void vf_30();
    virtual void vf_34();
    virtual void vf_38();
    virtual void vf_3C();
    virtual void vf_40();
    virtual void vf_44();
    virtual void vf_48();
    virtual void vf_4C();
    virtual void vf_50();
    virtual void vf_54();
    virtual void vf_58();
    virtual void vf_5C();
    virtual void vf_60();
    virtual void vf_64();
    u8 pad_54[0x16E0 - 0x54];
    M_08942F4C unk_16E0;
};

void func_0886E558(C_08942F4C *);

void func_08942F4C(C_08942F4C *arg0) {
    Glob_08942F4C *p;
    Mgr_08942F4C *m;
    u32 i;
    Sub_08942F4C *s;

    func_0886E558(arg0);
    arg0->vf_64();
    p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    m = p->unk_14A0;
    m->unk_00 = 0;
    s = &m->unk_264;
    for (i = 0; i < s->unk_64; i++) {
        m->unk_00 += s->unk_188[i].unk_22;
    }
    arg0->unk_16E0.vf_34();
    arg0->unk_16E0.vf_4C();
}

}
