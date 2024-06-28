#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402E7D(__int64 a1, unsigned int a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r12
  char *v6; // rbx
  int *v7; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-2030h]
  char v11[8200]; // [rsp+30h] [rbp-2020h] BYREF
  unsigned __int64 v12; // [rsp+2038h] [rbp-18h]

  v12 = __readfsqword(0x28u);
  while ( a3 )
  {
    v10 = sub_40A739(a2, v11, 0x2000LL);
    if ( !v10 )
      return 0xFFFFFFFFLL;
    if ( v10 == -1LL )
    {
      v5 = sub_408FA1(a1);
      v6 = gettext("error reading %s");
      v7 = __errno_location();
      error(0, *v7, v6, v5);
      return 1LL;
    }
    *a4 += v10;
    if ( v10 > a3 )
    {
      if ( v10 != a3 )
        sub_401E1F(&v11[a3], v10 - a3);
      return 0LL;
    }
    a3 -= v10;
  }
  return 0LL;
}
