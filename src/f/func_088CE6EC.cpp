#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x22];
    s16 unk_22;
    u8 pad_24[0x164];
} Elem_088CE6EC;

typedef struct {
    u8 pad_00[0x64];
    u32 unk_64;
    u8 pad_68[0x120];
    Elem_088CE6EC unk_188[1];
} Sub_088CE6EC;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x250];
    Sub_088CE6EC unk_264;
} Mgr_088CE6EC;

typedef struct {
    u8 pad_00[0x14A0];
    Mgr_088CE6EC *unk_14A0;
} Glob_088CE6EC;

extern Glob_088CE6EC *D_08AD1F14[];

class C_088CE6EC {
public:
    u8 pad_00[0x50];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
};

void func_0886E558(C_088CE6EC *);

void func_088CE6EC(C_088CE6EC *arg0) {
    Glob_088CE6EC *p;
    Mgr_088CE6EC *m;
    u32 i;
    Sub_088CE6EC *s;

    func_0886E558(arg0);
    arg0->unk_48();
    p = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    m = p->unk_14A0;
    m->unk_00 = 0;
    m->unk_08 = 0;
    m->unk_04 = 0;
    m->unk_0C = 0;
    m->unk_10 = 0;
    s = &m->unk_264;
    for (i = 0; i < s->unk_64; i++) {
        m->unk_00 += s->unk_188[i].unk_22;
    }
}

}
