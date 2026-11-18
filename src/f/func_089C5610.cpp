#include "common.h"

extern "C" {

typedef struct V08_0 { virtual s32 vfunc_08(s32, s32); } V08_0;

typedef struct E {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[8];
    s32 unk_1C;
    s32 unk_20;
} E;

typedef struct S {
    u8 pad_00[0x166C];
    E *unk_166C;
    u32 unk_1670;
} S;

s32 func_08858B9C(void);
void func_0885DE4C(E *);

void func_089C5610(S *arg0) {
    u32 i;
    u32 j;
    E *p;
    s32 temp;
    E **arr;

    i = 0;
    if (arg0->unk_1670 != 0) {
        j = 0;
        arr = &arg0->unk_166C;
        do {
            ((E *)((u8 *)*arr + j))->unk_0C = func_08858B9C();
            temp = ((V08_0 *)func_08858B9C())->vfunc_08(0x3C00, 0x40);
            p = (E *)((u8 *)*arr + j);
            func_0885DE4C(p);
            p->unk_00 = temp;
            p->unk_04 = 0x3C00;
            p->unk_08 = 1;
            p->unk_10 = 0;
            ((E *)((u8 *)*arr + j))->unk_1C = 0;
            ((E *)((u8 *)*arr + j))->unk_20 = 0;
            i++;
            j += sizeof(E);
        } while (i < arg0->unk_1670);
    }
}

}
