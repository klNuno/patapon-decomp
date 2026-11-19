#include "common.h"

typedef struct {
    u8 pad_00[0x53CC0];
    u8 unk_53CC0;
} T;

void *func_0893D40C(T **arg0) {
    return &(*arg0)->unk_53CC0;
}
