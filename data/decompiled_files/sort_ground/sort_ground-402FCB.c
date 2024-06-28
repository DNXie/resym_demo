#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_402FCB(int a1, int a2, int a3, int a4, int a5, int a6, char a7, sigset_t set)
{
  int result; // eax

  result = (unsigned __int8)a7;
  if ( a7 )
    result = sigprocmask(2, &set, 0LL);
  return result;
}
