#include "common.h"

typedef struct Ret_0885AAF8 {
    u8 pad_00[0x28];
    s32 unk_28;
} Ret_0885AAF8;

extern s32 func_08822AD0(char *, char *);
extern s32 func_0885AB7C(s32, s32, s32);
extern s32 func_0885AAF8(s32);

s32 func_088E5CDC(s32 *arg0, char *arg1) {
    s32 n;
    s32 i;
    s32 temp;

    n = ((Ret_0885AAF8 *)func_0885AAF8(*arg0))->unk_28;
    for (i = 0; i < n; i++) {
        temp = func_0885AB7C(*arg0, 1, i);
        if (func_08822AD0((char *)temp, arg1) == 0) {
            return temp;
        }
    }
    return 0;
}
