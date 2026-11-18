#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x14];
    s32 unk_2C;
    s32 unk_30;
    u8 pad_34[4];
    s32 unk_38;
} Obj_088616AC;

typedef struct {
    Obj_088616AC *unk_00;
} Arg_088616AC;

s32 sceKernelCreateThread(const char *, void *, s32, s32, u32, void *);
s32 sceKernelCreateSema(const char *, u32, s32, s32, void *);
s32 sceKernelStartThread(s32, s32, void *);
void func_08860A78(void);
extern char D_089F8B3C[];
extern char D_089F8B48[];

void func_088616AC(Obj_088616AC *arg0) {
    Arg_088616AC a;
    u8 *p;
    s32 n;

    if (arg0->unk_2C == 0) {
        if (arg0->unk_2C == 0) {
            arg0->unk_14 = sceKernelCreateThread(D_089F8B3C, func_08860A78, 0x6F, 0x2000, 0, NULL);
            arg0->unk_38 = sceKernelCreateSema(D_089F8B48, 0, 1, 1, NULL);
            arg0->unk_2C = 1;
        }
    }
    if (arg0->unk_30 == 0) {
        arg0->unk_30 = 1;
        p = (u8 *)&a;
        n = 4;
        if (p != NULL) {
            do {
                *p++ = 0;
            } while (--n);
        }
        a.unk_00 = arg0;
        sceKernelStartThread(arg0->unk_14, 4, &a);
    }
}
