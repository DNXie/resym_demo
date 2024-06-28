#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_402960(char *a1, char *a2, __int64 a3)
{
  _BOOL8 result; // rax
  __uid_t v4; // ebx
  __uid_t v5; // eax
  __gid_t v6; // ebx
  __gid_t v7; // eax
  bool v9; // [rsp+26h] [rbp-14Ah]
  char v10; // [rsp+27h] [rbp-149h]
  int fd; // [rsp+28h] [rbp-148h]
  int v12; // [rsp+2Ch] [rbp-144h]
  char *s1; // [rsp+30h] [rbp-140h] BYREF
  char *s2; // [rsp+38h] [rbp-138h] BYREF
  struct stat stat_buf; // [rsp+40h] [rbp-130h] BYREF
  struct stat v16; // [rsp+D0h] [rbp-A0h] BYREF

  if ( sub_402943(mode) )
    return 1LL;
  if ( (unsigned int)sub_419BE0(a1, &stat_buf) )
    return 1LL;
  if ( (unsigned int)sub_419BE0(a2, &v16) )
    return 1LL;
  if ( (stat_buf.st_mode & 0xF000) != 0x8000
    || (v16.st_mode & 0xF000) != 0x8000
    || sub_402943(stat_buf.st_mode)
    || sub_402943(v16.st_mode) )
  {
    return 1LL;
  }
  if ( stat_buf.st_size != v16.st_size || (v16.st_mode & 0xFFF) != mode )
    return 1LL;
  v4 = v16.st_uid;
  v5 = owner == -1 ? getuid() : owner;
  if ( v4 != v5 )
    return 1LL;
  v6 = v16.st_gid;
  v7 = group == -1 ? getgid() : group;
  if ( v6 != v7 )
    return 1LL;
  if ( !dword_620480 || !*(_BYTE *)(a3 + 34) )
    goto LABEL_31;
  s1 = 0LL;
  s2 = 0LL;
  if ( (unsigned int)sub_40273A(a1, &s1) == -1 )
    return 1LL;
  if ( (unsigned int)sub_40273A(a2, &s2) == -1 )
  {
    sub_4026ED();
    return 1LL;
  }
  v9 = strcmp(s1, s2) == 0;
  sub_4026ED();
  sub_4026ED();
  if ( !v9 )
    return 1LL;
LABEL_31:
  fd = open(a1, 0);
  if ( fd < 0 )
    return 1LL;
  v12 = open(a2, 0);
  if ( v12 >= 0 )
  {
    v10 = sub_4028C8(fd, v12);
    close(fd);
    close(v12);
    result = v10 == 0;
  }
  else
  {
    close(fd);
    result = 1LL;
  }
  return result;
}
