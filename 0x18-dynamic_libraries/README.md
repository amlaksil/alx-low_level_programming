## Creating A Shared (Dynamic) 'C' Library

The creation of a shared library is rather similar to the creation of a static library. Compile a list of object files, then insert them all into a shared library file. However, there are two major differences:

1. Compile for "Position Independent Code" (PIC) - When the object files are generated, we have no idea where in memory they will be inserted in a program that will use them. Many different programs may use the same library, and each load it into a different memory in address. Thus, we need that all jump calls ("goto", in assembly speak) and subroutine calls will use relative addresses, and not absolute addresses. Thus, we need to use a compiler flag that will cause this type of code to be generated. In most compilers, this is done by specifying '-fPIC' or '-fpic' on the compilation command.

2. Library File Creation - unlike a static library, a shared library is not an archive file. It has a format that is specific to the architecture for which it is being created. Thus, we need to use the compiler (either the compiler's driver, or its linker) to generate the library, and tell it that it should create a shared library, not a final program file. This is done by using the '-G' flag with some compilers, or the '-shared' flag with other compilers.

Thus, the set of commands we will use to create a shared library, would be something like this:

```
 gcc -fPIC -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
 gcc -shared *.o -o libdynamic.so
```
The compilation part is easy. It is done almost the same as when linking with static libraries:

```
 gcc -Wall -pedantic -Werror -Wextra main.c -L. -ldynamic -o len
```
When we build a new shared library that is not part of the system, we can use the `LD_LIBRARY_PATH` environment variable to tell the dynamic loader to look in other directories. The way to do depends on the type of shell we use. For sh or bash shell

```
 export LD_LIBRARY_PATH=/full/path/to/library/directory:$LD_LIBRARY_PATH
 ```
After you've defined `LD_LIBRARY_PATH`, you can check if the system locates the library properly for a given program linked with this library.

```
ldd len
```

```
linux-vdso.so.1 (0x00007ffd475a0000)
        libdynamic.so => ./libdynamic.so (0x00007fbd82c5b000)
	libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007fbd82a5e000)
	/lib64/ld-linux-x86-64.so.2 (0x00007fbd82c67000)
```