#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_402739(unsigned __int64 a1, char a2, int a3)
{
  __int64 v3; // rbx
  char *v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  unsigned __int64 result; // rax
  unsigned __int64 i; // [rsp+10h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-18h]

  v10 = sub_4023EB();
  if ( v10 > a1 )
  {
    v3 = *(_QWORD *)(8LL * a3 + qword_60B388);
    v4 = gettext("%s: line number out of range");
    error(0, 0, v4, v3);
    sub_401C9C();
  }
  for ( i = 0LL; ; ++i )
  {
    result = i;
    if ( i >= a1 - v10 )
      break;
    v11 = sub_402446();
    if ( !v11 )
    {
      v5 = *(_QWORD *)(8LL * a3 + qword_60B388);
      v6 = gettext("%s: line number out of range");
      error(0, 0, v6, v5);
      sub_401C9C();
    }
    if ( a2 != 1 )
      sub_40332F(v11);
  }
  return result;
}
