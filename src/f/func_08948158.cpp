#include "common.h"

extern "C" {
typedef struct {
    u8 unk_00[0x408];
} Sub;

typedef struct {
    s32 unk_00;
    u8 unk_04[0x404];
} Obj;

typedef struct T_08959CB0 T_08959CB0;
void func_089481D4(Sub *, Obj *, const void *);
void func_0894828C(Obj *, s32);
s32 func_0894A1E4(void *);
void func_0894A1EC(void *);
s32 func_0894A1F4(void *);
s32 func_089598BC(T_08959CB0 *, s32);
extern char D_08A03F8C[];


typedef struct {
    u8 pad_00[0x1620];
    u8 unk_1620[0x1DF0];
    u8 unk_3410[4];
} Base;

s32 func_08948158(Base *arg0) {
    Obj temp;
    Sub temp2;
    Sub temp3;
    s32 result = func_0894A1F4(arg0->unk_3410);
    temp.unk_00 = 0;
    func_0894828C(&temp, result);
    func_089481D4(&temp2, &temp, D_08A03F8C);
    func_089481D4(&temp3, &temp, (void *)(func_0894A1E4(arg0->unk_3410) + 0x58));
    {
        T_08959CB0 *temp4 = (T_08959CB0 *)((u32)arg0 + 0x1620);
        func_089598BC(temp4, (s32)temp.unk_04);
    }
    func_0894A1EC(arg0->unk_3410);
    return 1;
}
}
