#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} Sub114_088978E4;

typedef struct {
    u8 pad_00[0x390];
    u8 unk_390;
} Sub390_088978E4;

typedef struct {
    u8 pad_00[0x114];
    Sub114_088978E4 *unk_114;
    u8 pad_118[0x378 - 0x118];
    u8 unk_378[0x390 - 0x378];
    Sub390_088978E4 *unk_390;
    u8 pad_394[0x3AC - 0x394];
    u8 unk_3AC;
    u8 pad_3AD[0x12C0 - 0x3AD];
    u8 unk_12C0[0x1370 - 0x12C0];
    u8 unk_1370;
} Obj_088978E4;

void func_088A038C(void *);
void func_088F5A7C(Sub114_088978E4 *);
void *func_0893D400(void *);
s32 func_08958924(void *);
void func_089693C0(Obj_088978E4 *);

void func_088978E4(Obj_088978E4 *arg0) {
    if (arg0->unk_390->unk_390 == 0) {
        return;
    }
    if (func_08958924(func_0893D400(arg0->unk_378)) != 0) {
        if (arg0->unk_114->unk_04 <= 0) {
            return;
        }
        if (arg0->unk_3AC == 0) {
            return;
        }
    }
    if (arg0->unk_1370 != 0) {
        func_089693C0(arg0);
        func_088F5A7C(arg0->unk_114);
        func_088A038C(arg0->unk_12C0);
    }
}
