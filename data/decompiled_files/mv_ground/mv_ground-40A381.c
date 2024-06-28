#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40A381(const char *a1, __int64 a2, char a3)
{
  char *result; // rax
  __int16 v5; // [rsp+20h] [rbp-30h]
  unsigned __int64 v6; // [rsp+28h] [rbp-28h]
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]
  unsigned __int64 v8; // [rsp+30h] [rbp-20h]
  char *v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]

  v9 = (char *)sub_40ADC9(a1);
  v6 = sub_40AE32(v9);
  v8 = 255LL;
  if ( v6 > 0xE )
  {
    v5 = *(_WORD *)v9;
    *(_WORD *)v9 = 46;
    *__errno_location() = 0;
    v10 = pathconf(a1, 3);
    if ( v10 >= 0 || !*__errno_location() )
      v8 = v10;
    *(_WORD *)v9 = v5;
  }
  result = (char *)v8;
  if ( v8 < v6 )
  {
    v7 = &a1[a2] - v9;
    if ( v8 <= v7 )
      v7 = v8 - 1;
    v9[v7] = a3;
    result = &v9[v7 + 1];
    *result = 0;
  }
  return result;
}
