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

S *func_0894F0C8(S *arg0, const S *arg1) {
    const E *src;
    E *dst;
    E **base;
    s32 *size;
    s32 n;

    arg0->unk_FC4 = (E *)((u32)arg0 + ((u32)arg0 & 3));
    n = arg1->unk_FC8;
    arg0->unk_FC8 = n;
    dst = arg0->unk_FC4;
    src = arg1->unk_FC4;
    base = &arg0->unk_FC4;
    if ((u32)dst != (u32)(dst + n)) {
        size = &arg0->unk_FC8;
        do {
            if (dst != NULL) {
                const E *temp = src++;
                func_088D6854(dst, temp);
                dst->unk_30 = temp->unk_30;
                dst->unk_34 = temp->unk_34;
                dst->unk_38 = temp->unk_38;
                func_088B02C0(dst->unk_40, temp->unk_40);
                dst->unk_48 = temp->unk_48;
                dst->unk_4C = temp->unk_4C;
                dst->unk_50 = temp->unk_50;
                dst->unk_54 = temp->unk_54;
                func_088D6814(dst->unk_58, temp->unk_58);
                dst->unk_78 = temp->unk_78;
                dst->unk_7C = temp->unk_7C;
                dst->unk_80 = temp->unk_80;
                func_088D67D4(dst->unk_88, temp->unk_88);
            }
            dst++;
        } while (dst != *base + *size);
    }
    return arg0;
}
