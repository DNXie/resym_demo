#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_4019BB(FILE *a1, FILE *a2, __int64 a3)
{
  char *v3; // rbx
  int *v4; // rax
  char *v5; // rbx
  int *v6; // rax
  __int64 v9; // [rsp+28h] [rbp-1C38h] BYREF
  unsigned __int64 v10; // [rsp+30h] [rbp-1C30h]
  size_t v11; // [rsp+38h] [rbp-1C28h]
  char v12[3072]; // [rsp+40h] [rbp-1C20h] BYREF
  char v13[4104]; // [rsp+C40h] [rbp-1020h] BYREF
  unsigned __int64 v14; // [rsp+1C48h] [rbp-18h]

  v14 = __readfsqword(0x28u);
  v9 = 0LL;
  do
  {
    v10 = 0LL;
    do
    {
      v11 = fread_unlocked(&v12[v10], 1uLL, 3072 - v10, a1);
      v10 += v11;
    }
    while ( !feof_unlocked(a1) && !ferror_unlocked(a1) && v10 <= 0xBFF );
    if ( v10 )
    {
      sub_4022AD(v12, v10, v13, 4 * ((v10 + 2) / 3));
      sub_401828(v13, 4 * ((v10 + 2) / 3), a3, &v9, a2);
    }
  }
  while ( !feof_unlocked(a1) && !ferror_unlocked(a1) && v10 == 3072 );
  if ( a3 && v9 && fputs_unlocked("\n", a2) < 0 )
  {
    v3 = gettext("write error");
    v4 = __errno_location();
    error(1, *v4, v3);
  }
  if ( ferror_unlocked(a1) )
  {
    v5 = gettext("read error");
    v6 = __errno_location();
    error(1, *v6, v5);
  }
  return __readfsqword(0x28u) ^ v14;
}
