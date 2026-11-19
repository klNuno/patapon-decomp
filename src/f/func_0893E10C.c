#include "common.h"

typedef struct {
    u8 pad_00[0x50];
} Entry;

typedef struct {
    u8 pad_00[0xA004];
    Entry *unk_A004;
    u32 unk_A008;
} Obj;

typedef struct S0 S0;
void func_0893E060(S0 *, s32);

void func_0893E10C(Obj *arg0, Entry *arg1) {
    Entry *temp = arg0->unk_A004;
    Entry *volatile *base = &arg0->unk_A004;
    u32 count = arg0->unk_A008;
    u32 *limit;
    u32 off = count * sizeof(*temp);
    Entry *endPtr = *base;
    if (temp != (Entry *)((u8 *)endPtr + off)) {
        limit = &arg0->unk_A008;
        do {
            if (temp == arg1) {
                break;
            }
            count = *limit;
            ++temp;
            off = count * sizeof(*temp);
        } while (temp != (Entry *)((u8 *)*base + off));
    }
    arg1 = temp;
    func_0893E060((S0 *)arg0, (s32)arg1);
}
