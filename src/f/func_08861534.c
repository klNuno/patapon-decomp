#include "common.h"

typedef struct T0 {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 pad_28[0x1C];
    s32 unk_44;
    u8 pad_48[0xC];
    s32 unk_54;
    u8 unk_58[0x80];
    u8 pad_D8[0x744 - 0xD8];
    s32 unk_744;
    s32 unk_748;
    u8 unk_74C[0x1248 - 0x74C];
    u8 unk_1248[0x49B50 - 0x1248];
    u8 unk_49B50[0x10];
    u8 unk_49B60[0x10];
    u8 unk_49B70;
} T0;

s32 sceKernelCreateCallback(const char *, s32 (*)(s32, s32, void *), void *);
s32 sceIoDevctl(const char *, s32, void *, s32, void *, s32);
s32 func_08862904(s32, s32, void *);
void func_0886186C(T0 *, s32);
void func_0881F5C0(void *, s32, s32);
void func_08913FF8(void *);
void func_089698A4(void *);
extern s32 D_08A88150[];
extern char D_089F8B28[];
extern char D_089F8B20[];

s32 func_08861534(T0 *arg0) {
    s32 cb;

    arg0->unk_44 = 0;
    func_0886186C(arg0, D_08A88150[0]);
    func_0881F5C0(arg0->unk_58, 0, 0x80);
    arg0->unk_744 = 0;
    arg0->unk_748 = 0;
    arg0->unk_54 = 0;
    func_08913FF8(arg0->unk_74C);
    func_089698A4(arg0->unk_1248);
    arg0->unk_49B70 = 1;
    func_0881F5C0(arg0->unk_49B50, 0, 0x10);
    func_0881F5C0(arg0->unk_49B60, 0, 0x10);
    if (arg0->unk_24 == 0) {
        cb = arg0->unk_24 = sceKernelCreateCallback(D_089F8B28, func_08862904, arg0);
        sceIoDevctl(D_089F8B20, 0x02415821, &cb, 4, NULL, 0);
        return 0;
    }
    return 1;
}
