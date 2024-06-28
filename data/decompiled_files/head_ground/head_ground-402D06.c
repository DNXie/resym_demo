#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_402D06(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // r12
  char *v4; // rbx
  int *v5; // rax
  char *v7; // rbx
  int *v8; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-2030h]
  unsigned __int64 n; // [rsp+28h] [rbp-2028h]
  char ptr[8200]; // [rsp+30h] [rbp-2020h] BYREF
  unsigned __int64 v13; // [rsp+2038h] [rbp-18h]

  v13 = __readfsqword(0x28u);
  v10 = 0x2000LL;
  while ( a3 )
  {
    if ( a3 < v10 )
      v10 = a3;
    n = sub_405564(a2, ptr, v10);
    if ( n == -1LL )
    {
      v3 = sub_403DCC(a1);
      v4 = gettext("error reading %s");
      v5 = __errno_location();
      error(0, *v5, v4, v3);
      return 0LL;
    }
    if ( !n )
      break;
    if ( fwrite_unlocked(ptr, 1uLL, n, stdout) < n )
    {
      v7 = gettext("write error");
      v8 = __errno_location();
      error(1, *v8, v7);
    }
    a3 -= n;
  }
  return 1LL;
}
