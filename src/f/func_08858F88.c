#include "common.h"

typedef struct {
    s8 unk_00;
    u8 pad_01[0xFF];
    u32 unk_100;
} T;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u32 unk_0C;
} S;

extern const f32 D_089F8900[];
extern const f32 D_089F8908[];
extern const u32 D_089F890C[];
extern void *D_08AD6894[];
void func_088266AC(T *, const char *, char *);
s32 func_088AD740(void);
void func_08817130(s32, s32, u32, T *);
void func_088B36AC(void *, S *, T *, f32, f32);

void func_08858F88(T *arg0, s32 arg1, s32 arg2, const char *arg3, ...) {
    char *temp;
    f32 temp3;
    f32 temp2;
    f32 temp1;
    u32 temp0;

    s32 temp6 = __builtin_args_info(2);
    temp = (char *)__builtin_next_arg(arg3) - (temp6 >= 8 ? 0 : (8 - temp6) * 4);
    func_088266AC(arg0, arg3, temp);
    if (arg0->unk_00 != 0) {
        temp0 = arg0->unk_100;
        temp1 = (f32)((temp0 >> 16) & 0xFFU);
        temp1 /= 255.0f;
        temp3 = (f32)((temp0 >> 8) & 0xFFU);
        temp3 /= 255.0f;
        temp2 = (f32)(temp0 & 0xFFU);
        temp2 /= 255.0f;
        if (func_088AD740() != 0) {
            volatile S temp4;
            void *temp5;

            temp4.unk_00 = D_089F8900[0];
            temp4.unk_00 = temp2;
            temp4.unk_04 = D_089F8900[1];
            temp4.unk_04 = temp3;
            temp4.unk_08 = D_089F8908[0];
            temp5 = D_08AD6894[0];
            temp4.unk_08 = temp1;
            temp5 = temp5 != NULL ? temp5 : NULL;
            temp4.unk_0C = D_089F890C[0];
            func_088B36AC(temp5, (S *)&temp4, arg0, (f32)(arg1 * 8), (f32)(arg2 * 8));
        } else {
            func_08817130(arg1 * 8, arg2 * 8, arg0->unk_100, arg0);
        }
    }
}
