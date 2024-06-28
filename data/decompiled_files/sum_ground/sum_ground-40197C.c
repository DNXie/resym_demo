#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40197C(const char *a1, int a2)
{
  int v2; // eax
  int *v3; // rax
  int *v5; // rax
  const char *v6; // rax
  _BYTE v7[5]; // [rsp+17h] [rbp-2C9h]
  int v8; // [rsp+1Ch] [rbp-2C4h]
  FILE *stream; // [rsp+20h] [rbp-2C0h]
  __int64 v10; // [rsp+28h] [rbp-2B8h]
  char v11[664]; // [rsp+30h] [rbp-2B0h] BYREF
  unsigned __int64 v12; // [rsp+2C8h] [rbp-18h]

  v12 = __readfsqword(0x28u);
  v7[4] = 0;
  v10 = 0LL;
  v2 = strcmp(a1, "-");
  *(_DWORD *)v7 = v2 == 0;
  if ( v2 )
  {
    stream = fopen(a1, "r");
    if ( !stream )
      goto LABEL_4;
    sub_4022DA(stream, 2LL);
  }
  else
  {
    stream = (FILE *)stdin;
    byte_608279 = 1;
    sub_4022DA(stdin, 2LL);
  }
  while ( 1 )
  {
    v8 = getc_unlocked(stream);
    if ( v8 == -1 )
      break;
    ++v10;
    *(_DWORD *)&v7[1] = (unsigned __int16)(v8 + (*(int *)&v7[1] >> 1) + (*(_WORD *)&v7[1] << 15));
  }
  if ( ferror_unlocked(stream) )
  {
    v5 = __errno_location();
    error(0, *v5, "%s", a1);
    if ( v7[0] != 1 )
      sub_405AEB(stream);
    return 0LL;
  }
  if ( v7[0] != 1 && (unsigned int)sub_405AEB(stream) )
  {
LABEL_4:
    v3 = __errno_location();
    error(0, *v3, "%s", a1);
    return 0LL;
  }
  v6 = (const char *)sub_402542(v10, v11, 0LL, 1LL, 1024LL);
  printf("%05d %5s", *(unsigned int *)&v7[1], v6);
  if ( a2 > 1 )
    printf(" %s", a1);
  putchar_unlocked(10);
  return 1LL;
}
