#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_408579(const char *a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-10h]
  int v8; // [rsp+24h] [rbp-Ch]
  size_t v9; // [rsp+28h] [rbp-8h]

  if ( a1 )
  {
    v8 = a3 - sub_40F59D(a1, 0LL);
    v3 = 0;
    if ( v8 >= 0 )
      v3 = v8;
    v7 = v3;
    fputs_unlocked(a1, stdout);
    v9 = v7 + strlen(a1);
    do
      putchar_unlocked(32);
    while ( v7-- );
  }
  else
  {
    printf("%*lu ", a3, a2);
    v9 = a3;
  }
  result = qword_61D7E0 + v9 + 1;
  qword_61D7E0 = result;
  return result;
}
