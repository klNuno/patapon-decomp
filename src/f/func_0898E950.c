#include "common.h"

extern f32 D_089EE1D8[];

typedef struct {
    u8 pad_00[0xC4];
    s32 unk_C4;
    u8 pad_C8[4];
    s32 unk_CC;
} Unk;

f32 func_0898E950(Unk *arg0) {
    s32 temp;
    switch (arg0->unk_CC) {
    case 0:
        switch (arg0->unk_C4) {
        case 6:
            temp = 1;
            break;
        case 7:
            temp = 2;
            break;
        case 8:
            temp = 3;
            break;
        case 10:
            temp = 5;
            break;
        case 9:
            temp = 4;
            break;
        default:
            temp = 0;
            break;
        }
        return D_089EE1D8[temp];
    case 1:
        break;
    case 2:
        goto end;
    }
end:
    return 0.0f;
}
