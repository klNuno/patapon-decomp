#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C;
    u8 pad_0D[0x1F];
    s32 *unk_2C;
} T0;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x20];
    f32 unk_30;
    f32 unk_34;
} T1;

extern void func_088226BC(char *, char *, ...);
extern void func_088B3120(u8 *, s32, char *);
extern void func_088AF2FC(f32 *, s32, u8 *);
extern char D_089E49EC[];

s32 func_0890972C(T0 *arg0, T1 *arg1) {
    char temp[0x40];
    u8 temp2[0x80];
    f32 temp3[2];

    func_088226BC(temp, D_089E49EC, &arg0->unk_0C, *arg0->unk_2C);
    func_088B3120(temp2, sizeof(temp2), temp);
    func_088AF2FC(temp3, arg1->unk_0C, temp2);
    arg1->unk_30 = temp3[0];
    arg1->unk_34 = temp3[1];
    return 0;
}
