#include "common.h"

typedef struct {
    u8 pad_00[0x65FE4];
    u8 unk_65FE4;
} S;

u8 *func_0893D3EC(S **arg0) {
    return &(*arg0)->unk_65FE4;
}
