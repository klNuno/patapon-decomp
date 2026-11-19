#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
} T;

s32 func_089425E4(T *arg0, s32 *arg1) {
    s32 temp = arg0->unk_04;
    if (temp >= 0) {
        return temp;
    }
    temp = arg0->unk_08;
    if (temp >= 0) {
        if (arg1 == NULL) {
            return -1;
        }
        temp = arg1[temp];
        if (temp >= 0) {
            goto end;
        }
        temp = -1;
        return temp;
    } else {
        temp = -1;
    }
end:
    return temp;
}
