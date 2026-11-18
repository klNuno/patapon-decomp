#include "common.h"

typedef struct {
    s32 unk_00;
    u8 *unk_04;
} Struct_0885133C;

Struct_0885133C *func_08852FFC(void *);
s32 func_08853004(void *);
f32 *func_0884EBB0(s32, s32);
f32 func_0896FD68(char **arg0);
void func_0896FE54(char **);
void func_0896FE3C(char **, f32);

void func_0896F660(char **arg0) {
    Struct_0885133C *temp = func_08852FFC(arg0[1]);
    s32 temp2 = func_08853004(arg0[1]);
    if (((temp->unk_04[0xBF] >> 5) & 1) != 0) {
        f32 *temp3 = func_0884EBB0(temp2, 0x15);
        f32 temp4;
        *temp3 += 0.033333335f;
        temp4 = 100.0f + func_0896FD68(arg0);
        func_0896FE54(arg0);
        func_0896FE3C(arg0, temp4);
    }
}
