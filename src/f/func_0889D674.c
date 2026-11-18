#include "common.h"

typedef struct { u8 pad_00[0x92E0]; s32 unk_92E0; } T1;
typedef struct { u8 pad_00[0x970]; u8 unk_970; } T2;
typedef struct { u8 pad_00[0x3A0]; T2 *unk_3A0; } T3;
typedef struct {
    u8 pad_00[0x3F4];
    T1 *unk_3F4;
    T3 *unk_3F8;
    u8 pad_3FC[8];
    s32 unk_404;
} T;
typedef struct { u8 pad_00[0x44]; f32 unk_44; } T4;
typedef struct { f32 unk_00, unk_04; } T5;
extern const f32 D_089DD508[];
extern s32 func_088A85E8(s32);
extern void func_08965CE0(s32, s32, T5 *, T5 *);

void func_0889D674(T *arg0) {
    T5 temp1, temp2;
    s32 i, temp3;
    f32 temp5;
    
    T1 *temp6;
    T4 *temp7;
    f32 temp8, temp9, temp10;

    temp3 = arg0->unk_404;
    if (temp3 != 0) {
        const f32 temp4 = D_089DD508[0];
        i = 0;
        do {
            temp1.unk_00 = 0.0f;
            temp1.unk_04 = 0.0f;
            temp2.unk_00 = 0.0f;
            temp2.unk_04 = 0.0f;
            temp5 = 1.0f;
            temp6 = arg0->unk_3F4;
            if (temp6 != NULL) { temp5 = (temp6->unk_92E0 == 1) ? -1.0f : temp5; }
            switch (i) {
                case 0:
                    break;
                case 2:
                    continue;
                case 1:
                    temp7 = (T4 *)func_088A85E8((s32)&arg0->unk_3F8->unk_3A0->unk_970);
                    if (temp7 != NULL) {
                        temp8 = temp7->unk_44 * temp4;
                        temp1.unk_04 = 0.0f;
                        temp9 = temp8 / 2.0f;
                        temp2.unk_04 = temp8;
                        temp10 = temp9 * temp5;
                        temp1.unk_00 = temp9;
                        temp2.unk_00 = temp9;
                        temp1.unk_00 = temp10;
                        func_08965CE0(temp3, i, &temp1, &temp2);
                    }
                    break;
            }
        } while (++i < 3);
    }
}
