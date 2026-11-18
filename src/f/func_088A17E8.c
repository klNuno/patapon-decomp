#include "common.h"

typedef struct {
    u8 pad_00[0x70];
    s32 unk_70;
    s32 unk_74;
    s32 unk_78;
    u8 pad_7C[0x4];
    s32 unk_80;
    void *unk_84;
    void *unk_88;
    void *unk_8C;
    void *unk_90;
    u8 pad_94[0x8];
    void *unk_9C;
} Obj_088A17E8;

void func_0881F5C0(void *, s32, s32);

void func_088A17E8(Obj_088A17E8 *arg0) {
    func_0881F5C0(arg0->unk_84, 0, arg0->unk_70 * 0x50);
    func_0881F5C0(arg0->unk_88, 0, arg0->unk_74 * 0x50);
    func_0881F5C0(arg0->unk_8C, 0, arg0->unk_78 * 4);
    func_0881F5C0(arg0->unk_90, 0, arg0->unk_78 * 4);
    func_0881F5C0(arg0->unk_9C, 0, arg0->unk_80 * 4);
}
