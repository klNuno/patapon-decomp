#include "common.h"

typedef struct {
    s32 unk_00[4];
} Key_0887949C;

typedef struct {
    u8 pad_00[0x18];
    u8 unk_18[0x52C];
    u8 unk_544[0x4];
} Obj_0887949C;

s32 func_088586E8(void);
void func_088A4768(void *, Key_0887949C *);
void func_088D6E70(void *, Key_0887949C *);
void func_0897A064(s32 *, s32, s32);
s32 func_089B53D8(s32);

void func_0887949C(Obj_0887949C *arg0) {
    s32 id;
    Key_0887949C key;
    s32 *p;

    func_0897A064(&id, func_089B53D8(func_088586E8()) + 0xBB8, 0x15);
    p = key.unk_00;
    *p++ = -1;
    if (p < key.unk_00 + 4) {
        for (; p < key.unk_00 + 4; p++) {
            *p = -1;
        }
    }
    key.unk_00[0] = id;
    func_088A4768(arg0->unk_18, &key);
    func_088D6E70(arg0->unk_544, &key);
}
