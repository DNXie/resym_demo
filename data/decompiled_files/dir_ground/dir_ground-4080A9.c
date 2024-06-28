#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_4080A9()
{
  __int64 result; // rax
  int v1; // eax
  unsigned __int8 v2; // [rsp+Fh] [rbp-1h]

  if ( qword_61D638 + ((unsigned __int64)qword_61D638 >> 1) > qword_61D648 )
  {
    free(qword_61D640);
    qword_61D640 = (void *)sub_414840(qword_61D638, 24LL);
    qword_61D648 = 3 * qword_61D638;
  }
  sub_408056();
  result = (unsigned int)dword_61D6A4;
  if ( dword_61D6A4 != -1 )
  {
    if ( _setjmp(env) )
    {
      v2 = 1;
      if ( dword_61D6A4 == 3 )
        __assert_fail("sort_type != sort_version", "../../src/src/ls.c", 0xD63u, "sort_files");
      sub_408056();
    }
    else
    {
      v2 = 0;
    }
    if ( dword_61D6A4 == 4 )
      v1 = dword_61D6A0;
    else
      v1 = 0;
    result = sub_40FC57(
               qword_61D640,
               qword_61D638,
               *(&off_416F80[8 * (unsigned int)(v1 + dword_61D6A4)]
               + 4 * v2
               + 2 * (unsigned __int8)byte_61D6A8
               + (unsigned __int8)byte_61D6E2));
  }
  return result;
}
