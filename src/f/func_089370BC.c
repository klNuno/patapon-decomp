#include "common.h"

typedef struct {
    u8 pad_00[0x3B8];
    char *unk_3B8;
} Unk;

typedef struct {
    u8 pad_00[0x14];
    Unk *unk_14;
} Obj;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08853894(void *, char *);
s32 func_08822AD0(char *, char *);
void func_08852F00(void *, s32);

void func_089370BC(Obj *arg0, void *arg1)
{
    char temp[0x100];
    s32 *p = func_0885356C(arg1, 0, 1, 4);

    func_08853894(arg1, temp);
    *p = func_08822AD0(arg0->unk_14->unk_3B8, temp) == 0;
    func_08852F00(arg1, 0);
}
