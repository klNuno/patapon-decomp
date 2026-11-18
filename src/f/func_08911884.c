#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
    u8 unk_10[0xC];
    s32 unk_1C;
} Obj_08911884;

void func_08945E64(void *);
extern u8 D_089E4DD0[];
extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A46980[];
extern u8 D_08A4699C[];

Obj_08911884 *func_08911884(Obj_08911884 *arg0, s32 arg1) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A4699C;
    arg0->unk_04 = 8;
    arg0->unk_08 = D_089E4DD0;
    arg0->unk_0C = 0xB;
    arg0->unk_00 = D_08A46980;
    func_08945E64(arg0->unk_10);
    arg0->unk_1C = arg1;
    return arg0;
}
