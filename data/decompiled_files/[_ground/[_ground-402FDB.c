#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 sub_402FDB()
{
  bool v1; // [rsp+Fh] [rbp-11h]

  v1 = 1;
  while ( 1 )
  {
    v1 = (v1 & sub_401A3B()) != 0;
    if ( dword_609230 >= dword_609234 || strcmp(*(const char **)(8LL * dword_609230 + qword_609238), "-a") )
      break;
    sub_4016DE(0);
  }
  return v1;
}
