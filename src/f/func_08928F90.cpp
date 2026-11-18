#include "common.h"

extern "C" {

typedef struct E_08928F90 {
    struct E_08928F90 *unk_00;
    struct E_08928F90 *unk_04;
    u8 pad_08[0x10];
} E_08928F90;

class C_08928F90 {
public:
    u8 pad_00[8];
    virtual E_08928F90 *v08();
    virtual u32 v0C();
};

typedef struct S_08928F90 {
    E_08928F90 *unk_00;
    E_08928F90 *unk_04;
    void *unk_08;
    u8 unk_0C[0x1804];
    u8 *unk_1810;
    void *unk_1814;
    void *unk_1818;
    void *unk_181C;
    s32 unk_1820;
} S_08928F90;

typedef struct O_08928F90 {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x14];
    s32 unk_20;
    S_08928F90 unk_24;
} O_08928F90;

void func_0895EFB8(O_08928F90 *);
void func_08929354(void *);
extern u8 D_08A46F14[];
extern u8 D_08A46F30[];
extern u8 D_08A46F40[];

O_08928F90 *func_08928F90(O_08928F90 *arg0) {
    S_08928F90 *s;
    E_08928F90 *p;
    E_08928F90 *prev;
    u32 i;

    func_0895EFB8(arg0);
    arg0->unk_08 = D_08A46F14;
    arg0->unk_20 = 0;
    s = &arg0->unk_24;
    s->unk_08 = D_08A46F40;
    s->unk_08 = D_08A46F30;
    s->unk_1810 = (u8 *)(((u32)s->unk_0C + 3) & ~3);
    p = ((C_08928F90 *)s)->v08();
    s->unk_00 = p;
    s->unk_04 = p + (((C_08928F90 *)s)->v0C() - 1);
    p->unk_04 = (E_08928F90 *)s;
    s->unk_04->unk_00 = (E_08928F90 *)s;
    for (i = 1; i < ((C_08928F90 *)s)->v0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    s->unk_181C = s;
    s->unk_1820 = 0;
    s->unk_1814 = &s->unk_1814;
    s->unk_1818 = &s->unk_1814;
    func_08929354(arg0);
    return arg0;
}

}
