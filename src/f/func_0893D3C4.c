#include "common.h"

typedef struct {
    u8 pad_00[0x3EC70];
    u8 unk_3EC70;
} T;

typedef struct {
    T *unk_00;
} S;

u8 *func_0893D3C4(S *arg0) {
    return &arg0->unk_00->unk_3EC70;
}
