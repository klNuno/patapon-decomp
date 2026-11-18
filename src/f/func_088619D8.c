#include "common.h"

typedef struct {
    void *(*unk_00)(s32);
    u8 pad_04[4];
    void (*unk_08)(void *);
    u8 pad_0C[0x28 - 0xC];
    s32 unk_28;
    u8 pad_2C[0x38 - 0x2C];
    s32 unk_38;
    u8 pad_3C[0x44 - 0x3C];
    s32 unk_44;
    u8 pad_48[0x54 - 0x48];
    void *unk_54;
    u8 pad_58[0x748 - 0x58];
    void *unk_748;
    u8 unk_74C[0x1248 - 0x74C];
    u8 unk_1248[4];
} Obj_08861624;

void sceKernelWaitSemaCB(s32, s32, s32);
void sceKernelSignalSema(s32, s32);
void func_08861CD4(Obj_08861624 *);
void func_089148E8(void *);
void func_089698AC(void *);
void func_0881F5C0(void *, s32, s32);

void func_088619D8(Obj_08861624 *arg0, s32 arg1) {
    sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
    func_089148E8(arg0->unk_74C);
    func_08861CD4(arg0);
    if (arg0->unk_54 != NULL) {
        arg0->unk_08(arg0->unk_54);
    }
    if (arg0->unk_748 != NULL) {
        arg0->unk_08(arg0->unk_748);
    }
    arg0->unk_748 = NULL;
    arg0->unk_54 = NULL;
    arg0->unk_44 = 0;
    func_089698AC(arg0->unk_1248);
    arg0->unk_28 = 0;
    sceKernelSignalSema(arg0->unk_38, 1);
    arg0->unk_44 = arg1;
    arg0->unk_748 = arg0->unk_00(arg1 * 0x84);
    func_0881F5C0(arg0->unk_748, 0, arg0->unk_44 * 0x84);
    arg0->unk_54 = arg0->unk_00(arg0->unk_44 << 7);
    func_0881F5C0(arg0->unk_54, 0, arg0->unk_44 << 7);
}
