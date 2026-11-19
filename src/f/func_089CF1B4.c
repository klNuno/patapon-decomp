#include "common.h"

s32 func_08914A74(void *);
s32 func_089B57E4(char *arg0);
void func_089D0408(char *arg0);

typedef struct {
    u8 pad_00[0x10A44];
    char unk_10A44[0x2D0];
    u8 unk_10D14[0x834];
    u8 unk_11548;
} UnkObject;

void func_089CF1B4(UnkObject *arg0)
{
    func_08914A74(arg0->unk_10D14);
    func_089B57E4(arg0->unk_10A44);
    func_089D0408((char *)arg0);
    arg0->unk_11548 = 0;
}
