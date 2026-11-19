#include "common.h"

typedef struct Unk Unk;
typedef Unk T_089B7060;

typedef struct {
    u8 pad_00[0x1070];
    u8 unk_1070[0x6790];
    u8 unk_7800[0x3290];
    char unk_AA90[1];
} Unk2;

void func_089B73B4(T_089B7060 *);
void func_089B93A8(s32);
void func_089A35D0(char *);

void func_08995054(Unk2 *arg0)
{
    func_089B73B4((T_089B7060 *)arg0->unk_1070);
    func_089B93A8((s32)arg0->unk_7800);
    func_089A35D0(arg0->unk_AA90);
}
