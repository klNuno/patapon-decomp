#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    f32 unk_80, unk_84, unk_88, unk_8C;
    u8 pad_90[0x40];
    f32 unk_D0;
    s32 unk_D4;
    u8 pad_D8[0x28];
} S_0887DB48;
typedef struct {
    u8 pad_00[0x10];
    S_0887DB48 unk_10, unk_110;
    S_0887DB48 unk_210;
    u8 pad_310[0x10];

} S;
typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    struct {
        u8 pad_00[0x80];
        f32 unk_80, unk_84, unk_88, unk_8C;
        u8 pad_90[0x40];
        f32 unk_D0, unk_D4;
        u8 pad_D8[0x28];
    } unk_10;
    u8 unk_110, unk_111;
    u8 pad_112[0xE];
    S unk_120[8];
} T;
extern volatile f32 D_089DDA90[];
extern volatile f32 D_089DDA98[];
extern volatile f32 D_089DDA9C[];
extern volatile f32 D_089DDAA0[];
extern volatile f32 D_089DDAA4[];
void func_0887DB48(S_0887DB48 *);
void func_0887DD38(S_0887DB48 *, S_0887DB48 *);
void func_0887A4BC(S *arg0, s32 arg1);

void func_08879EA4(T *arg0) {
    u32 i;
    S *temp1;
    u8 *temp0;

    arg0->unk_00 = 0;
    func_0887DB48((S_0887DB48 *)&arg0->unk_10);
    arg0->unk_10.unk_D0 = D_089DDAA0[0];
    arg0->unk_10.unk_D4 = D_089DDAA4[0];
    arg0->unk_10.unk_80 = D_089DDA90[0];
    arg0->unk_10.unk_84 = D_089DDA90[1];
    arg0->unk_10.unk_88 = D_089DDA98[0];
    arg0->unk_10.unk_8C = D_089DDA9C[0];
    arg0->unk_110 = 0;
    arg0->unk_111 = 0;
    i = 0;
    temp0 = (u8 *)arg0;
    do {
        temp1 = (S *)(temp0 + 0x120);
        func_0887DB48(&temp1->unk_210);
        temp1->unk_210.unk_D0 = 25.0f * (f32)i;
        temp1->unk_210.unk_D4 = 0;
        func_0887DB48(&temp1->unk_10);
        func_0887DB48(&temp1->unk_110);
        func_0887DD38(&temp1->unk_210, &temp1->unk_10);
        func_0887DD38(&temp1->unk_210, &temp1->unk_110);
        func_0887DD38((S_0887DB48 *)&arg0->unk_10, &temp1->unk_210);
        func_0887A4BC(temp1, 0);
        i++;
        temp0 += sizeof(S);
    } while (i < 8U);
}
