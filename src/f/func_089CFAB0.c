#include "common.h"

typedef struct {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0A;
    u32 unk_0C;
} T089CFAB0;

typedef struct {
    T089CFAB0 unk_00;
    s32 unk_10;
    s32 unk_14;
} B089CFAB0;

typedef struct {
    u8 pad_00[0x1490];
    B089CFAB0 *unk_1490;
} A089CFAB0;

typedef struct {
    u8 pad_00[0x42820];
    A089CFAB0 *unk_42820;
} G089CFAB0;

void func_0881F5C0(void *, s32, s32);
s32 func_089A8C5C(u8 *, s32);
void func_088B3328(u8 *, s32, s32);
s32 sceRtcGetCurrentClockLocalTime(T089CFAB0 *);
extern G089CFAB0 *D_08AD1E28[];
extern u8 *D_08AD1F14[];

s32 func_089CFAB0(u8 *arg0, B089CFAB0 *arg1) {
    T089CFAB0 t;
    B089CFAB0 *s;
    s32 r;

    s = (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820->unk_1490;
    func_0881F5C0(arg1, 0, 0x8000);
    arg1->unk_14 = s->unk_14;
    func_088B3328(arg0 + 0x1159D, 0x80, func_089A8C5C((D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL) + 0x2460, s->unk_14));
    if (s->unk_10 == 0) {
        r = sceRtcGetCurrentClockLocalTime(&t);
        if (r != 0) {
            return 1;
        }
        arg1->unk_10 = 1;
        arg1->unk_00.unk_00 = t.unk_00;
        arg1->unk_00.unk_02 = t.unk_02;
        arg1->unk_00.unk_04 = t.unk_04;
        arg1->unk_00.unk_06 = t.unk_06;
        arg1->unk_00.unk_08 = t.unk_08;
        arg1->unk_00.unk_0A = t.unk_0A;
        arg1->unk_00.unk_0C = t.unk_0C;
    } else {
        arg1->unk_10 = s->unk_10 + 1;
        arg1->unk_00.unk_00 = s->unk_00.unk_00;
        arg1->unk_00.unk_02 = s->unk_00.unk_02;
        arg1->unk_00.unk_04 = s->unk_00.unk_04;
        arg1->unk_00.unk_06 = s->unk_00.unk_06;
        arg1->unk_00.unk_08 = s->unk_00.unk_08;
        arg1->unk_00.unk_0A = s->unk_00.unk_0A;
        arg1->unk_00.unk_0C = s->unk_00.unk_0C;
    }
    return 1;
}
