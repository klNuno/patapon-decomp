#include "common.h"

typedef struct {
    s32 *unk_00;
    u32 unk_04;
} Sub;

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0x1C];
    Sub unk_20;
} Obj;

void func_0880416C(void *);

Obj *func_0896BE28(Obj *arg0, s16 arg1) {
    s32 *temp;
    u32 off;
    Sub *sub;
    s32 *end;

    if (arg0 != NULL) {
        if (arg0->unk_04 != NULL) {
            temp = arg0->unk_20.unk_00;
            off = arg0->unk_20.unk_04;
            sub = &arg0->unk_20;
            if ((u32)temp != (u32)(temp + off)) {
                end = *(s32 *volatile *)&sub->unk_00 + off;
                do {
                    ++temp;
                } while (temp != end);
            }
            arg0->unk_20.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
