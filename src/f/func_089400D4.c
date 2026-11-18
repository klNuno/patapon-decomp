#include "common.h"

typedef struct E {
    struct E *unk_00;
    struct E *unk_04;
    u8 pad_08[4];
    void *unk_0C;
    u8 pad_10[0x28];
} E;

typedef struct {
    E *unk_00;
    E *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    void *unk_24;
} L;

typedef struct {
    E *unk_00;
} It;

typedef struct {
    u8 pad_00[0x1EB0];
    E *unk_1EB0;
    u8 pad_1EB4[4];
    u8 unk_1EB8[0x28];
    L unk_1EE0;
    u8 pad_1F08[4];
    s32 unk_1F0C;
    s32 unk_1F10;
    s32 unk_1F14;
} S;

void func_0893FCC4(s32 *, It *, s32);
s32 func_0893FE60(s32 *);
void func_0893F990(void *, s32);
void func_0893FE50(s32 *, It *);

void func_089400D4(S *arg0, s32 arg1) {
    s32 sp1C;
    volatile It a;
    It it;
    s32 sp10;
    E *p;
    L *l;
    s32 r;

    p = arg0->unk_1EB0 + arg1;
    if (arg0->unk_1F0C != 0) {
        arg0->unk_1F10 = 1;
    }
    a.unk_00 = p;
    it = *(It *)&a;
    func_0893FCC4(&sp10, &it, 0);
    func_0893F990(arg0->unk_1EB8, func_0893FE60(&sp10));
    func_0893FE50(&sp1C, &it);
    arg0->unk_1F14 = sp1C;
    if (&arg0->unk_1EE0 != (L *)p) {
        if (arg0->unk_1EE0.unk_04 != (E *)&arg0->unk_1EE0) {
            p->unk_04 = arg0->unk_1EE0.unk_04;
            arg0->unk_1EE0.unk_04->unk_00 = p;
            arg0->unk_1EE0.unk_04 = p;
            r = 1;
        } else {
            arg0->unk_1EE0.unk_04 = p;
            arg0->unk_1EE0.unk_00 = p;
            p->unk_04 = (E *)&arg0->unk_1EE0;
            r = 1;
        }
        p->unk_00 = (E *)&arg0->unk_1EE0;
        if (r) {
            p->unk_0C = &arg0->unk_1EE0;
            arg0->unk_1EE0.unk_20++;
        }
    }
}
