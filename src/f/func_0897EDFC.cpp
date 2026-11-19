#include "common.h"

extern "C" {

typedef struct E_088DEC6C E_088DEC6C;

typedef struct {
    u8 pad_00[0x4118];
    u8 unk_4118;
} Unk;

extern u8 D_089ECF38[];
void func_089AE128(Unk *);
void func_08926200(E_088DEC6C *, u8 *, s32);

void func_0897EDFC(Unk *arg0) {
    func_089AE128(arg0);
    func_08926200((E_088DEC6C *)&arg0->unk_4118, D_089ECF38, 0);
}

}
