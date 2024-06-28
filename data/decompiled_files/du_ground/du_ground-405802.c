#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_405802(void (__fastcall *a1)(__int64, _BYTE *, _QWORD), __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  bool v5; // al
  __int64 result; // rax
  __int64 v7; // rax
  _BOOL4 v8; // eax
  bool v11; // [rsp+27h] [rbp-49h]
  int v12; // [rsp+28h] [rbp-48h]
  int v13; // [rsp+2Ch] [rbp-44h]
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  FILE *stream; // [rsp+38h] [rbp-38h]
  _BYTE *v16; // [rsp+40h] [rbp-30h]
  _BYTE *i; // [rsp+48h] [rbp-28h]
  _BYTE *v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+58h] [rbp-18h]
  _BYTE *v20; // [rsp+60h] [rbp-10h]
  unsigned __int64 v21; // [rsp+68h] [rbp-8h]

  v5 = *(_BYTE *)a3 == 45 && !*(_BYTE *)(a3 + 1);
  v11 = v5;
  v16 = 0LL;
  v14 = 0LL;
  v19 = 0LL;
  v12 = 0;
  if ( v5 )
  {
    stream = stdin;
  }
  else
  {
    stream = fopen((const char *)a3, "r");
    if ( !stream )
      return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    v13 = getc_unlocked(stream);
    if ( v13 == -1 )
      break;
    if ( v19 == v14 )
      v16 = (_BYTE *)sub_40EBE2(v16, &v14);
    v7 = v19++;
    v16[v7] = v13;
  }
  if ( ferror_unlocked(stream) )
    v12 = *__errno_location();
  if ( !v11 && (unsigned int)sub_40F927(stream) )
    v12 = *__errno_location();
  v16 = (_BYTE *)sub_40EB81(v16, v19 + 1);
  v16[v19] = a5;
  v8 = v19 && v16[v19 - 1] != a5;
  v21 = (unsigned __int64)&v16[v19 + v8];
  v18 = v16;
  for ( i = v16; (unsigned __int64)i < v21; ++i )
  {
    if ( *i == a5 )
    {
      v20 = i;
      if ( ((*__ctype_b_loc())[a5] & 0x2000) != 0 )
      {
        while ( v20 != v18 )
        {
          if ( ((*__ctype_b_loc())[(unsigned __int8)*(v20 - 1)] & 0x2000) == 0 )
            goto LABEL_29;
          --v20;
        }
      }
      else
      {
LABEL_29:
        *v20 = 0;
        a1(a2, v18, a4);
      }
      v18 = i + 1;
    }
  }
  *__errno_location() = v12;
  if ( v12 )
    result = 0xFFFFFFFFLL;
  else
    result = 0LL;
  return result;
}
