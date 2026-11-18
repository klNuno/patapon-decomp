#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x14];
} Sub_0896CAB8;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 unk_24[0xD8 - 0x24];
    Sub_0896CAB8 unk_D8;
    u8 unk_100;
    u8 pad_101[0x3];
    s32 unk_104;
    u8 unk_108[0xC];
    s32 unk_114;
    u8 pad_118[0x4];
    s32 unk_11C;
} S_0896CAB8;

void func_0885DE4C(void *);
void func_08867AB8(S_0896CAB8 *);
void func_08867F04(void *);
void func_088696FC(Sub_0896CAB8 *);
void func_0896CB54(S_0896CAB8 *, s32);

void func_0896CAB8(S_0896CAB8 *arg0) {
    Sub_0896CAB8 *sub;

    if (arg0->unk_100 == 0) {
        func_0896CB54(arg0, -1);
    }
    sub = &arg0->unk_D8;
    if (sub != NULL) {
        func_088696FC(sub);
        sub->unk_10 = 0;
    }
    if (arg0->unk_100 != 0) {
        func_0896CB54(arg0, -1);
    }
    func_08867AB8(arg0);
    arg0->unk_20 = 0;
    func_08867F04(arg0->unk_24);
    func_0885DE4C(arg0->unk_108);
    arg0->unk_114 = 0;
    arg0->unk_11C = 0;
    arg0->unk_100 = 0;
    arg0->unk_104 = -1;
}
