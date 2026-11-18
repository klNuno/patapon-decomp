#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} S_089A8B8C;

s32 sceUtilityGetSystemParamInt(s32, s32 *);
extern s32 func_08914C88(s32);
extern s32 func_089A8AA4(s32);

void func_089A8B8C(S_089A8B8C *arg0) {
    s32 v = 0;
    s32 lang;

    sceUtilityGetSystemParamInt(8, &v);
    switch (v) {
    case 0:
        lang = 2;
        break;
    case 1:
        lang = 2;
        break;
    case 2:
        lang = 6;
        break;
    case 3:
        lang = 5;
        break;
    case 4:
        lang = 4;
        break;
    case 5:
        lang = 3;
        break;
    case 6:
        lang = 2;
        break;
    case 7:
        lang = 2;
        break;
    case 8:
        lang = 2;
        break;
    case 9:
        lang = 2;
        break;
    case 10:
        lang = 2;
        break;
    case 11:
        lang = 2;
        break;
    default:
        lang = 2;
        break;
    }
    arg0->unk_14 = lang;
    func_08914C88(func_089A8AA4(lang));
}
