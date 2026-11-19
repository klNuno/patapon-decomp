#include "common.h"

typedef struct {
    f32 unk_00[3];
} V;
typedef struct {
    V unk_00;
    f32 unk_0C;
} S;
typedef struct {
    u8 pad_00[0x44];
    S unk_44;
} T;
typedef struct {
    u8 pad_00[0x24];
    T unk_24;
} U;
typedef union {
    s32 unk_00[4];
    S unk_00_s;
} W;
extern s32 func_088586E8(void);
extern s32 func_089B53D8(s32);
extern s32 func_0897A220(s32 *, s32, s32, s32, s32, s32);
extern void func_0889B5D4(T *, const S *);

void func_0894C890(U *arg0) {
    W temp;
    func_0897A220(temp.unk_00, func_089B53D8(func_088586E8()) + 0xBB8, 0x16, 0, 0, 0);
    func_0889B5D4(&arg0->unk_24, &temp.unk_00_s);
}
