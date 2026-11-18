#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 pad_14[0xC];
    u8 unk_20[0x8800];
    u8 unk_8820[0x1000];
    u8 unk_9820[0x28];
    u8 unk_9848[0x28];
    u8 unk_9870[0x34];
    void *unk_98A4;
} S_0885E0A4;

void func_0880406C(void *, void *, void *, s32, s32);
void func_0885C520(S_0885E0A4 *);
void func_0885EA04(S_0885E0A4 *);
void func_0885EC6C(void *);
void func_0885ECAC(void *);
void func_0885EE00(void *);
void func_0885EEE8(S_0885E0A4 *);
void func_0885ED6C(void);
void func_0885EDDC(void);
void func_0885F840(void);
void func_0885FA00(void);
extern u8 D_08A44A4C[];
extern u8 D_08A44A74[];

S_0885E0A4 *func_0885E0A4(S_0885E0A4 *arg0) {
    arg0->unk_98A4 = D_08A44A4C;
    func_0885C520(arg0);
    arg0->unk_00 = D_08A44A74;
    func_0885EE00(&arg0->unk_10);
    func_0880406C(arg0->unk_20, func_0885F840, func_0885FA00, 0x110, 0x80);
    func_0880406C(arg0->unk_8820, func_0885EDDC, func_0885ED6C, 0x20, 0x80);
    func_0885ECAC(arg0->unk_9820);
    func_0885ECAC(arg0->unk_9848);
    func_0885EC6C(arg0->unk_9870);
    func_0885EA04(arg0);
    arg0->unk_10 = 0x80;
    func_0885EEE8(arg0);
    return arg0;
}
