#include "common.h"

typedef struct {
    u8 pad_00[0x1AC];
    s32 unk_1AC;
    s32 unk_1B0;
    u8 pad_1B4[4];
    u8 unk_1B8[0x424];
    s32 unk_5DC;
    u8 pad_5E0[4];
    u8 unk_5E4[0xC00];
} S;

extern s32 func_0881F120(s32, s32, s32);
void func_0884ED78(void *, u8 *, u8 *);

void func_088A8A68(S *arg0) {
    u8 *temp = arg0->unk_5E4;
    func_0881F120((s32)temp, arg0->unk_5DC, 0x400);
    func_0884ED78(arg0->unk_1B8, temp + 0x400, temp + 0x800);
    func_0881F120((s32)(temp + 0xC00), arg0->unk_1AC, arg0->unk_1B0);
}
