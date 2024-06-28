#include "/share/binary_recovery/clang-parser/defs.hh"
void *sub_40B8E8()
{
  __int64 v0; // rsi
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
  v0 = (__int64)"r";
  stream = setmntent("/etc/mtab", "r");
  if ( !stream )
    return 0LL;
  while ( 1 )
  {
    v13 = getmntent(stream);
    if ( !v13 )
      break;
    v14 = (char *)sub_40AAA9(0x30uLL, v0);
    v2 = sub_40ABFE(v13->mnt_fsname);
    *(_QWORD *)v14 = v2;
    v3 = sub_40ABFE(v13->mnt_dir);
    *((_QWORD *)v14 + 1) = v3;
    v4 = sub_40ABFE(v13->mnt_type);
    *((_QWORD *)v14 + 2) = v4;
    v14[32] |= 4u;
    v5 = !strcmp(*((const char **)v14 + 2), "autofs")
      || !strcmp(*((const char **)v14 + 2), "none")
      || !strcmp(*((const char **)v14 + 2), "proc")
      || !strcmp(*((const char **)v14 + 2), "subfs")
      || !strcmp(*((const char **)v14 + 2), "kernfs")
      || !strcmp(*((const char **)v14 + 2), "ignore");
    v14[32] = v5 | v14[32] & 0xFE;
    v0 = 58LL;
    v6 = 1;
    if ( !strchr(*(const char **)v14, 58) )
    {
      if ( **(_BYTE **)v14 != 47
        || *(_BYTE *)(*(_QWORD *)v14 + 1LL) != 47
        || (v0 = (__int64)"smbfs", strcmp(*((const char **)v14 + 2), "smbfs"))
        && (v0 = (__int64)"cifs", strcmp(*((const char **)v14 + 2), "cifs")) )
      {
        v6 = 0;
      }
    }
    v14[32] = (2 * v6) | v14[32] & 0xFD;
    v7 = sub_40B8D7(v13->mnt_opts);
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
