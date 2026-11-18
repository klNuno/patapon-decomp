#include "common.h"

typedef struct {
    u8 pad_00[0xD74];
    u32 unk_D74;
    u32 unk_D78;
    u8 pad_D7C[4];
    u32 unk_D80;
} A;

u32 func_08980FB8(A *arg0) {
    u32 ret;
    u32 temp = arg0->unk_D80;
    if (temp == 0) {
        ret = 0;
        goto end;
    }
    {
        f32 temp2 = (f32)arg0->unk_D78;
        f32 temp4;
        temp2 /= (f32)temp;
        temp = (u32)(100.0f * temp2);
        temp += ((volatile A *)arg0)->unk_D74 * 5;
        temp4 = (f32)temp;
        temp4 /= 140.0f;
        ret = (u32)(100.0f * temp4);
    }
end:
    return ret;
}
