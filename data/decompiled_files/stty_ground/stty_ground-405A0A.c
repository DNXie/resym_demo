#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_405A0A()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_613240;
  for ( i = 1; i < dword_613220; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_613340 )
  {
    free(ptr[1]);
    qword_613230 = 256LL;
    off_613238 = &unk_613340;
  }
  if ( ptr != (void **)&qword_613230 )
  {
    free(ptr);
    off_613240 = &qword_613230;
  }
  dword_613220 = 1;
}
