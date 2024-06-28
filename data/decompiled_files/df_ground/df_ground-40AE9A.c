#include "/share/binary_recovery/clang-parser/defs.hh"
void *__fastcall sub_40AE9A(double a1)
{
  void *result; // rax
  void *v2; // rax
  void *v3; // rax
  void *v4; // rax
  bool v5; // al
  bool v6; // al
  __int64 v7; // rax
  int v8; // [rsp+1Ch] [rbp-34h]
  void *ptr; // [rsp+20h] [rbp-30h] BYREF
  void **v10; // [rsp+28h] [rbp-28h]
  char *file; // [rsp+30h] [rbp-20h]
  FILE *stream; // [rsp+38h] [rbp-18h]
  struct mntent *v13; // [rsp+40h] [rbp-10h]
  char *v14; // [rsp+48h] [rbp-8h]

  v10 = &ptr;
  file = "/etc/mtab";
  stream = setmntent("/etc/mtab", "r");
  if ( !stream )
    return 0LL;
  while ( 1 )
  {
    v13 = getmntent(stream);
    if ( !v13 )
      break;
    v14 = (char *)sub_40986C(0x30uLL, a1);
    v2 = sub_4099C1(v13->mnt_fsname, a1);
    *(_QWORD *)v14 = v2;
    v3 = sub_4099C1(v13->mnt_dir, a1);
    *((_QWORD *)v14 + 1) = v3;
    v4 = sub_4099C1(v13->mnt_type, a1);
    *((_QWORD *)v14 + 2) = v4;
    v14[32] |= 4u;
    v5 = !strcmp(*((const char **)v14 + 2), "autofs")
      || !strcmp(*((const char **)v14 + 2), "none")
      || !strcmp(*((const char **)v14 + 2), "proc")
      || !strcmp(*((const char **)v14 + 2), "subfs")
      || !strcmp(*((const char **)v14 + 2), "kernfs")
      || !strcmp(*((const char **)v14 + 2), "ignore");
    v14[32] = v5 | v14[32] & 0xFE;
    v6 = strchr(*(const char **)v14, 58)
      || **(_BYTE **)v14 == 47
      && *(_BYTE *)(*(_QWORD *)v14 + 1LL) == 47
      && (!strcmp(*((const char **)v14 + 2), "smbfs") || !strcmp(*((const char **)v14 + 2), "cifs"));
    v14[32] = (2 * v6) | v14[32] & 0xFD;
    v7 = sub_40AE89(v13->mnt_opts);
    *((_QWORD *)v14 + 3) = v7;
    *v10 = v14;
    v10 = (void **)(v14 + 40);
  }
  if ( endmntent(stream) )
  {
    *v10 = 0LL;
    result = ptr;
  }
  else
  {
    v8 = *__errno_location();
    *v10 = 0LL;
    while ( ptr )
    {
      v14 = (char *)*((_QWORD *)ptr + 5);
      free(*(void **)ptr);
      free(*((void **)ptr + 1));
      if ( (*((_BYTE *)ptr + 32) & 4) != 0 )
        free(*((void **)ptr + 2));
      free(ptr);
      ptr = v14;
    }
    *__errno_location() = v8;
    result = 0LL;
  }
  return result;
}
