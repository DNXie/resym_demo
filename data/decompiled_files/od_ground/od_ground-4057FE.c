#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4057FE(char *a1, size_t a2, char a3, unsigned int a4, long double a5)
{
  __int64 v7; // rax
  int v8; // edx
  _BYTE *v9; // rax
  char *v10; // rax
  char v11; // dl
  int v12; // eax
  long double v14; // [rsp+10h] [rbp-80h]
  int i; // [rsp+40h] [rbp-50h]
  int v18; // [rsp+44h] [rbp-4Ch]
  _BYTE *v19; // [rsp+48h] [rbp-48h]
  _BYTE *v20; // [rsp+48h] [rbp-48h]
  _BYTE *v21; // [rsp+48h] [rbp-48h]
  long double v22; // [rsp+50h] [rbp-40h]
  char format; // [rsp+60h] [rbp-30h] BYREF
  _BYTE v24[23]; // [rsp+61h] [rbp-2Fh] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-18h]

  v25 = __readfsqword(0x28u);
  if ( a5 >= 0.0 )
  {
    v7 = *(_QWORD *)&a5;
    v8 = DWORD2(a5);
  }
  else
  {
    v14 = -a5;
    v7 = *(_QWORD *)&v14;
    v8 = DWORD2(v14);
  }
  *(_QWORD *)&v22 = v7;
  DWORD2(v22) = v8;
  format = 37;
  v24[0] = 45;
  v19 = &v24[(a3 & 1) != 0];
  *v19 = 43;
  v20 = &v19[(a3 & 2) != 0];
  *v20 = 32;
  v21 = &v20[(a3 & 4) != 0];
  *v21 = 48;
  v9 = &v21[(a3 & 8) != 0];
  *v9++ = 42;
  *v9++ = 46;
  *v9 = 42;
  v9[1] = 76;
  v10 = v9 + 2;
  if ( (a3 & 0x10) != 0 )
    v11 = 71;
  else
    v11 = 103;
  *v10 = v11;
  v10[1] = 0;
  if ( v22 >= 3.3621031431120935063e-4932 )
    v12 = 18;
  else
    v12 = 1;
  for ( i = v12; ; ++i )
  {
    v18 = snprintf(a1, a2, &format, a4, (unsigned int)i);
    if ( v18 < 0 || i > 20 || v18 < a2 && a5 == strtold(a1, 0LL) )
      break;
  }
  return (unsigned int)v18;
}
