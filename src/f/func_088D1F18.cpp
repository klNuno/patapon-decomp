#include "common.h"

extern "C" {

typedef struct E_088D1F18 {
    struct E_088D1F18 *unk_00;
    struct E_088D1F18 *unk_04;
    u8 pad_08[0x10];
} E_088D1F18;

class C_088D1F18 {
public:
    u8 pad_00[8];
    virtual E_088D1F18 *v08();
    virtual u32 v0C();
};

typedef struct S_088D1F18 {
    E_088D1F18 *unk_00;
    E_088D1F18 *unk_04;
    void *unk_08;
    u8 unk_0C[0x184];
    u8 *unk_190;
    void *unk_194;
    void *unk_198;
    void *unk_19C;
    s32 unk_1A0;
} S_088D1F18;

typedef struct O_088D1F18 {
    s32 unk_00;
    S_088D1F18 unk_04;
    s32 unk_1A8;
} O_088D1F18;

extern u8 D_08A461A0[];
extern u8 D_08A461B0[];

O_088D1F18 *func_088D1F18(O_088D1F18 *arg0, s32 arg1, s32 arg2) {
    S_088D1F18 *s;
    E_088D1F18 *p;
    E_088D1F18 *prev;
    u32 i;

    arg0->unk_00 = arg1;
    s = &arg0->unk_04;
    s->unk_08 = D_08A461B0;
    s->unk_08 = D_08A461A0;
    s->unk_190 = (u8 *)(((u32)s->unk_0C + 3) & ~3);
    p = ((C_088D1F18 *)s)->v08();
    s->unk_00 = p;
    s->unk_04 = p + (((C_088D1F18 *)s)->v0C() - 1);
    p->unk_04 = (E_088D1F18 *)s;
    s->unk_04->unk_00 = (E_088D1F18 *)s;
    for (i = 1; i < ((C_088D1F18 *)s)->v0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    s->unk_19C = s;
    s->unk_1A0 = 0;
    s->unk_194 = &s->unk_194;
    s->unk_198 = &s->unk_194;
    arg0->unk_1A8 = arg2;
    return arg0;
}

}
