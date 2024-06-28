#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_401E60(const char *a1)
{
  char v1; // al
  char *v2; // rax
  const char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  char v7; // [rsp+1Fh] [rbp-201h]
  __int64 v8; // [rsp+20h] [rbp-200h]
  char *v9; // [rsp+28h] [rbp-1F8h]
  char *v10; // [rsp+30h] [rbp-1F0h]
  struct passwd *v11; // [rsp+38h] [rbp-1E8h]
  char *v12; // [rsp+40h] [rbp-1E0h]
  char *ptr; // [rsp+48h] [rbp-1D8h]
  struct stat stat_buf; // [rsp+50h] [rbp-1D0h] BYREF
  char dest[48]; // [rsp+E0h] [rbp-140h] BYREF
  char name[264]; // [rsp+110h] [rbp-110h] BYREF
  unsigned __int64 v17; // [rsp+218h] [rbp-8h]

  v17 = __readfsqword(0x28u);
  if ( a1[8] == 47 )
  {
    strncpy(dest, a1 + 8, 0x20uLL);
    dest[32] = 0;
  }
  else
  {
    strcpy(dest, "/dev/");
    strncpy(&dest[5], a1 + 8, 0x20uLL);
    dest[37] = 0;
  }
  if ( (unsigned int)sub_405A60(dest, &stat_buf) )
  {
    v7 = 63;
    v8 = 0LL;
  }
  else
  {
    if ( (stat_buf.st_mode & 0x10) != 0 )
      v1 = 32;
    else
      v1 = 42;
    v7 = v1;
    v8 = stat_buf.st_atim.tv_sec;
  }
  printf("%-8.*s", 32, a1 + 44);
  if ( byte_608242 )
  {
    strncpy(name, a1 + 44, 0x20uLL);
    name[32] = 0;
    v11 = getpwnam(name);
    if ( v11 )
    {
      v12 = strchr(v11->pw_gecos, 44);
      if ( v12 )
        *v12 = 0;
      ptr = (char *)sub_401B24(v11->pw_gecos, v11->pw_name);
      printf(" %-19.19s", ptr);
      free(ptr);
    }
    else
    {
      v2 = gettext("        ???");
      printf(" %19s", v2);
    }
  }
  printf(" %c%-8.*s", (unsigned int)v7, 32, a1 + 8);
  if ( byte_608240 )
  {
    if ( v8 )
      v3 = sub_401CB3(v8);
    else
      v3 = gettext("?????");
    printf(" %-6s", v3);
  }
  v4 = sub_401DF3((__int64)a1);
  printf(" %s", v4);
  if ( byte_608247 && a1[76] )
  {
    v9 = 0LL;
    strncpy(name, a1 + 76, 0x100uLL);
    name[256] = 0;
    v10 = strchr(name, 58);
    if ( v10 )
    {
      v5 = v10++;
      *v5 = 0;
    }
    if ( name[0] )
      v9 = (char *)sub_402CD0(name);
    if ( !v9 )
      v9 = name;
    if ( v10 )
      printf(" %s:%s", v9, v10);
    else
      printf(" %s", v9);
    if ( v9 != name )
      free(v9);
  }
  putchar_unlocked(10);
  return __readfsqword(0x28u) ^ v17;
}
