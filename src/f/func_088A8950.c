#include "common.h"

typedef struct Big_088A8950 {
    u8 pad_00[0x1A0F4];
    u8 unk_1A0F4[0x1000];
} Big_088A8950;

typedef struct Sub_088A8950 {
    u8 pad_00[0x1498];
    Big_088A8950 *unk_1498;
} Sub_088A8950;

typedef struct Obj_089794B0 {
    u8 pad_00[0x42820];
    Sub_088A8950 *unk_42820;
} Obj_089794B0;

typedef struct Unk_088A8950 {
    u8 pad_00[0x1AC];
    s32 unk_1AC;
    s32 unk_1B0;
    u8 pad_1B4[0x4];
    u8 unk_1B8[0x424];
    s32 unk_5DC;
} Unk_088A8950;

extern s32 func_0881F120(s32, s32, s32);
void func_0884ED78(void *, u8 *, u8 *);
extern Obj_089794B0 *D_08AD1E28[];

void func_088A8950(Unk_088A8950 *arg0) {
    Obj_089794B0 *temp;
    u8 *base;

    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    base = temp->unk_42820->unk_1498->unk_1A0F4;
    func_0881F120((s32)base, arg0->unk_5DC, 0x400);
    func_0884ED78(arg0->unk_1B8, base + 0x400, base + 0x800);
    func_0881F120((s32)(base + 0xC00), arg0->unk_1AC, arg0->unk_1B0);
}
