#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_401AA3(__int64 a1, unsigned __int64 a2)
{
  char *v2; // rax
  char *v3; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v5; // [rsp+10h] [rbp-10h]
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  v5 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    result = i;
    if ( i >= a2 )
      break;
    if ( !*(_QWORD *)(8 * i + a1) )
    {
      v2 = gettext("tab size cannot be 0");
      error(1, 0, v2);
    }
    if ( *(_QWORD *)(8 * i + a1) <= v5 )
    {
      v3 = gettext("tab sizes must be ascending");
      error(1, 0, v3);
    }
    v5 = *(_QWORD *)(8 * i + a1);
  }
  return result;
}
