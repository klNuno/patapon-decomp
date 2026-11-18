#include "common.h"

typedef struct Unk_089494D8 {
    u8 pad_00[0x100];
    s32 unk_100;
    u8 unk_104;
    u8 pad_105[0xB];
    u8 unk_110[4];
} Unk_089494D8;

void func_08858F88(Unk_089494D8 *, s32, s32, void *);
void func_08949560(Unk_089494D8 *, s32, s32);
void func_08949668(Unk_089494D8 *, s32, s32);

void func_089494D8(Unk_089494D8 *arg0, s32 arg1, s32 arg2, void *arg3) {
    func_08858F88(arg0, arg1, arg2, arg3);
    func_08858F88(arg0, arg1, arg2 + 2, arg0->unk_110);
    func_08949560(arg0, 5, 5);
    if (arg0->unk_104 != 0) {
        func_08949668(arg0, arg1 + 0xC, arg2 + 0x14);
    }
    arg0->unk_100 = 0xFFFFFF;
}
