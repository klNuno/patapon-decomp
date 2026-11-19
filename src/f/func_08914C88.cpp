#include "common.h"

extern "C" {

extern s32 sceImposeGetLanguageMode(s32 *, s32 *);
extern s32 sceImposeSetLanguageMode(s32, s32);
extern s32 D_08A00534[];

void func_08914C88(s32 arg0) {
    s32 temp = 0;
    s32 val = 0;
    sceImposeGetLanguageMode(&temp, &val);
    D_08A00534[0] = arg0;
    sceImposeSetLanguageMode(arg0, val);
}

}
