#include "common.h"

extern "C" {
class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

typedef struct {
    u8 pad_00[0x1510];
    u8 unk_1510;
    u8 pad_1511[3];
    u8 unk_1514[0x16C];
    V unk_1680;
    u8 pad_1684[0x8EC];
    f32 unk_1F70;
    f32 unk_1F74;
    s32 unk_1F78;
    s32 unk_1F7C;
    s32 unk_1F80;
    s32 unk_1F84;
} T;

typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
} S;

struct S_088854D4;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} U;

extern char *D_089FBA5C[];
extern char *D_089FBA88[];
extern char D_089FBAE4[];
extern char D_089FBAFC[];
extern char D_089FBB00[];
extern char D_089FBB14[];
extern char D_089FBB28[];

void func_0881F5C0(void *, s32, s32);
void func_088576F8(void);
void func_08857C74(f32, f32, f32, f32);
void func_08857E5C(U *, U *, U *);
void func_08858024(s32);
void func_0885807C(void);
void func_08858F88(S_088854D4 *, u32, s32, void *, ...);
struct Obj_08885980;
void func_08885980(Obj_08885980 *, s32, s32, void *);
f64 func_089AB994(f32);

void func_088D3FEC(T *arg0) {
    struct {
        U unk_00;
        U unk_10;
        U unk_20;
        u8 pad_30[0xC];
        S unk_3C;
    } temp;

    func_0881F5C0(&temp.unk_3C, 0, 0x100);
    temp.unk_3C.unk_100 = 0xFFFFFF;
    func_0885807C();
    func_08858024(0);
    func_088576F8();
    func_08857C74(0.785f, 30.0f / 17.0f, 0.0f, 5000.0f);
    func_08858024(1);
    temp.unk_20.unk_00 = 240.0f;
    temp.unk_10.unk_00 = 240.0f;
    temp.unk_20.unk_04 = 136.1051025390625f;
    temp.unk_10.unk_04 = 136.1051025390625f;
    temp.unk_20.unk_08 = 130.0f;
    temp.unk_10.unk_08 = 180.0f;
    temp.unk_00.unk_04 = 1.0f;
    temp.unk_20.unk_0C = 0.0f;
    temp.unk_10.unk_0C = 0.0f;
    temp.unk_00.unk_00 = 0.0f;
    temp.unk_00.unk_08 = 0.0f;
    temp.unk_00.unk_0C = 0.0f;
    func_088576F8();
    func_08857E5C(&temp.unk_20, &temp.unk_10, &temp.unk_00);
    func_08858024(2);
    func_088576F8();
    if (arg0->unk_1510 != 0) {
        func_08885980((Obj_08885980 *)arg0->unk_1514, 5, 1, D_089FBAE4);
    } else {
        func_08858F88((S_088854D4 *)&temp.unk_3C, 2, arg0->unk_1F78 + 2, D_089FBAFC);
        func_08858F88((S_088854D4 *)&temp.unk_3C, 3, 2, D_089FBB00, func_089AB994(arg0->unk_1F70));
        func_08858F88((S_088854D4 *)&temp.unk_3C, 3, 3, D_089FBB14, func_089AB994(arg0->unk_1F74));
        func_08858F88((S_088854D4 *)&temp.unk_3C, 3, 4, D_089FBB28, D_089FBA5C[arg0->unk_1F7C]);
        func_08858F88((S_088854D4 *)&temp.unk_3C, 3, 5, D_089FBB28, D_089FBA88[arg0->unk_1F80]);
        func_08858F88((S_088854D4 *)&temp.unk_3C, 3, 6, D_089FBB28, D_089FBA88[arg0->unk_1F84]);
        arg0->unk_1680.unk_14();
    }
}
}
