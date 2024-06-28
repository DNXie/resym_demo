#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_40571F(char *a1)
{
  char *v1; // rax
  char *v2; // rax
  __int64 v4; // [rsp+18h] [rbp-28h]
  char v5[24]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-8h]

  v6 = __readfsqword(0x28u);
  v4 = sub_412DAA(a1, 16LL);
  if ( !v4 )
  {
    v1 = gettext("open failed");
    sub_402C5C(v1, a1);
  }
  sub_4130A3(v4, v5, 16LL);
  if ( (unsigned int)sub_4130F9(v4) )
  {
    v2 = gettext("close failed");
    sub_402C5C(v2, a1);
  }
  sub_40D303(&unk_61DAC0);
  sub_40D6EA(v5, 16LL, &unk_61DAC0);
  return __readfsqword(0x28u) ^ v6;
}
