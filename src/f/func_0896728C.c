#include "common.h"

typedef struct {
    u8 pad_00[0x80];
    void *unk_80;
    u8 pad_84[0x35C];
    s32 unk_3E0;
    void *unk_3E4;
} S_0896728C;

void func_08865EE0(void *);
void func_089674C8(void *);
void func_089674C0(void *);
void func_089673A8(void *);
void func_08926B24(void *);
void func_08967584(void *);
extern u8 D_08A47A38[];
extern u8 D_08A47CA4[];
extern u8 D_08A47CC0[];
extern u8 D_08A47CDC[];

S_0896728C *func_0896728C(S_0896728C *arg0) {
    func_08865EE0(arg0);
    arg0->unk_80 = D_08A47CDC;
    func_089674C8((u8 *)arg0 + 0x90);
    func_089674C8((u8 *)arg0 + 0xA0);
    func_089674C8((u8 *)arg0 + 0xB0);
    func_089674C8((u8 *)arg0 + 0xC0);
    func_089674C0((u8 *)arg0 + 0xD0);
    func_089673A8((u8 *)arg0 + 0xE4);
    func_08926B24((u8 *)arg0 + 0x170);
    arg0->unk_3E4 = D_08A47A38;
    arg0->unk_3E0 = 0;
    arg0->unk_80 = D_08A47CA4;
    arg0->unk_3E4 = D_08A47CC0;
    func_08967584(arg0);
    return arg0;
}
