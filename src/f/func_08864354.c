#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    s32 unk_80;
} Elem_08864024;

typedef struct {
    u8 pad_00[0x138];
    void *unk_138;
    s32 unk_13C;
    s32 unk_140;
    u8 pad_144[0x24];
} Slot_08864024;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x24];
    s32 unk_38;
    u8 pad_3C[0xA0];
    Slot_08864024 *unk_DC;
    u8 pad_E0[0x668];
    Elem_08864024 *unk_748;
    u8 pad_74C[0xAFC];
    u8 unk_1248[0x4];
} Obj_08864024;

typedef struct {
    u16 unk_00;
    s16 unk_02;
    s32 unk_04;
    s32 unk_08;
} Res1_08861F68;

extern u8 D_08A88158[];
void sceKernelWaitSemaCB(s32, s32, s32);
void sceKernelSignalSema(s32, s32);
Res1_08861F68 *func_0896A6C4(void *, s32);
s32 func_08863B6C(Obj_08864024 *, s32, s32, s32, s32, s32, s32, s32, u32, void *);



extern int sceKernelDelayThreadCB(s32);
void *func_08827A50(s32, s32);
void *func_0895D208(void *);
s32 func_0895D2D0(void *, void *, s32, s32);

s32 func_08864354(Obj_08864024 *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, s32 arg5, s32 arg6) {
    Res1_08861F68 *res;
    Elem_08864024 *e;
    Slot_08864024 *slot;
    s32 temp = 0;
    s32 val = 0;
    s32 ptr = arg3;
    u32 flag;
    s32 ret;
    s32 off;
    void *p;

    sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
    flag = 0;
    res = func_0896A6C4(arg0->unk_1248, arg3);
    if (res != NULL) {
        arg2 = res->unk_02;
        if (arg2 >= 0) {
            e = &arg0->unk_748[arg2];
            if (e->unk_80 != 0) {
                ptr = (s32)e;
            }
        }
        temp = res->unk_04;
        val = res->unk_08;
        flag = res->unk_00;
    }
    ret = func_08863B6C(arg0, arg3, arg1, ptr, 0, temp, val, arg2, flag, D_08A88158);
    off = ret * 0x168;
    slot = (Slot_08864024 *)((u8 *)arg0->unk_DC + off);
    p = func_08827A50(0x24, arg0->unk_10);
    if (p != NULL) {
        p = func_0895D208(p);
    }
    func_0895D2D0(p, arg4, arg5, arg6);
    slot->unk_138 = p;
    slot->unk_13C = 1;
    slot->unk_140 = 0;
    sceKernelSignalSema(arg0->unk_38, 1);
    if (arg1 != 0 && ret >= 0) {
        sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
        val = ((Slot_08864024 *)((u8 *)arg0->unk_DC + off))->unk_13C;
        sceKernelSignalSema(arg0->unk_38, 1);
        while (val != 0) {
            sceKernelDelayThreadCB(10000);
            sceKernelWaitSemaCB(arg0->unk_38, 1, 0);
            val = ((Slot_08864024 *)((u8 *)arg0->unk_DC + off))->unk_13C;
            sceKernelSignalSema(arg0->unk_38, 1);
        }
    }
    return ret;
}
