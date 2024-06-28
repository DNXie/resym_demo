#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401F0B(const char *a1)
{
  int *v1; // rax
  char *v2; // rax
  char *v3; // rax
  char *v4; // rbx
  int *v5; // rax
  unsigned __int8 v7; // [rsp+16h] [rbp-4Ah]
  _BYTE v8[9]; // [rsp+17h] [rbp-49h]
  __int64 v9; // [rsp+20h] [rbp-40h]
  _QWORD *v10; // [rsp+28h] [rbp-38h]
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-28h]
  char v13[8]; // [rsp+40h] [rbp-20h] BYREF
  const char *v14; // [rsp+48h] [rbp-18h]

  v7 = 1;
  v8[8] = 0;
  v9 = 0LL;
  *(_QWORD *)v8 = strcmp(a1, "-") == 0;
  v11 = sub_401711(0LL);
  if ( v8[0] != 1 && !sub_402632(a1, "r", stdin) )
  {
    v1 = __errno_location();
    error(1, *v1, "%s", a1);
  }
  sub_4025A5(stdin, 2LL);
  sub_404177(v13);
  while ( 1 )
  {
    v12 = sub_404198(stdin, " \t\n", 3LL, v13);
    if ( v12 == -1 )
      break;
    if ( !v12 )
      __assert_fail("len != 0", "../../src/src/tsort.c", 0x1CBu, "tsort");
    v9 = sub_40179D(v11, v14);
    if ( *(_QWORD *)&v8[1] )
    {
      sub_401B97(*(__int64 *)&v8[1], v9);
      v9 = 0LL;
    }
    *(_QWORD *)&v8[1] = v9;
  }
  if ( v9 )
  {
    v2 = gettext("%s: input contains an odd number of tokens");
    error(1, 0, v2, a1);
  }
  sub_401ED5(v11, (__int64 (__fastcall *)(__int64))sub_401C0F);
  while ( qword_607260 )
  {
    sub_401ED5(v11, (__int64 (__fastcall *)(__int64))sub_401C30);
    while ( qword_607248 )
    {
      v10 = *(_QWORD **)(qword_607248 + 48);
      puts(*(const char **)qword_607248);
      *(_QWORD *)qword_607248 = 0LL;
      --qword_607260;
      while ( v10 )
      {
        if ( !--*(_QWORD *)(*v10 + 32LL) )
        {
          *(_QWORD *)(qword_607250 + 40) = *v10;
          qword_607250 = *v10;
        }
        v10 = (_QWORD *)v10[1];
      }
      qword_607248 = *(_QWORD *)(qword_607248 + 40);
    }
    if ( qword_607260 )
    {
      v3 = gettext("%s: input contains a loop:");
      error(0, 0, v3, a1);
      v7 = 0;
      do
        sub_401ED5(v11, sub_401C8B);
      while ( qword_607258 );
    }
  }
  if ( (unsigned int)sub_4050E3(stdin) )
  {
    if ( v8[0] )
      v4 = gettext("standard input");
    else
      v4 = (char *)sub_4029DF(a1);
    v5 = __errno_location();
    error(1, *v5, "%s", v4);
  }
  return v7;
}
