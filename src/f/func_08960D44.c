#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;
} T_08960438;

typedef struct {
    u8 pad_00[0x118];
    s32 unk_118;
    u8 pad_11C[0x28];
    u8 unk_144[0x10];
} Unk_08960D44;

char *func_08960DA8(char *arg0, s32 arg1, s32 arg2);
void func_089605C4(T_08960438 *, void *);
void func_0895F42C(T_08960438 *, s32);

void func_08960D44(Unk_08960D44 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    T_08960438 temp;

    func_08960DA8((char *)&temp, arg1, arg2);
    func_089605C4(&temp, arg0->unk_144);
    func_0895F42C(&temp, -1);
    if (arg3 != 0) {
        arg0->unk_118 = arg1;
    }
}
