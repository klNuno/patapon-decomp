#include "common.h"

extern "C" {

typedef struct E {
    struct E *unk_00;
    struct E *unk_04;
    u8 pad_08[0xEC0 - 0x8];
} E;

typedef struct {
    E *unk_00;
    E *unk_04;
} H;

typedef struct {
    E *unk_00;
    E *unk_04;
    void *unk_08;
    u8 unk_0C[0x76010 - 0xC];
    u8 *unk_76010;
    H unk_76014;
    void *unk_7601C;
    s32 unk_76020;
} M;

class VM {
public:
    u8 pad_00[0x8];
    virtual E *v08();
    virtual u32 v0C();
};

typedef struct {
    void *unk_00;
    u8 unk_04[0xD84];
    u8 *unk_D88;
    s32 unk_D8C;
} S;

typedef struct {
    u8 pad_00[0xA0];
    u8 unk_A0[0x74A4 - 0xA0];
    u8 *unk_74A4;
    s32 unk_74A8;
    M unk_74AC;
    S unk_7D4D0;
    s32 unk_7E260;
    s32 unk_7E264;
} T;

extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];
extern u8 D_08A4692C[];
extern u8 D_08A4693C[];

T *func_0890D440(T *arg0) {
    E *prev;
    u32 i;
    M *m;
    S *s;
    E *p;

    arg0->unk_74A4 = (u8 *)(((u32)arg0->unk_A0 & 3) + (u32)arg0 + 0xA0);
    arg0->unk_74A8 = 0;
    arg0->unk_74AC.unk_08 = D_08A4693C;
    m = &arg0->unk_74AC;
    m->unk_08 = D_08A4692C;
    m->unk_76010 = (u8 *)(((u32)m->unk_0C + 3) & ~3);
    p = ((VM *)m)->v08();
    m->unk_00 = p;
    m->unk_04 = p + (((VM *)m)->v0C() - 1);
    p->unk_04 = (E *)m;
    m->unk_04->unk_00 = (E *)m;
    for (i = 1; i < ((VM *)m)->v0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    m->unk_7601C = m;
    m->unk_76020 = 0;
    m->unk_76014.unk_00 = (E *)&m->unk_76014;
    m->unk_76014.unk_04 = (E *)&m->unk_76014;
    s = &arg0->unk_7D4D0;
    s->unk_00 = D_08A44C14;
    s->unk_00 = D_08A44C60;
    s->unk_D88 = (u8 *)(((u32)s->unk_04 & 3) + (u32)s + 0x04);
    s->unk_D8C = 0;
    s->unk_00 = D_08A44CAC;
    arg0->unk_7E260 = 1;
    arg0->unk_7E264 = 0;
    return arg0;
}

}
