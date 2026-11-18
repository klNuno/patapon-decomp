typedef int s32;

extern s32 func_08858BCC(void);
extern s32 func_0895A68C(s32, s32);

void func_08959880(char *arg0) {
    func_0895A68C(*(s32 *)(arg0 + 0x153C), func_08858BCC());
    *(s32 *)(arg0 + 0x153C) = 0;
}
