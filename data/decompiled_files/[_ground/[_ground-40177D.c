#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int8 *__fastcall sub_40177D(unsigned __int8 *a1)
{
  const unsigned __int16 *v1; // rbx
  unsigned __int8 *v2; // rax
  const unsigned __int16 *v3; // rbx
  __int64 v5; // rbx
  char *v6; // rax
  unsigned __int8 *i; // [rsp+10h] [rbp-20h]
  unsigned __int8 *v8; // [rsp+10h] [rbp-20h]
  unsigned __int8 *v9; // [rsp+10h] [rbp-20h]
  unsigned __int8 *v10; // [rsp+18h] [rbp-18h]

  for ( i = a1; ; ++i )
  {
    v1 = *__ctype_b_loc();
    if ( (v1[(unsigned __int8)sub_401530(*i)] & 1) == 0 )
      break;
  }
  if ( *i == 43 )
  {
    v8 = i + 1;
    v10 = v8;
  }
  else
  {
    v10 = i;
    v8 = &i[*i == 45];
  }
  v2 = v8;
  v9 = v8 + 1;
  if ( (unsigned int)((char)*v2 - 48) > 9 )
    goto LABEL_16;
  while ( (unsigned int)((char)*v9 - 48) <= 9 )
    ++v9;
  while ( 1 )
  {
    v3 = *__ctype_b_loc();
    if ( (v3[(unsigned __int8)sub_401530(*v9)] & 1) == 0 )
      break;
    ++v9;
  }
  if ( *v9 )
  {
LABEL_16:
    v5 = sub_403D3B((__int64)a1);
    v6 = gettext("invalid integer %s");
    sub_40165F(v6, v5);
  }
  return v10;
}
