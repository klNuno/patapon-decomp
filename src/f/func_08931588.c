#include "common.h"

typedef struct {
    u8 pad_00[0x90];
} E_08930214;

extern E_08930214 D_08AD8E30[];
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_08865F78(void *, s32);

void func_08931588(void) {
    func_08804000(D_08AD8E30, func_08865F78, 0x90, 6);
}
