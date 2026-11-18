#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    u8 unk_1C[0x30];
    u32 unk_4C;
    u32 unk_50;
} S_0892442C;

void func_089246D4(u8 *, u32);
void func_08924640(u8 *, u32);
void func_089245C8(u8 *);
void func_08924550(u8 *);
void func_089244D8(u8 *);

void func_0892442C(S_0892442C *arg0, u32 arg1) {
    u32 c = (arg1 >> 16) & 0xF;
    u32 b = arg1 & 0xFF;

    switch ((arg1 >> 8) & 0xFF) {
    case 0x6E:
        arg0->unk_4C = b;
        break;
    case 0x6F:
        arg0->unk_50 = b;
        func_089246D4(arg0->unk_1C, (arg0->unk_4C << 7) | b);
        break;
    case 0x70:
        func_08924640(arg0->unk_1C, c);
        break;
    case 0x71:
        func_089245C8(arg0->unk_1C);
        break;
    case 0x73:
        func_08924550(arg0->unk_1C);
        break;
    case 0x72:
        func_089244D8(arg0->unk_1C);
        break;
    }
}
