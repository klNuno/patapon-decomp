#include "common.h"

typedef struct {
    u8 pad_00[0x1A00];
    u8 unk_1A00;
} Unk1;

typedef struct {
    u8 pad_00[0x36B08];
    Unk1 *unk_36B08;
} Unk2;

void func_0887FC68(void *);

void func_0896FE24(Unk2 **arg0) {
    func_0887FC68(&(*arg0)->unk_36B08->unk_1A00);
}
