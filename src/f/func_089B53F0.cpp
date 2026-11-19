#include "common.h"

extern "C" {

void func_088215D4(s32);
s32 func_0882160C(void);
extern s32 func_0882851C(s32, s32);
typedef struct {
    u32 unk_00;
    u32 unk_04[624];
} Unk;

u32 func_088286CC(Unk *);
s32 sceRtcGetAccumulativeTime(void);

typedef struct {
    s32 unk_00;
} S;

void func_089B53F0(S *arg0) {
    s32 p = arg0->unk_00;
    s32 temp;
    temp = func_0882160C();
    func_088215D4(temp + sceRtcGetAccumulativeTime());
    temp = func_088286CC((Unk *)(p + 0x13EC));
    func_0882851C(p + 0x13EC, temp + sceRtcGetAccumulativeTime());
    temp = func_088286CC((Unk *)(p + 0x1DB0));
    func_0882851C(p + 0x1DB0, temp + sceRtcGetAccumulativeTime());
}
}
