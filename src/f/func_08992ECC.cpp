#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} V4;

typedef struct {
    V4 unk_00, unk_10, unk_20, unk_30;
} M;

class T {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

typedef struct {
    T unk_00;
    u8 pad_84[0xC];
    T unk_90;
} S;

extern f32 D_089EE950[];
extern f32 D_089EE958[];
extern f32 D_089EE960[];
extern f32 D_089EE968[];
void func_08854F60(f32, V4 *, V4 *);
void func_08855354(char *);
extern int func_08864E80(char *, char *);
void func_088658B8(u32, u32);

void func_08992ECC(S *arg0) {
    struct { M unk_00; u8 pad_40[0x10]; } temp;
    V4 t0, t1, t2;
    s32 a;
    u32 b;

    a = ((u32)D_089EE950[0] | ((u32)D_089EE950[1] << 8) | ((u32)D_089EE958[0] << 16) | 0xFF000000);
    b = ((u32)D_089EE960[0] | ((u32)D_089EE960[1] << 8) | ((u32)D_089EE968[0] << 16) | 0xFF000000);
    func_088658B8(a,b);
    func_08855354((char *)&temp.unk_00);
    func_08854F60(1.5f, &t0, &temp.unk_00.unk_00);
    temp.unk_00.unk_00 = t0;
    func_08854F60(1.5f, &t1, &temp.unk_00.unk_10);
    temp.unk_00.unk_10 = t1;
    func_08854F60(1.5f, &t2, &temp.unk_00.unk_20);
    temp.unk_00.unk_20 = t2;
    temp.unk_00.unk_30.unk_00 = -360.0f;
    temp.unk_00.unk_30.unk_08 = -100.0f;
    func_08864E80((char *)&arg0->unk_90, (char *)&temp.unk_00);
    arg0->unk_90.unk_10();
    func_08864E80((char *)&arg0->unk_00, (char *)&temp.unk_00);
    arg0->unk_00.unk_10();
}

}
