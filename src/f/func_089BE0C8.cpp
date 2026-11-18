#include "common.h"

extern "C" {

extern s32 D_08A08FBC[];
extern s32 D_08A08FC0[];

typedef struct {
    u8 pad_00[0xDE0];
    s32 unk_DE0;
    u32 unk_DE4;
    u8 pad_DE8[0x14];
    s32 *unk_DFC;
    u8 pad_E00[0x4];
    s32 unk_E04;
    u8 unk_E08;
} Obj;

inline const s32 &min_(const s32 &a, const s32 &b) { return (a < b) ? a : b; }
inline const s32 &max_(const s32 &a, const s32 &b) { return (a < b) ? b : a; }

void func_089BE0C8(Obj *arg0) {
    u32 temp = arg0->unk_DE4;
    if (*arg0->unk_DFC == 1) {
        arg0->unk_E04++;
    } else if (temp != 0 || arg0->unk_DE0 != 0) {
        if (temp >= 4) {
            arg0->unk_E04--;
        } else if (temp < 3) {
            arg0->unk_E04++;
        }
    }
    arg0->unk_E08 = 1;
    arg0->unk_E04 = max_(D_08A08FC0[0], min_(arg0->unk_E04, D_08A08FBC[0]));
}

}
