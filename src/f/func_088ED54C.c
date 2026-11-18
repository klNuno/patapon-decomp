#include "common.h"

extern char D_089FD730[];
extern u8 *D_08AD6838[];

void func_088226BC(char *, char *, ...);
void func_08852F00(void *, s32);
u8 func_088533F8(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088B3120(u8 *, s32, char *);
u64 func_089AB994(f32);

void func_088ED54C(void *arg0, void *arg1) {
    char temp[0x100];
    char temp2[0x100];
    s32 *temp3, *temp4;
    u8 temp5, temp6;

    temp3 = func_0885356C(arg1, 0, 1, 4);
    temp4 = func_0885356C(arg1, 1, 1, 4);
    temp5 = func_088533F8(arg1, 0);
    temp6 = func_088533F8(arg1, 1);
    if (temp5 & 0x70) {
        f32 temp7 = (temp6 & 0x70) ? *(f32 *)temp4 : (f32)*temp4;
        f32 temp8 = 1.0f + temp7;
        u32 temp9 = *temp3;
        if (temp9 < 0x40U) {
            func_088226BC(temp, D_089FD730, func_089AB994(temp8));
            func_088B3120(D_08AD6838[0] + (temp9 << 6), 0x40, temp);
        }
    } else {
        s32 temp7 = (temp6 & 0x70) ? (s32)*(f32 *)temp4 : *temp4;
        s32 temp8 = temp7 + 1;
        u32 temp9 = *temp3;
        if (temp9 < 0x40U) {
            func_088226BC(temp2, D_089FD730, temp8);
            func_088B3120(D_08AD6838[0] + (temp9 << 6), 0x40, temp2);
        }
    }
    func_08852F00(arg1, 0);
}
