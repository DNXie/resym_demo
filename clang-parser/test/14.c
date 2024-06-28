#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_42805F(const char *a1)
{
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax
  char *v4; // rax
  const char *v5; // rbx
  char *v6; // rax
  __int64 v8[15]; // [rsp+10h] [rbp-A0h] BYREF
  char *v9; // [rsp+88h] [rbp-28h]
  __int64 *i; // [rsp+90h] [rbp-20h]
  const char *v11; // [rsp+98h] [rbp-18h]

  v8[0] = (__int64)"[";
  v8[1] = (__int64)"test invocation";
  v8[2] = (__int64)"coreutils";
  v8[3] = (__int64)"Multi-call invocation";
  v8[4] = (__int64)"sha224sum";
  v8[5] = (__int64)"sha2 utilities";
  v8[6] = (__int64)"sha256sum";
  v8[7] = (__int64)"sha2 utilities";
  v8[8] = (__int64)"sha384sum";
  v8[9] = (__int64)"sha2 utilities";
  v8[10] = (__int64)"sha512sum";
  v8[11] = (__int64)"sha2 utilities";
  v8[12] = 0LL;
  v8[13] = 0LL;
  v11 = a1;
  for ( i = v8; *i && strcmp(a1, (const char *)*i); i += 2 )
    ;
  if ( i[1] )
    v11 = (const char *)i[1];
  v1 = gettext("\n%s online help: <%s>\n");
  printf(v1, "GNU coreutils", "https://www.gnu.org/software/coreutils/");
  v9 = setlocale(5, 0LL);
  if ( v9 && strncmp(v9, "en_", 3uLL) )
  {
    v2 = stdout;
    v3 = gettext("Report any translation bugs to <https://translationproject.org/team/>\n");
    fputs_unlocked(v3, v2);
  }
  v4 = gettext("Full documentation <%s%s>\n");
  printf(v4, "https://www.gnu.org/software/coreutils/", a1);
  if ( v11 == a1 )
    v5 = " invocation";
  else
    v5 = byte_51BB26;
  v6 = gettext("or available locally via: info '(coreutils) %s%s'\n");
  return printf(v6, v11, v5);
}