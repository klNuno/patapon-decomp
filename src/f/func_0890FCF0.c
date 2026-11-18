#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x8F0 - 0x4];
    void *unk_8F0;
    u8 unk_8F4[0x1678 - 0x8F4];
    u8 *unk_1678;
    s32 unk_167C;
} Obj_0890FCF0;

extern u8 D_08A4694C[];
extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];

void func_088D4220(Obj_0890FCF0 *);
void func_088D46FC(Obj_0890FCF0 *, f32, f32, f32, f32);

Obj_0890FCF0 *func_0890FCF0(Obj_0890FCF0 *arg0) {
    u8 *s;

    func_088D4220(arg0);
    arg0->unk_00 = D_08A4694C;
    arg0->unk_8F0 = D_08A44C14;
    s = (u8 *)&arg0->unk_8F0;
    arg0->unk_8F0 = D_08A44C60;
    arg0->unk_1678 = (u8 *)(((u32)(s + 4) & 3) + (u32)s + 4);
    arg0->unk_167C = 0;
    arg0->unk_8F0 = D_08A44CAC;
    func_088D46FC(arg0, 0.29f, 0.27f, 0.23f, 1.0f);
    return arg0;
}
