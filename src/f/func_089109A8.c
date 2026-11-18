#include "common.h"

void func_08910324(void *);
void func_0890D0E4(void *);
void func_0890FCF0(void *);
void func_0890B264(void *);
void func_08925AB0(void *);

typedef struct {
    u8 pad_00[0xD90];
    u8 unk_D90[0x1C20 - 0xD90];
    u8 unk_1C20[0x32A0 - 0x1C20];
    u8 unk_32A0[0x170408 - 0x32A0];
    s32 unk_170408;
    u8 unk_17040C;
    u8 unk_17040D;
    u8 pad_17040E[0x2];
    s32 unk_170410;
    u8 unk_170414[0x17146C - 0x170414];
    s32 unk_17146C;
} S89109A8;

S89109A8 *func_089109A8(S89109A8 *arg0) {
    func_08910324(arg0);
    func_0890D0E4(arg0->unk_D90);
    func_0890FCF0(arg0->unk_1C20);
    func_0890B264(arg0->unk_32A0);
    arg0->unk_170408 = 0;
    arg0->unk_17040C = 0;
    arg0->unk_17040D = 0;
    arg0->unk_170410 = 0;
    func_08925AB0(arg0->unk_170414);
    arg0->unk_17146C = 0;
    return arg0;
}
