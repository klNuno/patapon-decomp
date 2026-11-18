#include "common.h"

typedef struct Sub_089794B0 {
    u8 pad_00[0x1498];
    u8 *unk_1498;
    u8 pad_149C[0xFC4];
    u8 unk_2460[4];
} Sub_089794B0;

typedef struct Obj_089794B0 {
    u8 pad_00[0x42820];
    Sub_089794B0 *unk_42820;
} Obj_089794B0;

typedef struct Obj_088A89DC {
    u8 pad_00[0x1AC];
    s32 unk_1AC;
    s32 unk_1B0;
    u8 pad_1B4[0x4];
    u8 unk_1B8[0x424];
    s32 unk_5DC;
} Obj_088A89DC;

extern Obj_089794B0 *D_08AD1E28[];
extern s32 func_0881F120(s32, s32, s32);
void func_0884EDCC(void *, u8 *, u8 *);

void func_088A89DC(Obj_088A89DC *arg0) {
    Obj_089794B0 *temp;
    u8 *buf;

    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    buf = temp->unk_42820->unk_1498 + 0x1A0F4;
    func_0881F120(arg0->unk_5DC, (s32)buf, 0x400);
    func_0884EDCC(arg0->unk_1B8, buf + 0x400, buf + 0x800);
    func_0881F120(arg0->unk_1AC, (s32)(buf + 0xC00), arg0->unk_1B0);
}
