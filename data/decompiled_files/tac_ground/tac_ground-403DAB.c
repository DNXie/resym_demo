#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_403DAB()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_608230;
  for ( i = 1; i < dword_608210; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_60A4C0 )
  {
    free(ptr[1]);
    qword_608220 = 256LL;
    off_608228 = &unk_60A4C0;
  }
  if ( ptr != (void **)&qword_608220 )
  {
    free(ptr);
    off_608230 = &qword_608220;
  }
  dword_608210 = 1;
}
