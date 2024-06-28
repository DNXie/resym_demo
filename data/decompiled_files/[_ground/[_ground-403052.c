#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_403052()
{
  unsigned __int8 v1; // [rsp+Fh] [rbp-11h]

  v1 = 0;
  while ( 1 )
  {
    v1 |= sub_402FDB();
    if ( dword_609230 >= dword_609234 || strcmp(*(const char **)(8LL * dword_609230 + qword_609238), "-o") )
      break;
    sub_4016DE(0);
  }
  return v1;
}
