#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[0x4];
    u8 unk_20[0x10];
} S_088CDF18;

void func_08814520(u32, u32);
void func_08815480(s32);
void func_08815514(s32);
void func_08857754(void);
void func_088577AC(void);
void func_08857C14(void *);
void func_08858024(s32);
void func_0885807C(void);
void func_088580F8(void);
extern s32 func_088581B0(s32);
void func_088582DC(s32, s32, s32, s32, s32);

void func_088CDF18(S_088CDF18 *arg0) {
    u8 sp10[0x40];

    func_08814520(arg0->unk_14, arg0->unk_18);
    func_08815480(4);
    func_088581B0((s32)sp10);
    func_08858024(1);
    func_0885807C();
    func_08857C14(arg0->unk_20);
    func_088577AC();
    func_08815514(-1);
    func_088582DC(0x19C, arg0->unk_0C, arg0->unk_10, 0, arg0->unk_08);
    func_088580F8();
    func_08858024(2);
    func_08857754();
}
