#include "common.h"

typedef struct {
    u8 pad_00[8];
    void (*unk_08)(void *);
    u8 pad_0C[0x28 - 0xC];
    s32 unk_28;
    u8 pad_2C[0x44 - 0x2C];
    s32 unk_44;
    u8 pad_48[0x54 - 0x48];
    void *unk_54;
    u8 pad_58[0x748 - 0x58];
    void *unk_748;
    u8 unk_74C[0x1248 - 0x74C];
    u8 unk_1248[4];
} Obj_08861624;

void func_08861850(Obj_08861624 *);
void func_08861860(Obj_08861624 *);
void func_08861CD4(Obj_08861624 *);
void func_089148E8(void *);
void func_089698AC(void *);

s32 func_08861624(Obj_08861624 *arg0) {
    func_08861850(arg0);
    func_089148E8(arg0->unk_74C);
    func_08861CD4(arg0);
    if (arg0->unk_54 != NULL) {
        arg0->unk_08(arg0->unk_54);
    }
    if (arg0->unk_748 != NULL) {
        arg0->unk_08(arg0->unk_748);
    }
    arg0->unk_748 = NULL;
    arg0->unk_54 = NULL;
    arg0->unk_44 = 0;
    func_089698AC(arg0->unk_1248);
    arg0->unk_28 = 0;
    func_08861860(arg0);
    return 1;
}
