#include "common.h"

typedef struct {
    u8 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} S;

S *func_08806A1C(S *);
extern s32 func_0880F608(s32, s32);
extern u8 D_08A4475C[];

S *func_0880F5BC(S *arg0, s32 arg1) {
    func_08806A1C(arg0);
    arg0->unk_00 = D_08A4475C;
    func_0880F608((s32)&arg0->unk_0C, arg1);
    return arg0;
}
