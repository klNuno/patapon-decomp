#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04[0xC];
    s32 unk_10;
    u8 pad_14[0x400];
    u8 unk_414[0xC];
    s32 unk_420;
    u8 pad_424[0x400];
    void *unk_824;
    s32 unk_828;
    u8 pad_82C[0x400];
    s32 unk_C2C;
    u8 unk_C30;
    u8 pad_C31[7];
    s32 unk_C38;
} S_08859D24;

void func_08814194(s32, s32, s32);
void func_08814828(s32, void *);
s32 func_088148F0(s32, s32);
void func_08814978(s32);
void func_088149E4(s32, s32, s32, s32);
void func_08814B60(s32, s32);
void func_08815444(s32, s32);
void func_08859E44(S_08859D24 *);
void func_0885A340(void *, s32, s32);
void func_0885A3F8(void *, s32);
void func_0885A410(void *, s32);
s32 sceDisplaySetMode(s32, s32, s32);
s32 sceDisplayWaitVblankStart(void);
void func_08859AE8(void);

void func_08859D24(S_08859D24 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    arg0->unk_C30 = arg4;
    arg0->unk_00 = arg1;
    func_0885A340(arg0->unk_04, arg1, arg2);
    func_0885A340(arg0->unk_414, arg1, arg2);
    func_08814828(4, func_08859AE8);
    sceDisplaySetMode(0, 0x1E0, 0x110);
    func_0885A3F8(arg0->unk_04, 0);
    func_08814194(arg3, 0, 0x200);
    func_088149E4(0x1E0, 0x110, 0x44000, 0x200);
    func_08814B60(0x88000, 0x200);
    func_08815444(0x710, 0x778);
    func_08859E44(arg0);
    func_0885A410(arg0->unk_04, 0);
    func_088148F0(0, 0);
    sceDisplayWaitVblankStart();
    arg0->unk_10 = 0;
    arg0->unk_420 = 0;
    arg0->unk_C2C = arg3;
    arg0->unk_828 = 0;
    arg0->unk_824 = arg0->unk_04;
    func_08814978(1);
    arg0->unk_C38 = 0;
}
