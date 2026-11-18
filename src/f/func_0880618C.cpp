#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 pad_28[0xC];
    s32 unk_34;
    s32 unk_38;
} S_0880618C;

typedef struct {
    u8 pad_00[0xC];
} E_0880618C;

void __throw(void *, void *, void *);
void *func_088062CC(E_0880618C *, char *);
s32 func_0880639C(s32, s32);
void func_088063A4(s32 *, s32);
void func_08806210(void);
extern char D_089D92B8[];
extern u8 D_089F5B94[];

void func_0880618C(S_0880618C *arg0, s32 arg1) {
    E_0880618C e;

    arg0->unk_34 = arg1;
    if (arg0->unk_24 == 0) {
        func_088063A4(&arg0->unk_34, 1);
    }
    if (func_0880639C(arg0->unk_34, arg0->unk_38) != 0) {
        __throw(D_089F5B94, func_088062CC(&e, D_089D92B8), (void *)func_08806210);
    }
}

}
