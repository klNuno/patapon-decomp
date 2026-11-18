typedef int s32;
typedef float f32;

extern int func_088B3120(char *, s32, s32);
extern int func_088D4448(s32, char *, f32);

void func_088D43FC(s32 arg0, s32 arg1, f32 fparg0) {
    char sp20[0x200];

    func_088B3120(sp20, 0x200, arg1);
    func_088D4448(arg0, sp20, fparg0);
}
