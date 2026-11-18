#include "common.h"

typedef struct {
    u8 pad_00[0x13C];
    s32 unk_13C;
    s32 unk_140;
    u8 pad_144[0x24];
} Slot_088646D4;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0xA0];
    Slot_088646D4 *unk_DC;
} Obj_088646D4;

void sceKernelWaitSemaCB(s32, s32, s32);
void sceKernelSignalSema(s32, s32);
void sceKernelDelayThreadCB(s32);

void func_088646D4(Obj_088646D4 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    Slot_088646D4 *slot;
    s32 state;

    sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
    slot = &arg0->unk_DC[arg2];
    slot->unk_13C = 3;
    slot->unk_140 = arg3;
    sceKernelSignalSema(arg0->unk_38, 1);
    if (arg1 != 0 && arg2 >= 0) {
        sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
        state = ((Slot_088646D4 *)((u8 *)arg0->unk_DC + arg2 * 0x168))->unk_13C;
        sceKernelSignalSema(arg0->unk_38, 1);
        while (state != 0) {
            sceKernelDelayThreadCB(10000);
            sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
            state = ((Slot_088646D4 *)((u8 *)arg0->unk_DC + arg2 * 0x168))->unk_13C;
            sceKernelSignalSema(arg0->unk_38, 1);
        }
    }
}
