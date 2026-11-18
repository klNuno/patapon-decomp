#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x874];
    s32 unk_880;
} T;

void func_0885A274(s32, s32);
s32 sceUtilityOskGetStatus(void);
s32 sceUtilityOskShutdownStart(void);
s32 sceUtilityOskUpdate(s32);

void func_08975EBC(T *arg0, s32 arg1) {
    switch (sceUtilityOskGetStatus()) {
    case 1:
        break;
    case 2:
        sceUtilityOskUpdate(arg1);
        break;
    case 3:
        sceUtilityOskShutdownStart();
        break;
    case 4:
        break;
    case 0:
        func_0885A274(arg0->unk_08, 0);
        arg0->unk_880 = 0;
        break;
    default:
        break;
    }
}
