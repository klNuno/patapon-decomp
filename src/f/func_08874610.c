#include "common.h"

typedef struct Obj_08874610 {
    u8 pad_00[0x49DC];
    u8 unk_49DC[0x21030 - 0x49DC];
    u8 unk_21030[0x55598 - 0x21030];
    u8 unk_55598[0x65FD4 - 0x55598];
    u8 unk_65FD4;
} Obj_08874610;

void func_088795E4(void *, s32);
void func_089549D0(void *, u8);
void func_089D1904(void *, s32, s32);
s32 func_089D1AC8(void *);

void func_08874610(Obj_08874610 *arg0, u8 arg1) {
    if (arg1 == 0 && func_089D1AC8(arg0->unk_55598) != 0) {
        func_089D1904(arg0->unk_55598, 0, -1);
        func_088795E4(arg0->unk_49DC, 0);
    }
    arg0->unk_65FD4 = arg1;
    func_089549D0(arg0->unk_21030, arg1);
}
