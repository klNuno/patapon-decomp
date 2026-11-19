#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} T_08960438;

typedef struct {
    u8 pad_00[0x110];
    void *unk_110;
    u8 pad_114[0x10];
    u8 unk_124;
} Unk;

char *func_08960C18(char *, s32, s32);
void func_0895F5A4(T_08960438 *, s32);
void func_0896067C(T_08960438 *, void *);

void func_08960BB4(Unk *arg0, void *arg1, s32 arg2, s32 arg3) {
    T_08960438 temp;

    func_08960C18((char *)&temp, (s32)arg1, arg2);
    func_0896067C(&temp, &arg0->unk_124);
    func_0895F5A4(&temp, -1);
    if (arg3 != 0) {
        arg0->unk_110 = arg1;
    }
}
