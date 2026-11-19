#include "common.h"

typedef struct {
    u8 pad_00[0x36B60];
    u8 unk_36B60;
} T;

u8 *func_0893D3B0(T **arg0)
{
    return &(*arg0)->unk_36B60;
}
