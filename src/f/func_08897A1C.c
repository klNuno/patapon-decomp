#include "common.h"

typedef struct {
    s32 unk_00;
} W08897A1C;

typedef struct {
    u8 pad_00[0x92E0];
    W08897A1C unk_92E0;
} V08897A1C;

typedef struct {
    u8 pad_00[0x3A0];
    V08897A1C *unk_3A0;
} U08897A1C;

typedef struct {
    u8 pad_00[0x3A0];
    U08897A1C *unk_3A0;
    u8 pad_3A4[0x9DC];
    f32 unk_D80;
} S08897A1C;

S08897A1C *func_08897A1C(S08897A1C *arg0, S08897A1C *arg1) {
    s32 mode;
    u8 cmp;

    if (arg0 == NULL) {
        return arg1;
    }
    if (arg1 == NULL) {
        return arg0;
    }
    mode = *(s32 *)(u32)&arg0->unk_3A0->unk_3A0->unk_92E0;
    if (mode != arg1->unk_3A0->unk_3A0->unk_92E0.unk_00) {
        return arg0;
    }
    cmp = arg0->unk_D80 > arg1->unk_D80;
    if (mode == 0) {
        return cmp ? arg0 : arg1;
    }
    return cmp ? arg1 : arg0;
}
