#include "common.h"

s32 sceUmdCheckMedium(void);
s32 sceUmdGetErrorStat(void);

s32 func_08859170(s32 arg0, s32 arg1) {
    if (!(arg1 & 0x20) && !(arg1 & 0x10) && (arg1 & 8) && sceUmdCheckMedium() != 0) {
        sceUmdGetErrorStat();
    }
    return 0;
}
