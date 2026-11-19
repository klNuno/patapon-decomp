#include "common.h"

typedef struct {
    s32 unk_00;
    u32 unk_04;
    u32 unk_08;
} T;

s32 sceKernelSendMsgPipe(s32, const void *, u32, s32, s32 *, u32 *);

s32 func_0895B1D8(T *arg0, s32 arg1, const void *arg2, u32 arg3)
{
    s32 temp;
    u32 temp1;
    s32 temp2;

    u32 temp3;
    u32 temp4;

    temp3 = arg0->unk_08;
    temp4 = arg0->unk_04;
    temp3 += arg3;
    if (temp4 < temp3) {
        return 0;
    }
    temp2 = 1;
    if (arg1 != 0) {
        temp2 = 0;
    }
    arg0->unk_08 += arg3;
    temp1 = 0xF4240;
    sceKernelSendMsgPipe(arg0->unk_00, arg2, arg3, temp2, &temp, &temp1);
    return temp;
}
