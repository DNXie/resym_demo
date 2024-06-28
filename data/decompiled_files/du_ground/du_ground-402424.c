#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_402424(__int64 a1)
{
  char *v1; // rax

  v1 = gettext(
         "\n"
         "Display values are in units of the first available SIZE from --block-size,\n"
         "and the %s_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\n"
         "Otherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n");
  return printf(v1, a1);
}
