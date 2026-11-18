#include "common.h"

typedef struct S {
    struct S *unk_00;
    struct S *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} S;

void func_0885E81C(s32 *, s32 *, s32);
s32 func_0885E934(char **arg0, char **arg1);
void func_0885E988(s32 *, S *, s32);
void func_0885E9F0(s32 *arg0, s32 arg1);
void func_0885E9F8(s32 *arg0, char *arg1);
extern u8 D_08A44A58[];
extern u8 D_08A44A68[];

S *func_0885ECAC(S *arg0) {
    s32 it;
    s32 end;
    s32 r;
    s32 tmp;

    arg0->unk_24 = D_08A44A68;
    arg0->unk_1C = D_08A44A58;
    arg0->unk_00 = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    func_0885E9F8(&it, (char *)arg0);
    func_0885E9F0(&end, (s32)arg0);
    while (func_0885E934((char **)&it, (char **)&end)) {
        func_0885E81C(&tmp, &it, 0);
        func_0885E988(&r, arg0, tmp);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
    return arg0;
}
