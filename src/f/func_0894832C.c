#include "common.h"

typedef struct {
    u32 unk_00;
    s8 unk_04[0x404];
} Str_089481D4;

typedef struct S_08959CB0 S_08959CB0;

typedef struct {
    u8 pad_00[0x1620];
    u8 unk_1620[0x1DF0];
    u8 unk_3410[1];
} Obj;

extern char D_08A03F8C[];
void func_089481D4(Str_089481D4 *, Str_089481D4 *, char *);
Str_089481D4 *func_0894828C(Str_089481D4 *, char *);
s32 func_0894A1E4(void *);
void func_0894A1EC(void *);
s32 func_0894A1F4(s32);
s32 func_08959CB0(S_08959CB0 *, s32);

s32 func_0894832C(Obj *arg0)
{
    Str_089481D4 a;
    Str_089481D4 b;
    Str_089481D4 c;
    char *p;

    p = (char *)func_0894A1F4((s32)arg0->unk_3410);
    a.unk_00 = 0;
    func_0894828C(&a, p);
    func_089481D4(&b, &a, D_08A03F8C);
    func_089481D4(&c, &a, (char *)func_0894A1E4(arg0->unk_3410) + 0x58);
    func_08959CB0((S_08959CB0 *)((u32)arg0 + 0x1620U), (s32)a.unk_04);
    func_0894A1EC(arg0->unk_3410);
    return 1;
}
