#include "common.h"

typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
    s32 unk_104;
} S_088854D4;

extern s32 D_089DDF30[];
extern char D_089F9EBC[];
extern char D_089F9EE0[];
extern char D_089F9F04[];
extern char D_089F9F28[];
extern char D_089F9F4C[];
extern char D_089F9F70[];
extern char D_089F9F94[];
extern char D_089F9FB8[];
extern char D_089F9FDC[];
extern char D_089FA000[];
extern char D_089FA024[];
extern char D_089FA048[];
void func_08858F88(S_088854D4 *, u32, s32, void *, ...);

void func_088854D4(S_088854D4 *arg0, s32 arg1, s32 arg2) {
    arg0->unk_100 = D_089DDF30[arg0->unk_104];
    func_08858F88(arg0, arg1, arg2, D_089F9EBC);
    func_08858F88(arg0, arg1, arg2 + 1, D_089F9EE0);
    func_08858F88(arg0, arg1, arg2 + 2, D_089F9F04);
    func_08858F88(arg0, arg1, arg2 + 3, D_089F9F28);
    func_08858F88(arg0, arg1, arg2 + 4, D_089F9F4C);
    func_08858F88(arg0, arg1, arg2 + 5, D_089F9F70);
    func_08858F88(arg0, arg1, arg2 + 6, D_089F9F94);
    func_08858F88(arg0, arg1, arg2 + 7, D_089F9FB8);
    func_08858F88(arg0, arg1, arg2 + 8, D_089F9FDC);
    func_08858F88(arg0, arg1, arg2 + 9, D_089FA000);
    func_08858F88(arg0, arg1, arg2 + 10, D_089FA024);
    func_08858F88(arg0, arg1, arg2 + 11, D_089FA048);
    arg0->unk_100 = D_089DDF30[0];
}
