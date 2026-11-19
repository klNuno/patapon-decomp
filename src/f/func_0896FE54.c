#include "common.h"

typedef struct {
    u8 pad_00[0x36B08];
    u8 *unk_36B08;
} Unk;

f32 func_0887FC8C(void *);

f32 func_0896FE54(Unk **arg0)
{
    return func_0887FC8C((*arg0)->unk_36B08 + 0x1A00);
}
