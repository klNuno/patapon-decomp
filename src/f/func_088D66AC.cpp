#include "common.h"

extern "C" {

struct U {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
};

extern s32 func_088D64DC(void *, s32, U *, s32, s32);
extern void func_088D66F4(void *, s32);

void func_088D66AC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    U temp;
    u8 buf[0xA8];
    temp.unk_00 = 0;
    temp.unk_04 = 0;
    func_088D66F4(arg0 + 8, func_088D64DC(buf, arg1, &temp, arg2, arg3));
}

}
