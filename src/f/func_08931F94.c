#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
s32 func_088586E8(void);
void *func_089B5470(s32, s32);
void func_088C5604(char *arg0);

typedef struct {
    u8 pad_00[0x50];
    s32 unk_50;
} UnkObject;

void func_08931F94(UnkObject *arg0)
{
    L_0893CEA8 temp;
    func_08864A30(&temp);
    func_088C5604((char *)func_089B5470(func_088586E8(), arg0->unk_50));
    func_08864A68(&temp, -1);
}
