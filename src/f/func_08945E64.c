#include "common.h"

typedef struct {
    u8 pad_00[0x19CE0];
    u8 unk_19CE0;
} Unk1498;

typedef struct {
    u8 pad_00[0x1498];
    Unk1498 *unk_1498;
} Unk42820;

typedef struct {
    u8 pad_00[0x42820];
    Unk42820 *unk_42820;
} UnkGlobal;

typedef struct {
    u8 *unk_00;
    u8 unk_04;
} Unk;

extern UnkGlobal *D_08AD1E28[];
void func_089457D8(void *);

Unk *func_08945E64(Unk *arg0) {
    UnkGlobal *temp;

    arg0->unk_00 = NULL;
    func_089457D8(&arg0->unk_04);
    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    arg0->unk_00 = &temp->unk_42820->unk_1498->unk_19CE0;
    return arg0;
}
