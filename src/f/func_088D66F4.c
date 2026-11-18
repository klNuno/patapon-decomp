#include "common.h"

void *func_088D6854(void *, const void *);
void func_088B02C0(void *, const void *);
void func_088D6814(void *, const void *);
void func_088D67D4(void *, const void *);

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    u8 pad_3C[4];
    u8 unk_40[8];
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    s32 unk_54;
    u8 unk_58[0x20];
    s32 unk_78;
    s32 unk_7C;
    u8 unk_80;
    u8 pad_81[7];
    u8 unk_88[0x20];
} E;

typedef struct {
    u8 pad_00[0xFC4];
    E *unk_FC4;
    s32 unk_FC8;
} S;

void func_088D66F4(S *arg0, const E *arg1) {
    s32 temp = arg0->unk_FC8;
    E *temp2 = &arg0->unk_FC4[temp];
    if (temp2 != NULL) {
        func_088D6854(temp2, arg1);
        temp2->unk_30 = arg1->unk_30;
        temp2->unk_34 = arg1->unk_34;
        temp2->unk_38 = arg1->unk_38;
        func_088B02C0(temp2->unk_40, arg1->unk_40);
        temp2->unk_48 = arg1->unk_48;
        temp2->unk_4C = arg1->unk_4C;
        temp2->unk_50 = arg1->unk_50;
        temp2->unk_54 = arg1->unk_54;
        func_088D6814(temp2->unk_58, arg1->unk_58);
        temp2->unk_78 = arg1->unk_78;
        temp2->unk_7C = arg1->unk_7C;
        temp2->unk_80 = arg1->unk_80;
        func_088D67D4(temp2->unk_88, arg1->unk_88);
    }
    arg0->unk_FC8++;
}
