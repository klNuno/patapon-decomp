#include "common.h"

typedef struct Sub_08880CDC {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[4];
} Sub_08880CDC;

typedef struct Arg1_08880CDC {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x30];
    u8 unk_40;
} Arg1_08880CDC;

typedef struct Arg0_08880CDC {
    u8 pad_00[0x20];
    Sub_08880CDC unk_20;
    Sub_08880CDC unk_48;
    s32 unk_70;
} Arg0_08880CDC;

s32 func_08880338(void *);
void func_08882480(s32, void *);

void func_08880CDC(Arg0_08880CDC *arg0, Arg1_08880CDC *arg1) {
    Sub_08880CDC *temp;

    if (arg1 != NULL && arg1->unk_0C != 0) {
        if (arg1->unk_40 != 0) {
            temp = &arg0->unk_20;
        } else {
            temp = &arg0->unk_48;
        }
        if ((void *)temp != (void *)arg1 && func_08880338(arg1) != 0) {
            temp->unk_20--;
        }
        func_08882480(arg0->unk_70, arg1);
    }
}
