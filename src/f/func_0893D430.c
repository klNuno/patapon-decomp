#include "common.h"

typedef struct {
    u8 pad_00[0x66AA4];
    u8 unk_66AA4;
} S;

u8 *func_0893D430(S **arg0) {
    return &(*arg0)->unk_66AA4;
}
