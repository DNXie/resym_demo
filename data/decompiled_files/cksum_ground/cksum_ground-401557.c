#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401557(const char *a1, char a2)
{
  int *v2; // rax
  __int64 result; // rax
  char *v4; // rax
  char *v5; // rax
  int *v7; // rax
  int *v8; // rax
  char *v9; // rbx
  int *v10; // rax
  __int64 v11; // [rsp+10h] [rbp-10070h]
  unsigned int v12; // [rsp+10h] [rbp-10070h]
  size_t v13; // [rsp+18h] [rbp-10068h]
  size_t v14; // [rsp+20h] [rbp-10060h]
  FILE *stream; // [rsp+28h] [rbp-10058h]
  char *v16; // [rsp+30h] [rbp-10050h]
  const char *v17; // [rsp+38h] [rbp-10048h]
  char v18[32]; // [rsp+40h] [rbp-10040h] BYREF
  char ptr[65544]; // [rsp+60h] [rbp-10020h] BYREF
  unsigned __int64 v20; // [rsp+10068h] [rbp-18h]

  v20 = __readfsqword(0x28u);
  v11 = 0LL;
  v13 = 0LL;
  if ( !strcmp(a1, "-") )
  {
    stream = (FILE *)stdin;
    byte_607221 = 1;
    sub_401D98(stdin, 2LL);
  }
  else
  {
    stream = fopen(a1, "r");
    if ( !stream )
    {
      v2 = __errno_location();
      error(0, *v2, "%s", a1);
      return 0LL;
    }
    sub_401D98(stream, 2LL);
  }
  do
  {
    v14 = fread_unlocked(ptr, 1uLL, 0x10000uLL, stream);
    if ( !v14 )
      break;
    v16 = ptr;
    if ( v13 + v14 < v13 )
    {
      v4 = gettext("%s: file too long");
      error(1, 0, v4, a1);
    }
    v13 += v14;
    while ( v14-- )
    {
      v5 = v16++;
      v11 = (v11 << 8) ^ qword_404800[(unsigned __int8)(BYTE3(v11) ^ *v5)];
    }
  }
  while ( !feof_unlocked(stream) );
  if ( ferror_unlocked(stream) )
  {
    v7 = __errno_location();
    error(0, *v7, "%s", a1);
    if ( strcmp(a1, "-") )
      sub_404357(stream);
    result = 0LL;
  }
  else if ( !strcmp(a1, "-") || (unsigned int)sub_404357(stream) != -1 )
  {
    v17 = (const char *)sub_401DD2(v13, v18);
    while ( v13 )
    {
      v11 = (v11 << 8) ^ qword_404800[(unsigned __int8)(v13 ^ BYTE3(v11))];
      v13 >>= 8;
    }
    v12 = ~(_DWORD)v11;
    if ( a2 )
      printf("%u %s %s\n", v12, v17, a1);
    else
      printf("%u %s\n", v12, v17);
    if ( ferror_unlocked(stdout) )
    {
      v9 = gettext("write error");
      v10 = __errno_location();
      error(1, *v10, "-: %s", v9);
    }
    result = 1LL;
  }
  else
  {
    v8 = __errno_location();
    error(0, *v8, "%s", a1);
    result = 0LL;
  }
  return result;
}
