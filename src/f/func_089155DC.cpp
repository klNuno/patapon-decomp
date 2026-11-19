#include "common.h"

extern "C" {
extern s32 D_08A005AC[];
extern s32 D_08A005B8[];
extern char D_08A00610[];
void func_088226BC(char *, char *, ...);
void func_0893D7E0(char *arg0, char *arg1);
void func_08914B00(s32 arg0, s32 arg1);

void func_089155DC(s32 arg0)
{
    char temp[0x10];
    func_088226BC(temp, D_08A00610, D_08A005AC[0], D_08A005B8[0]);
    func_0893D7E0(temp, temp);
    func_08914B00(arg0, (s32)temp);
}
}
