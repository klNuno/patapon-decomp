#include "common.h"
typedef struct {
    u8 pad_00[0x30];
    u8 unk_30[0x88];
    s32 unk_B8;
    u8 pad_BC[0x48];
    u8 unk_104[4];
    s32 unk_108;
    u8 pad_10C[0x64];
    s32 unk_170;
    u8 pad_174[0x20];
    u8 unk_194[4];
} T;
extern s32 func_0895C944(void *);
extern void func_0895C984(void *);
extern s32 func_0895C9DC(void *);
extern void func_0895C9EC(void *, s32);
extern s32 sceMpegAtracDecode(void *, void *, s32, s32);
extern s32 sceMpegGetAtracAu(void *, s32, void *, s32 *);
s32 func_0895ECF4(T *arg0) {
    s32 au;
    s32 ret;
    if (func_0895C9DC(arg0->unk_194) == 0) {
        return 1;
    }
    au = 0;
    if (sceMpegGetAtracAu(arg0->unk_30, arg0->unk_B8, arg0->unk_104, &au) != 0) {
        return 0;
    }
    ret = sceMpegAtracDecode(arg0->unk_30, arg0->unk_104, func_0895C944(arg0->unk_194), arg0->unk_170);
    if (ret != 0) {
        return ret;
    }
    func_0895C9EC(arg0->unk_194, arg0->unk_108);
    if (arg0->unk_170 == 0) {
        func_0895C984(arg0->unk_194);
    }
    return 0;
}
