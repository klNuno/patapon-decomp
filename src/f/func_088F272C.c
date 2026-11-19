#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u32 unk_14;
} Entry;

typedef struct {
    Entry **unk_00;
    u32 unk_04;
} Sub;

typedef struct {
    u8 pad_00[0x684];
    Sub unk_684;
    u8 pad_68C[0x28];
    u32 unk_6B4;
    Entry **unk_6B8;
} Obj;

void func_088F272C(Obj *arg0, u32 arg1) {
    Sub *sub = &arg0->unk_684;
    u32 *count;
    u32 off;
    Entry **temp;
    if (arg0->unk_6B8 != arg0->unk_684.unk_00 + arg0->unk_684.unk_04) {
        count = &arg0->unk_684.unk_04;
        arg0->unk_6B4 += arg1;
        goto test;
        do {
            *(volatile u32 *)&arg0->unk_6B4 -= arg1;
            arg0->unk_6B8++;
test:
            temp = arg0->unk_6B8;
            off = *(volatile u32 *)count * 4;
            if (temp == (Entry **)((u8 *)*(Entry **volatile *)&sub->unk_00 + off)) {
                break;
            }
            arg1 = (*temp)->unk_14;
        } while (*(volatile u32 *)&arg0->unk_6B4 >= arg1);
    }
}
