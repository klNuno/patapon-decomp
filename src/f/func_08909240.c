#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    char unk_0C[0x20];
    s32 unk_2C;
} S;

extern S *func_08980138(S *, s32, s32);
void func_08822B3C(char *, char *);
extern u8 D_08A467E4[];

S *func_08909240(S *arg0, s32 arg1, s32 arg2, char *arg3, s32 arg4, s32 arg5) {
    s32 temp = arg5;
    char *temp2 = arg3;
    S *temp3 = arg0;

    func_08980138(temp3, arg1, arg2);
    temp3->unk_08 = D_08A467E4;
    temp3->unk_2C = temp;
    func_08822B3C(temp3->unk_0C, temp2);
    return temp3;
}
