#include "common.h"

s32 sceUtilityMsgDialogGetStatus(void);
s32 sceUtilityMsgDialogShutdownStart(void);
s32 sceUtilityMsgDialogUpdate(s32);
void func_089B5884(void *);

void func_089B57EC(void *arg0, s32 arg1) {
    switch (sceUtilityMsgDialogGetStatus()) {
    case 1:
        break;
    case 2:
        sceUtilityMsgDialogUpdate(arg1);
        break;
    case 3:
        sceUtilityMsgDialogShutdownStart();
        break;
    case 4:
        break;
    case 0:
        func_089B5884(arg0);
        break;
    }
}
