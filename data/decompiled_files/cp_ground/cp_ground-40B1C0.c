#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40B1C0(__int64 a1, const char *a2)
{
  __int64 result; // rax

  if ( a2 && *a2 )
    result = (unsigned int)dword_418AA0[sub_40AB4A(
                                          a1,
                                          a2,
                                          (__int64)off_418A40,
                                          (__int64)dword_418AA0,
                                          4uLL,
                                          (void (*)(void))off_61D398)];
  else
    result = 2LL;
  return result;
}
