#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 sub_402432()
{
  char *v0; // rax
  __int64 result; // rax
  __int64 v2; // [rsp+0h] [rbp-20h] BYREF
  unsigned __int64 j; // [rsp+8h] [rbp-18h]
  unsigned __int64 i; // [rsp+10h] [rbp-10h]
  char *s; // [rsp+18h] [rbp-8h]

  for ( i = 0LL; ; ++i )
  {
    result = qword_6185A8;
    if ( i >= qword_6185A8 )
      break;
    for ( j = 0LL; j <= 6; ++j )
    {
      v2 = qword_618440[j];
      s = *(char **)(8 * j + *(_QWORD *)(8 * i + qword_6185A0));
      if ( s )
      {
        if ( j )
          putchar_unlocked(32);
        if ( j == 6 )
        {
          fputs_unlocked(s, stdout);
        }
        else
        {
          s = (char *)sub_40617E(s, &v2, (unsigned int)dword_618420[j], 0LL);
          if ( s )
            v0 = s;
          else
            v0 = *(char **)(8 * j + *(_QWORD *)(8 * i + qword_6185A0));
          fputs_unlocked(v0, stdout);
          free(s);
        }
      }
    }
    putchar_unlocked(10);
  }
  return result;
}
