#include "common.h"

typedef struct {
    u8 pad_00[0x36B20];
    u8 unk_36B20;
} S_0893D3D8;

u8 *func_0893D3D8(S_0893D3D8 **arg0) {
    return &(*arg0)->unk_36B20;
}
