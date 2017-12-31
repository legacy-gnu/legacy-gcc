$!
$!	Build GCC
$!
$! Set the def dir to proper place for use in batch. Works for interactive too.
$flnm = f$enviroment("PROCEDURE")     ! get current procedure name
$set default 'f$parse(flnm,,,"DEVICE")''f$parse(flnm,,,"DIRECTORY")'
$!
$! First, build the preprocesor.
$!
$ @make-cccp
$!
$! To build the GNU C++ compiler in addition to the GNU CC compiler, comment
$! out the `@make-cc1' line, and uncomment the `@make-cc1 cc1 cc1plus' line.
$! To also build Objective-C, add "cc1obj" to the list.
$!
$! See the file make-cc1.com for a complete list of options.
$!
$ @make-cc1
$! @make-cc1 cc1 cc1plus
