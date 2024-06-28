#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_403981(int *a1)
{
  int *v1; // rax
  bool v2; // bl
  bool v4; // [rsp+1Fh] [rbp-11h]

  v4 = 1;
  *a1 = -1;
  while ( stream )
  {
    *a1 = fgetc(stream);
    if ( *a1 != -1 )
      break;
    v1 = __errno_location();
    v2 = (v4 & (unsigned __int8)sub_403028(*v1)) != 0;
    v4 = (v2 & (unsigned __int8)sub_402EFF()) != 0;
  }
  return v4;
}
