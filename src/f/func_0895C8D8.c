#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    u8 pad_30[4];
    s32 unk_34;
    s32 unk_38;
    u8 pad_3C[0x98];
    s32 *unk_D4;
    s32 unk_D8;
} T0895CA34;

void func_0895BB40(T0895CA34 *);
void func_0895BB48(T0895CA34 *);

void func_0895C8D8(T0895CA34 *arg0) {
    s32 *temp;
    s32 *temp2;
    func_0895BB40(arg0);
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_2C = 0;
    arg0->unk_38 = 0;
    arg0->unk_34 = 0;
    temp = arg0->unk_D4;
    temp2 = temp + arg0->unk_D8;
    if ((u32)temp != (u32)temp2) {
        do {
            *temp = 0;
            temp++;
        } while (temp != temp2);
    }
    func_0895BB48(arg0);
}
