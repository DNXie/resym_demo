#include "/share/binary_recovery/clang-parser/defs.hh"
size_t sub_404D86()
{
  size_t result; // rax
  size_t i; // [rsp+0h] [rbp-10h]
  char *v2; // [rsp+8h] [rbp-8h]

  qword_610A70 = 0LL;
  qword_610A78 = 0LL;
  dword_610A80 = 0;
  qword_610AD0 = 0LL;
  qword_610AD8 = 0LL;
  dword_610AE0 = 0;
  v2 = (char *)base;
  for ( i = 0LL; ; ++i )
  {
    result = nmemb;
    if ( nmemb <= i )
      break;
    sub_4038F2((__int64)v2);
    if ( dword_610384 == 2 )
    {
      sub_404546();
    }
    else if ( (unsigned int)dword_610384 < 2 )
    {
      sub_404997();
    }
    else if ( dword_610384 == 3 )
    {
      sub_404738();
    }
    v2 += 24;
  }
  return result;
}
