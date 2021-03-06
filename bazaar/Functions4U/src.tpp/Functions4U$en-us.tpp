topic "Functions4U. Reference";
[2 $$0,0#00000000000000000000000000000000:Default]
[i448;a25;kKO9;2 $$1,0#37138531426314131252341829483380:class]
[l288;2 $$2,0#27521748481378242620020725143825:desc]
[0 $$3,0#96390100711032703541132217272105:end]
[H6;0 $$4,0#05600065144404261032431302351956:begin]
[i448;a25;kKO9;2 $$5,0#37138531426314131252341829483370:item]
[l288;a4;*@5;1 $$6,6#70004532496200323422659154056402:requirement]
[l288;i1121;b17;O9;~~~.1408;2 $$7,0#10431211400427159095818037425705:param]
[i448;b42;O9;2 $$8,8#61672508125594000341940100500538:tparam]
[b42;2 $$9,9#13035079074754324216151401829390:normal]
[{_}%EN-US 
[ {{10000@(113.42.0) [s0; [*@7;4 Functions4U. Reference]]}}&]
[s0;*@3;4 &]
[s0; List of functions in package.&]
[s0; &]
[ {{10000@1 [s0; [* Running files and commands]]}}&]
[s4;%- &]
[s5;:LaunchFile`(const char`*`):%- [@(0.0.255) bool]_[* LaunchFile]([@(0.0.255) const]_[@(0.0.255) c
har]_`*[*@3 file])&]
[s2; Opens the file [%-*@3 file ]with the adecuated program defined 
in the OS by default.&]
[s0; &]
[s0;l288; [/ Example:]&]
[s0;l288; [/ LaunchFile(`"c:`\`\My spreadsheet.txt`"). It will open 
default program (like gedit or notepad) with document `"My spreadsheet.txt`".]&]
[s3; &]
[s0; &]
[ {{10000@1 [s0; [* File Handling]]}}&]
[s4; &]
[s5;:FileCat`(const char`*`,const char`*`):%- [@(0.0.255) bool]_[* FileCat]([@(0.0.255) con
st]_[@(0.0.255) char]_`*[*@3 file], [@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 appendFile])
&]
[s2; Appends at the end of [%-*@3 file] the contents of file [%-*@3 appendFile]. 
[%-*@3 file] will be modified and [%-*@3 appendFile ]will remain 
unchanged.&]
[s0;l288; Returns true in case of success.&]
[s3; &]
[s4;%- &]
[s5;:FileStrAppend`(const char`*`,const char`*`):%- [@(0.0.255) bool]_[* FileStrAppend]([@(0.0.255) c
onst]_[@(0.0.255) char]_`*[*@3 file], [@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 str])&]
[s2; Appends at the end of [%-*@3 file] the text [%-*@3 str].&]
[s0;l288; Returns true in case of success.&]
[s4;%- &]
[s5;:AppendFile`(const char`*`,const char`*`):%- [@(0.0.255) bool]_[* AppendFile]([@(0.0.255) c
onst]_[@(0.0.255) char]_`*[*@3 filename], [@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 str])
&]
[s2; Appends at the end of file [%-*@3 filename] the text [%-*@3 str].&]
[s2; Returns true in case of success.&]
[s3; &]
[s4;%- &]
[s5;:AppendFileName`(const String`&`,const char`*`,const char`*`):%- [_^String^ String]_
[* AppendFileName]([@(0.0.255) const]_[_^String^ String][@(0.0.255) `&]_[*@3 path1], 
[@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 path2], [@(0.0.255) const]_[@(0.0.255) char]_`*
[*@3 path3])&]
[s2; Like AppendFileName() but joining three paths. &]
[s3; &]
[s4;%- &]
[s5;:GetUpperFolder`(const char`*`):%- [_^String^ String]_[* GetUpperFolder]([@(0.0.255) co
nst]_[@(0.0.255) char]_`*[*@3 folderName])&]
[s2; Returns the name of the folder over [%-*@3 folderName].&]
[s3; &]
[s4;%- &]
[s5;:IsRootFolder`(const char`*`):%- [@(0.0.255) bool]_[* IsRootFolder]([@(0.0.255) const]_
[@(0.0.255) char]_`*[*@3 folderName])&]
[s0;l288; Returns false if there is a folder over [%-*@3 folderName]. 
It does not check if [%-*@3 folderName] exists.&]
[s3; &]
[s4;%- &]
[s5;:GetUpperFolder`(const String`&`):%- [_^String^ String]_[* GetUpperFolder]([@(0.0.255) c
onst]_[_^String^ String]_`&[*@3 folderName])&]
[s2; Returns the folder over [%-*@3 folderName].&]
[s3; &]
[s4;%- &]
[s5;:GetRelativePath`(String`&`,String`&`):%- [_^String^ String]_[* GetRelativePath]([_^String^ S
tring]_`&[*@3 from], [_^String^ String]_`&[*@3 path])&]
[s2; Returns the relative path to go from [%-*@3 from] to [%-*@3 path].&]
[s0;l288; For example, if:&]
[s0;l288;i150;O0; [%-*@3 from] `= `"/books/technology/computers`"&]
[s0;l288;i150;O0; [%-*@3 path ]`= `"/books/biology/mammals`"&]
[s0;l288; GetRelativePath() would return `"../../biology/mammals`".&]
[s0;l288; If there is no match between both paths it returns Null.&]
[s3; &]
[s4;%- &]
[s5;:FileRealName`(const char`*`):%- [_^String^ String]_[* FileRealName]([@(0.0.255) const]_
[@(0.0.255) char]_`*[*@3 path])&]
[s2; Returns the real name of [%-*@3 path].(directory or file) with 
the right letter cases or `"`" if [%-*@3 path].does not exist.&]
[s3; &]
[s4;%- &]
[s5;:GetNextFolder`(const char`*`,const char`*`):%- [_^String^ String]_[* GetNextFolder](
[@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 folder], [@(0.0.255) const]_[@(0.0.255) char]_`*
[*@3 lastFolder])&]
[s2; Considering [%-*@3 folder ]as a parent folder of [%-*@3 lastFolder], 
it returns the folder under [%-*@3 folder ]that is also parent 
of [%-*@3 lastFolder].&]
[s2; For example: GetNextFolder(`"/home`", `"/home/user/documents`") 
returns `"/home/user`".&]
[s3; &]
[s4; &]
[s5;:FileCompare`(const char`*`,const char`*`):%- [@(0.0.255) int]_[* FileCompare]([@(0.0.255) c
onst]_[@(0.0.255) char]_`*[*@3 path1], [@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 path2])&]
[s2; Compares files [%-*@3 path1] and [%-*@3 path2]. &]
[s2; It returns:&]
[s2;i150;O0; `-2 if there are problems opening or reading from the 
files.&]
[s2;i150;O0; `-1 if files are different.&]
[s2;i150;O0; 1 if files are equal.&]
[s3; &]
[s4;%- &]
[s5;:FindStringInFile`(const char`*`,const String`,int64`):%- [_^int64^ int64]_[* FindStr
ingInFile]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 file], [@(0.0.255) const]_[_^String^ S
tring]_[*@3 text], [_^int64^ int64]_[*@3 pos0]_`=_[@3 0])&]
[s2; Search in [%-*@3 file] for string [%-*@3 text] from byte position 
[%-*@3 pos0]. &]
[s2; It returns &]
[s2;i150;O0; `-2 if there are problems opening or reading from the 
[%-*@3 file].&]
[s2;i150;O0; `-1 if [%-*@3 text] is not found in [%-*@3 file].&]
[s2;i150;O0; An int64 value indicating the byte where [%-*@3 text] 
is found.&]
[s3; &]
[s4;%- &]
[s5;:GetDirectoryLength`(const char`*`):%- [_^int64^ Upp`::int64]_[* GetDirectoryLength]([@(0.0.255) c
onst]_[@(0.0.255) char]_`*[*@3 directoryName])&]
[s2; Returns the size in bytes of the sum of all file sizes under 
[%-*@3 directoryName].&]
[s3; &]
[s4;%- &]
[s5;:GetLength`(const char`*`):%- [_^int64^ Upp`::int64]_[* GetLength]([@(0.0.255) const]_[@(0.0.255) c
har]_`*[*@3 fileDirName])&]
[s2; Returns the size of [%-*@3 fileDirName].&]
[s0;l288;i150;O0; If it is a file, it returns its size.&]
[s0;l288;i150;O0; If it is a folder, it returns the size in bytes 
of the sum of all file sizes under [%-*@3 fileDirName].&]
[s3;%- &]
[s4;%- &]
[s5;:DirectoryCopy`(const char`*`,const char`*`):%- [@(0.0.255) bool]_[* DirectoryCopy]([@(0.0.255) c
onst]_[@(0.0.255) char]_`*[*@3 dir], [@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 newPlace])
&]
[s2; Copy folder [%-*@3 dir] including all files and folders to [%-*@3 newPlace].&]
[s0;l288; Returns true in case of success.&]
[s3; &]
[s4;%- &]
[s5;:SetReadOnly`(const char`*`,bool`):%- [@(0.0.255) bool]_[* SetReadOnly]([@(0.0.255) con
st]_[@(0.0.255) char]_`*[*@3 path], [@(0.0.255) bool]_[*@3 readOnly])&]
[s2; Sets [%-*@3 path ](file or folder) as read only or write permitted 
depending on the value of[%-*@3  readOnly].&]
[s0;l288; In Linux the permissions are set for user, group and others.&]
[s2; -|Returns true in case of success.&]
[s3; &]
[s4;%- &]
[s5;:SetReadOnly`(const char`*`,bool`,bool`,bool`):%- [@(0.0.255) bool]_[* SetReadOnly]([@(0.0.255) c
onst]_[@(0.0.255) char]_`*[*@3 path], [@(0.0.255) bool]_[*@3 user], [@(0.0.255) bool]_[*@3 gr
oup], [@(0.0.255) bool]_[*@3 others])&]
[s2; Sets [%-*@3 path] (file or folder) as read only or write permitted 
for[%-*@3  user], [%-*@3 group ]and [%-*@3 others].&]
[s0;l288; -|Returns true in case of success.&]
[s3; &]
[s4;%- &]
[s5;:IsReadOnly`(const char`*`,bool`&`,bool`&`,bool`&`):%- [@(0.0.255) bool]_[* IsReadOnl
y]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 path], [@(0.0.255) bool]_`&[*@3 user], 
[@(0.0.255) bool]_`&[*@3 group], [@(0.0.255) bool]_`&[*@3 others])&]
[s2; Returns true in [%-*@3 user], [%-*@3 group] or [%-*@3 others] if [%-*@3 path 
](file or folder) is read only for some of those user groups.&]
[s0; -|Returns true in case of success.&]
[s3;%- &]
[s4;%- &]
[s5;:LoadFile`_Safe`(const String`):%- [_^String^ String]_[* LoadFile`_Safe]([@(0.0.255) co
nst]_[_^String^ String]_[*@3 fileName])&]
[s2; Same as LoadFile([%-*@3 fileName]) but it works in POSIX for files 
automatically generated by the OS.&]
[s2; &]
[s2; U`+`+ LoadFile() functions prior to loading the file into a 
String, get the length of the file to dimension the String that 
will get the file. This is not valid for OS generated virtual 
files where the file length returned by the OS is 0 (for example 
files under folder /proc in Linux)&]
[s2; LoadFile`_Safe() just get the file bytes returned by the OS 
until the file end.&]
[s3; &]
[s4;%- &]
[s5;:IsFile`(const char`*`):%- [@(0.0.255) bool]_[* IsFile]([@(0.0.255) const]_[@(0.0.255) ch
ar]_`*[*@3 fileName])&]
[s2; Returns true if [%-*@3 fileName] is a file.&]
[s3; &]
[s4; &]
[s5;:IsFolder`(const char`*`):%- [@(0.0.255) bool]_[* IsFolder]([@(0.0.255) const]_[@(0.0.255) c
har]_`*[*@3 fileName])&]
[s2; Returns true id [%-*@3 fileName] is a folder.&]
[s3; &]
[s4; &]
[s5;:SearchFile`(String`,String`,String`,Array`<String`>`&`):%- [_^Array^ Array]<[_^String^ S
tring]>_[* SearchFile]([_^String^ String]_[*@3 dir], [_^String^ String]_[*@3 condFile], 
[_^String^ String]_[*@3 text], [_^Array^ Array]<[_^String^ String]>_`&[*@3 errorList])&]
[s2; Returns an Array of Strings containing the file names with full 
path of the files under folder [%-*@3 dir] that comply with condition 
(with wildcards) [%-*@3 condFile] and that contain inside the text 
[%-*@3 text].&]
[s2; [%-*@3 errorList] contains the errors.&]
[s3; &]
[s4;%- &]
[s5;:SearchFile`(String`,String`,String`):%- [_^Array^ Array]<[_^String^ String]>_[* Search
File]([_^String^ String]_[*@3 dir], [_^String^ String]_[*@3 condFile], 
[_^String^ String]_[*@3 text]_`=_`"`")&]
[s2; Returns an Array of Strings containing the file names with full 
path of the files under folder [%-*@3 dir] that comply with condition 
(with wildcards) [%-*@3 condFile ]and that contain inside the text 
[%-*@3 text].&]
[s3; &]
[s4; &]
[s5;:FileToTrashBin`(const char`*`):%- [@(0.0.255) void]_[* FileToTrashBin]([@(0.0.255) con
st]_[@(0.0.255) char]_`*[*@3 path])&]
[s2; Deletes file [%-*@3 path].by sending it to the Trash Bin.&]
[s3; &]
[s4;%- &]
[s5;:TrashBinGetCount`(`):%- [_^int64^ int64]_[* TrashBinGetCount]()&]
[s2; Returns the number of items (files and directories) located 
in the Trash Bin.&]
[s3;%- &]
[s4;%- &]
[s5;:TrashBinClear`(`):%- [@(0.0.255) void]_[* TrashBinClear]()&]
[s0; Removes all the items (files and directories) located in the 
Trash Bin.ç&]
[s3; &]
[s0; &]
[s0;%- &]
[ {{10000@1 [s0; [* File/Folder Handling `"X`" functions]]}}&]
[s0; &]
[s0;%- [%% File and folder handling functions with eXtras defined in 
]EXT`_FILE`_FLAGS&]
[s3; &]
[s4;%- &]
[s5;:USE`_TRASH`_BIN:%- [@(0.0.255) enum]_EXT`_FILE`_FLAGS_[* USE`_TRASH`_BIN]_`=_[@3 1]&]
[s2; If true, removed fildes and fodlers will be moved to the Trash 
(recycle) Bin.&]
[s3;%- &]
[s4;%- &]
[s5;:BROWSE`_LINKS:%- [@(0.0.255) enum]_EXT`_FILE`_FLAGS_[* BROWSE`_LINKS]_`=_[@3 2]&]
[s2; If true, folder functions will follow symbolic links.&]
[s3;%- &]
[s4;%- &]
[s5;:DELETE`_READ`_ONLY:%- [@(0.0.255) enum]_EXT`_FILE`_FLAGS_[* DELETE`_READ`_ONLY]_`=_[@3 4
]&]
[s2; If true, file/folder deletion functions will not consider read 
only flag.&]
[s0; &]
[s4;%- &]
[s5;:DeleteFolderDeepWildcardsX`(const char`*`,EXT`_FILE`_FLAGS`):%- [@(0.0.255) bool]_
[* DeleteFolderDeepWildcardsX]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 path], 
EXT`_FILE`_FLAGS_[*@3 flags]_`=_[@3 0])&]
[s2;%- [%% Delete all folders under ][*@3 path ][%% using ][*@3 flags][%%  
that comply the condition in wildcards included in ][*@3 path.]&]
[s2; Returns true in case of success.&]
[s3; &]
[s4;%- &]
[s5;:DeleteFileDeepWildcardsX`(const char`*`,EXT`_FILE`_FLAGS`):%- [@(0.0.255) bool]_[* D
eleteFileDeepWildcardsX]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 path], 
EXT`_FILE`_FLAGS_[*@3 flags]_`=_[@3 0])&]
[s2;%- [%% Delete all files under ][*@3 path ][%% using ][*@3 flags][%%  that 
comply the condition in wildcards included in ][*@3 path.]&]
[s2; Returns true in case of success.&]
[s3; &]
[s4;%- &]
[s5;:DeleteFolderDeepX`(const char`*`,EXT`_FILE`_FLAGS`):%- [@(0.0.255) bool]_[* DeleteFo
lderDeepX]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 path], EXT`_FILE`_FLAGS_[*@3 flags
]_`=_[@3 0])&]
[s2; Delete [%-*@3 path] folder and all files and folders under it 
using [%-*@3 flags].&]
[s2; Returns true in case of success.&]
[s3;%- &]
[s4;%- &]
[s5;:RenameDeepWildcardsX`(const char`*`,const char`*`,const char`*`,bool`,bool`,EXT`_FILE`_FLAGS`):%- [@(0.0.255) b
ool]_[* RenameDeepWildcardsX]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 path], 
[@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 namewc], [@(0.0.255) const]_[@(0.0.255) char]_`*
[*@3 newname], [@(0.0.255) bool]_[*@3 forfile], [@(0.0.255) bool]_[*@3 forfolder], 
EXT`_FILE`_FLAGS_[*@3 flags]_`=_NO`_FLAG)&]
[s2; Rename to [%-*@3 newname] the files (if [%-*@3 forfile] is set to 
true) and/or folders (if [%-*@3 forfolder] is set to true) under 
[%-*@3 path] that comply the condition in wildcards included in 
[%-*@3 namewc] using [%-*@3 flags] .&]
[s2; Returns true in case of success.&]
[s3; &]
[s4;%- &]
[s5;:FileMoveX`(const char`*`,const char`*`,EXT`_FILE`_FLAGS`):%- [@(0.0.255) bool]_[* Fi
leMoveX]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 oldpath], [@(0.0.255) const]_[@(0.0.255) c
har]_`*[*@3 newpath], EXT`_FILE`_FLAGS_[*@3 flags]_`=_NO`_FLAG)&]
[s2; Moves or renames [%-*@3 oldpath] file to [%-*@3 newpath] using [%-*@3 flags].&]
[s2; Returns true in case of success.&]
[s3; &]
[s4; &]
[s5;:FileDeleteX`(const char`*`,EXT`_FILE`_FLAGS`):%- [@(0.0.255) bool]_[* FileDeleteX]([@(0.0.255) c
onst]_[@(0.0.255) char]_`*[*@3 path], EXT`_FILE`_FLAGS_[*@3 flags]_`=_NO`_FLAG)&]
[s2; Deletes [%-*@3 path] file using [%-*@3 flags].&]
[s2; Returns true in case of success.&]
[s3; &]
[s0; &]
[ {{10000@1 [s0; [* String functions]]}}&]
[s4;%- &]
[s5;:Trim`(const String`&`):%- [_^String^ String]_[* Trim]([@(0.0.255) const]_[_^String^ Stri
ng][@(0.0.255) `&]_[*@3 s])&]
[s2; Like TrimBoth(), it removes left and right spaces in [%-*@3 s]. 
Spaces are chars like, `' `', `'`\t`', `'`\n`', ...&]
[s3; &]
[s4;%- &]
[s5;:Tokenize`(const String`&`,const String`&`,int`&`):%- [_^String^ String]_[* Tokenize](
[@(0.0.255) const]_[_^String^ String]_`&[*@3 str], [@(0.0.255) const]_[_^String^ String]_`&
[*@3 token], [@(0.0.255) int]_`&[*@3 pos])&]
[s2; Finds the next token in [%-*@3 str] beginning from [%-*@3 pos]. 
[%-*@3 token] is a String that contains token identifier chars.&]
[s0;l288; Returns the String from original [%-*@3 pos] to the char 
after found token or until the end of the String if no token 
is found. [%-*@3 pos] is updated to the next char after returned 
String.&]
[s3; &]
[s4;%- &]
[s5;:Tokenize`(const String`&`,const String`&`):%- [_^String^ String]_[* Tokenize]([@(0.0.255) c
onst]_[_^String^ String]_`&[*@3 str], [@(0.0.255) const]_[_^String^ String]_`&[*@3 tokenEnd
])&]
[s2; Finds a token in [%-*@3 str]. [%-*@3 tokenEnd] is a String that 
contains token identifier chars.&]
[s2; Returns the String to the char after found token or until the 
end of the String if no token is found.&]
[s3; &]
[s4;%- &]
[s5;:ReadCSV`(const String`,char`,bool`):%- [_^Vector^ Vector]<[_^Vector^ Vector]_<[_^Value^ V
alue]>_>_[* ReadCSV]([@(0.0.255) const]_[_^String^ String]_[*@3 strFile], 
[@(0.0.255) char]_[*@3 separator], [@(0.0.255) bool]_[*@3 removeRepeated])&]
[s2; Read a .csv file in String [%-*@3 strFile] where [%-*@3 separator] 
can be defined.&]
[s2; If [%-*@3 removeRepeated ]then repeated rows will be deleted.&]
[s3; &]
[s4; &]
[s5;:ReverseFind`(const String`&`,const String`&`,int`):%- [@(0.0.255) int]_[* ReverseFin
d]([@(0.0.255) const]_[_^String^ String][@(0.0.255) `&]_[*@3 s], [@(0.0.255) const]_[_^String^ S
tring][@(0.0.255) `&]_[*@3 toFind], [@(0.0.255) int]_[*@3 from]_`=_[@3 0])&]
[s2; Find in [%-*@3 s] the String [%-*@3 toFind] beginning in [%-*@3 from 
]in reverse order.&]
[s2; Similar to Find() but searching from the end of the String.&]
[s3; &]
[s4;%- &]
[s5;:FormatLong`(long`):%- [_^String^ String]_[* FormatLong]([@(0.0.255) long]_[*@3 a])&]
[s2; Returns the long number [%-*@3 a ]converted into a String.&]
[s3; &]
[s4;%- &]
[s5;:SecondsToString`(double`,bool`):%- [_^String^ String]_[* SecondsToString]([@(0.0.255) d
ouble]_[*@3 seconds], [@(0.0.255) bool]_[*@3 units]_`=_[@(0.0.255) false])&]
[s2; Converts an amount of [%-*@3 seconds] to a String formatted as 
HH:MM:SS.&]
[s0; -|If [%-*@3 units ]is true the units (hours, mins, seconds) will 
be part of the text.&]
[s0; -|It is opposite to StringToSeconds()&]
[s3; &]
[s4;%- &]
[s5;:StringToSeconds`(String`):%- [@(0.0.255) double]_[* StringToSeconds]([_^String^ String
]_[*@3 str])&]
[s2; Converts a String [%-*@3 str ]formatted as HH:MM:SS to a returned 
amount of seconds.&]
[s0; -|It is opposite to SecondsToString()&]
[s3; &]
[s4;%- &]
[s5;:HMSToString`(int`,int`,double`,bool`):%- [_^String^ String]_[* HMSToString]([@(0.0.255) i
nt]_[*@3 hour], [@(0.0.255) int]_[*@3 min], [@(0.0.255) double]_[*@3 seconds], 
[@(0.0.255) bool]_[*@3 units ]`=_[@(0.0.255) false])&]
[s2; Returns a String containing [%-*@3 hour], [%-*@3 min ]and [%-*@3 seconds 
]formatted as HH:MM:SS.&]
[s0;l288; If [%-*@3 units ]is true the units (hours, mins, seconds) 
will be part of the text.&]
[s0; -|It is opposite to StringToHMS().&]
[s0; &]
[s4;%- &]
[s5;:StringToHMS`(String`,int`&`,int`&`,double`&`):%- [@(0.0.255) void]_[* StringToHMS]([_^String^ S
tring]_[*@3 durat], [@(0.0.255) int]_`&[*@3 hour], [@(0.0.255) int]_`&[*@3 min], 
[@(0.0.255) double]_`&[*@3 seconds])&]
[s2; It converts a String [%-*@3 durat ]formatted as HH:MM:SS to get 
[%-*@3 hour], [%-*@3 min ]and [%-*@3 seconds].&]
[s0; -|It is opposite to HMSToString()&]
[s3; &]
[s4; &]
[s5;:BytesToString`(uint64`,bool`):%- [_^String^ String]_[* BytesToString]([_^uint64^ uint6
4]_[*@3 bytes, ][_^uint64^ bool]_[*@3 units])&]
[s2; Converts an amount of [%-*@3 bytes ]to a short String. If [%-*@3 units] 
is true, they will appear like in 123.4 Kb&]
[s3; &]
[s4;%- &]
[s5;:StrToTime`(const char`*`):%- [_^Time^ `::Time]_[* StrToTime]([@(0.0.255) const]_[@(0.0.255) c
har]_`*[*@3 s])&]
[s2;%- [%% Like ][@(0.0.255) const]_[@(0.0.255) char]_`*[* StrToTime]([@(0.0.255) struct]_[_^Time^ U
pp`::Time][@(0.0.255) `&]_[*@3 d], [@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 s]), 
but returning directly a Time.&]
[s3; &]
[s4;%- &]
[s5;:StrToDate`(const char`*`):%- [_^Date^ `::Date]_[* StrToDate]([@(0.0.255) const]_[@(0.0.255) c
har]_`*[*@3 s])&]
[s2;%- [%% Like ][@(0.0.255) const]_[@(0.0.255) char]_`*[* StrToDate]([@(0.0.255) struct]_[_^Time^ U
pp`::Date][@(0.0.255) `&]_[*@3 d], [@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 s]), 
but returning directly a Date.&]
[s3; &]
[s4;%- &]
[s5;:FormatDoubleAdjust`(double`,double`):%- [_^String^ String]_[* FormatDoubleAdjust]([@(0.0.255) d
ouble]_[*@3 d], [@(0.0.255) double]_[*@3 range])&]
[s2; Returns number [%-*@3 d] in [%-*@3 range ]converted to a String, 
so that it has the right number of digits.&]
[s0;l288; This function serves to show numbers in graph axis and 
other elements that require to show the minimum right quantity 
of digits from a double.&]
[s3; &]
[s4;%- &]
[s5;:RemoveAccents`(String`):%- [_^String^ String]_[* RemoveAccents]([_^String^ String]_[*@3 s
tr])&]
[s2; Returns [%-*@3 str ]with the accented characters substituted with 
the most approximated ascii characters.&]
[s0;l288; If the original letter is uppercase, begins a word and 
the second letter is lowercase, the substituted first letter 
will be uppercase and the second will be lowercase.&]
[s0;l288; An accented letter can be substituted with one or some 
characters.&]
[s0;l288; For example `"Århus Ørsted Ñandú crème brûlée`" 
is converted in `"Aarhus Oersted Nandu creme brulee`"&]
[s3;%- &]
[s4;%- &]
[s5;:FitFileName`(String`,int`):%- [_^String^ String]_[* FitFileName]([@(0.0.255) const]_[_^String^ S
tring]_[*@3 fileName], [@(0.0.255) int]_[*@3 len])&]
[s2; Fits String [%-*@3 fileName] length until [%-*@3 len] removing just 
intermediate folder names replacing them with `"...`".&]
[s3; &]
[s4; &]
[s5;:IsPunctuation`(wchar`):%- [@(0.0.255) bool]_[* IsPunctuation]([_^wchar^ wchar]_[*@3 c])&]
[s2; Returns true if [%-*@3 c ]is a punctuation character.&]
[s3;%- &]
[s4;%- &]
[s5;:Replace`(String`,String`,String`):%- [_^String^ String]_[* Replace]([_^String^ String]_
[*@3 str], [_^String^ String]_[*@3 find], [_^String^ String]_[*@3 replace])&]
[s0;l288; Replaces in [%-*@3 str] substring [%-*@3 find] with [%-*@3 replace] 
string for all times [%-*@3 find] string appears.&]
[s3; &]
[s4;%- &]
[s5;:Replace`(String`,char`,char`):%- [_^String^ String]_[* Replace]([_^String^ String]_[*@3 s
tr], [@(0.0.255) char]_[*@3 find], [@(0.0.255) char]_[*@3 replace])&]
[s2; Replaces in [%-*@3 str] char [%-*@3 find] with [%-*@3 replace] char 
for all times [%-*@3 find] char appears.&]
[s3; &]
[s0; &]
[ {{10000@1 [s0; [* Special folders]]}}&]
[s4; &]
[s5;:GetTempFolder`(`):%- [_^String^ String]_[* GetTempFolder]()&]
[s2; Gets the default temp files folder path.&]
[s3;%- &]
[s0; &]
[ {{10000@1 [s0; [* Math functions]]}}&]
[s4; &]
[s5;:Sign`(T`):%- [@(0.0.255) template]_<[@(0.0.255) class]_[*@4 T]>_[@(0.0.255) int]_[* Sign](
[*@4 T]_[*@3 a])&]
[s2;%- [%% Returns the sign of ][*@3 a:]&]
[s2;i150;O0; `+1 if [%-*@3 a]. is positive&]
[s2;i150;O0; 0 if [%-*@3 a] is 0&]
[s2;i150;O0; `-1 if [%-*@3 a] is negative.&]
[s3; &]
[s4;%- &]
[s5;:Average`(T`,T`):%- [@(0.0.255) template]_<[@(0.0.255) class]_[*@4 T]>_[*@4 T]_[* Average](
[*@4 T]_[*@3 a], [*@4 T]_[*@3 b])&]
[s2; Returns the average of [%-*@3 a] and [%-*@3 b].&]
[s3; &]
[s4;%- &]
[s5;:Average`(T`,T`,T`):%- [@(0.0.255) template]_<[@(0.0.255) class]_[*@4 T]>_[*@4 T]_[* Averag
e]([*@4 T]_[*@3 a], [*@4 T]_[*@3 b], [*@4 T]_[*@3 c])&]
[s2; Returns the average of [%-*@3 a], [%-*@3 b] and [%-*@3 c].&]
[s3; &]
[s4;%- &]
[s5;:Average`(T`,T`,T`,T`):%- [@(0.0.255) template]_<[@(0.0.255) class]_[*@4 T]>_[*@4 T]_[* Ave
rage]([*@4 T]_[*@3 a], [*@4 T]_[*@3 b], [*@4 T]_[*@3 c], [*@4 T]_[*@3 d])&]
[s2; Returns the average of [%-*@3 a], [%-*@3 b], [%-*@3 c] and [%-*@3 d].&]
[s3; &]
[s4;%- &]
[s5;:pow2`(T`):%- [@(0.0.255) template]_<[@(0.0.255) class]_[*@4 T]>_[*@4 T]_[* pow2]([*@4 T]_[*@3 a
])&]
[s2; Raises [%-*@3 a] to 2. Similar to sqr().&]
[s3; &]
[s4;%- &]
[s5;:pow3`(T`):%- [@(0.0.255) template]_<[@(0.0.255) class]_[*@4 T]>_[*@4 T]_[* pow3]([*@4 T]_[*@3 a
])&]
[s2; Raises [%-*@3 a] to 3.&]
[s3; &]
[s4;%- &]
[s5;:pow4`(T`):%- [@(0.0.255) template]_<[@(0.0.255) class]_[*@4 T]>_[*@4 T]_[* pow4]([*@4 T]_[*@3 a
])&]
[s2; Raises [%-*@3 a] to 4.&]
[s3; &]
[s4;%- &]
[s5;:Between`(const T`&`,const T`&`,const T`&`):%- [@(0.0.255) template]_<[@(0.0.255) cla
ss]_[*@4 T]>_[@(0.0.255) bool]_[* Between]([@(0.0.255) const]_[*@4 T][@(0.0.255) `&]_[*@3 val],
 [@(0.0.255) const]_[*@4 T][@(0.0.255) `&]_[*@3 min], [@(0.0.255) const]_[*@4 T][@(0.0.255) `&]_
[*@3 max])&]
[s2; Returns true if [%-*@3 val] is between [%-*@3 min] and [%-*@3 max].&]
[s3; &]
[s4;%- &]
[s5;:AngleAdd360`(T`,T`):%- [@(0.0.255) template]_<[@(0.0.255) class]_[*@4 T]>_[*@4 T]_[* Angle
Add360]([*@4 T]_[*@3 ang], [*@4 T]_[*@3 val])&]
[s2; Adds [%-*@3 val] to [%-*@3 ang] taking care that result is between 
0 and 360º.&]
[s3; &]
[s4;%- &]
[s5;:Distance`(const T`&`,const T`&`,const T`&`,const T`&`):%- [@(0.0.255) template]_<[@(0.0.255) c
lass]_[*@4 T]>_[@(0.0.255) const]_[*@4 T]_[* Distance]([@(0.0.255) const]_[*@4 T][@(0.0.255) `&
]_[*@3 x1], [@(0.0.255) const]_[*@4 T][@(0.0.255) `&]_[*@3 y1], [@(0.0.255) const]_[*@4 T][@(0.0.255) `&
]_[*@3 x2], [@(0.0.255) const]_[*@4 T][@(0.0.255) `&]_[*@3 y2])&]
[s2; Returns the distance ([^http`:`/`/en`.wikipedia`.org`/wiki`/Euclidean`_distance^ e
uclidean]) between ([%-*@3 x1], [%-*@3 y1]) and ([%-*@3 x2], [%-*@3 y2]).&]
[s3; &]
[s4;%- &]
[s5;:Distance`(const Point`_`<T`>`&`,const Point`_`<T`>`&`):%- [@(0.0.255) template]_<[@(0.0.255) c
lass]_[*@4 T]>_[@(0.0.255) const]_[*@4 T]_[* Distance]([@(0.0.255) const]_[_^Point`_^ Point`_
]<[*@4 T]>`&_[*@3 p1], [@(0.0.255) const]_[_^Point`_^ Point`_]<[*@4 T]>`&_[*@3 p2])&]
[s2; Returns the distance ([^http`:`/`/en`.wikipedia`.org`/wiki`/Euclidean`_distance^ e
uclidean]) between [%-*@3 p1] and [%-*@3 p2].&]
[s3; &]
[s4;%- &]
[s5;:Distance`(const T`&`,const T`&`,const T`&`,const T`&`,const T`&`,const T`&`):%- [@(0.0.255) t
emplate]_<[@(0.0.255) class]_[*@4 T]>_[@(0.0.255) const]_[*@4 T]_[* Distance]([@(0.0.255) con
st]_[*@4 T][@(0.0.255) `&]_[*@3 x1], [@(0.0.255) const]_[*@4 T][@(0.0.255) `&]_[*@3 y1], 
[@(0.0.255) const]_[*@4 T][@(0.0.255) `&]_[*@3 z1], [@(0.0.255) const]_[*@4 T][@(0.0.255) `&]_[*@3 x
2], [@(0.0.255) const]_[*@4 T][@(0.0.255) `&]_[*@3 y2], [@(0.0.255) const]_[*@4 T][@(0.0.255) `&
]_[*@3 z2])&]
[s2; Returns the distance ([^http`:`/`/en`.wikipedia`.org`/wiki`/Euclidean`_distance^ e
uclidean]) between ([%-*@3 x1], [%-*@3 y1] [%-*@3 z1]), and ([%-*@3 x2], 
[%-*@3 y2], [%-*@3 z2]).&]
[s3; &]
[s4;%- &]
[s5;:Angle`(const T`&`,const T`&`,const T`&`,const T`&`):%- [@(0.0.255) template]_<[@(0.0.255) c
lass]_[*@4 T]>_[@(0.0.255) const]_[@(0.0.255) double]_[* Angle]([@(0.0.255) const]_[*@4 T][@(0.0.255) `&
]_[*@3 x1], [@(0.0.255) const]_[*@4 T][@(0.0.255) `&]_[*@3 y1], [@(0.0.255) const]_[*@4 T][@(0.0.255) `&
]_[*@3 x2], [@(0.0.255) const]_[*@4 T][@(0.0.255) `&]_[*@3 y2])&]
[s2; Returns the angle between ([%-*@3 x1], [%-*@3 y1]) and ([%-*@3 x2], 
[%-*@3 y2]).&]
[s3; &]
[s4;%- &]
[s5;:Angle`(const Point`_`<T`>`&`,const Point`_`<T`>`&`):%- [@(0.0.255) template]_<[@(0.0.255) c
lass]_[*@4 T]>_[@(0.0.255) const]_[@(0.0.255) double]_[* Angle]([@(0.0.255) const]_[_^Point`_^ P
oint`_]<[*@4 T]>`&_[*@3 p1], [@(0.0.255) const]_[_^Point`_^ Point`_]<[*@4 T]>`&_[*@3 p2])&]
[s2; Return the angle between [%-*@3 p1] and [%-*@3 p2].&]
[s3; &]
[s4; &]
[s5;:Odd`(int`):%- [@(0.0.255) bool]_[* Odd]([@(0.0.255) int]_[*@3 val])&]
[s2; Returns true if [%-*@3 val ]is odd.&]
[s3; &]
[s4;%- &]
[s5;:Even`(int`):%- [@(0.0.255) bool]_[* Even]([@(0.0.255) int]_[*@3 val])&]
[s2; Returns true if [%-*@3 val ]is even.&]
[s3; &]
[s4;%- &]
[s5;:RoundEven`(int`):%- [@(0.0.255) int]_[* RoundEven]([@(0.0.255) int]_[*@3 val])&]
[s2; Returns [%-*@3 val ]rounded to the upper even number or itself 
if it is even.&]
[s3; &]
[s4;%- &]
[s5;:ToRad`(double`):%- [@(0.0.255) double]_[* ToRad]([@(0.0.255) double]_[*@3 angle])&]
[s2; Returns [%-*@3 angle ]in degrees converted to radians.&]
[s3; &]
[s4; &]
[s5;:ToDeg`(double`):%- [@(0.0.255) double]_[* ToDeg]([@(0.0.255) double]_[*@3 angle])&]
[s0;l288; Returns [%-*@3 angle ]in radians converted to degrees.&]
[s3; &]
[ {{10000@1 [s0; [* Graphical functions]]}}&]
[s4;%- &]
[s5;:FitInFrame`(const Size`_`<T`>`&`,const Size`_`<T`>`&`):%- [@(0.0.255) template]_<[@(0.0.255) c
lass]_[*@4 T]>_[_^Rect`_^ Rect`_]<[*@4 T]>_[* FitInFrame]([@(0.0.255) const]_[_^Size`_^ Size`_
]<[*@4 T]>_`&[*@3 frame], [@(0.0.255) const]_[_^Size`_^ Size`_]<[*@4 T]>_`&[*@3 object])&]
[s2; Returns the rectangle in a Rect to fit inside [%-*@3 frame] the 
[%-*@3 object ]maintaining the aspect ratio.&]
[s0; &]
[s0;= 
@@image:3268&2037
����Ɓ������������콇�������������������������Ȁ���������������驪�
���׮���¤�����ܥ�ȓ�͚���Ҥɓ��ٚ��Ҥɓ�͚��Ҥ�ɓ�͚���Ҥɓ�͚���Ҥɓ��͚��Ҥ�
ɓ�͚��ҥ�ɓ�͚���Ҥɓ��ٚ��Ҥɓ�͚��Ҥ�ɓ�͚���Ҥɓ�͚���Ҥɓ��͚��Ҥ�ɓ�͚���
��ɓ�͚���Ҥɓ��ٚ��Ҥɓ�͚��Ҥ��������������������Ҥɓ����������������ٚ������
���퉈�ҍ����㿟��������ͧ�����ף߽�����������Ҥɓ�퇷����Ư����������Ͼ׏
��������ʓ�͚�������Ի���ۼ��ϟ����˷���ǟ������ɓ����������ș�������ǐ�͚�
�鿶߳����������њ��Ҥ��ؤ��ɓ���ڳ���������נ͹���Ҵ���½�륵�������ޟ��ӧ�ǁ
������㥒ɓ�͚���Ҥɓ�͚���Ҥɓ��͚��Ҥ�ɓ�͚���դɓ�����͚���Ϛ܏�͚����޲Ɉ
��Ҥɓ�����ȓ�͚���̲���Ҥ�䒑�Ҥɓ��������͚��鯙䄴�Ҥ��ɤ���ɓ���ː���͚��
��޲Ɉ�ҝ�ɓ�����ȓ�͚���̲���뤽䒑Ҥ�ɓ��������͚���䄴�Ҥ���ɤ��ɉ����˦�
��͚���޲�Ɉ�Ҥ�Ǔ����ȓ��͚��̲���Ҥ��䒑Ҥɓ���������͚�鯙䙄��Ҥ���ɤ�����
缬���ǂ�׿赬����������������������ӻ�����ɑ�ٍʎ������۔����´ٿ����������㔫
���ݼ�ꙙ�����������ۋ��ڈ���᱗��巃�������㭑���է������ڶ���މ��ك�ы��
�����ٴ��׏�������������髗����վ����薼��ů�ְ���犏�Ԅ���ս�����Ի��
���ۏ��Є���������������Ŀ�����������������������߉��������������ò����������
��܆��׳��睰���̡���쳺����܎�������ۋ������ڼ��Ñ����ݩ�����������������䏂
�窎��ᙳ���͹�����������Ë�������Ǎʡ���ɇ��ԕ������㤷����������՚������
�߳�Ƽ������������������ຌ�ǳ����������쎚���κۦ݌��Ȉ��ӡ�ʍ�衚�ՙѠ�
���ܩ��ۛ��֌�ò�ۑ�����В˃�����т���㘳ŀ������܆�����֎�℅��ֆά��솏�ޱ�
��Ӯ����������׿��������ӕ�����ꨳ���̨����¤���䉞�䢴����񣕧���Ϧ�����փ�
��Ƅ�����������ܿ�������ဟ���ꘈ���������ӹ�����۝ؿ��츒�䦖��������Ą��Ǹ�
���򧤗�ъ򳔈��ل�ÀА���ŉ���Ў������盾���߁��ר��譝�����������������ش��
�ţ�������āԐ�ǉ��������������錣���������Ӂ����栈Я���������ː��������
���Ǚ����툼��ȉ����⍑�����؇�����ܕ�Ȭ��ߡ��챹��Ԍ��Ԋ�������ϔ�����옉��
��е���Τ������Ѕ�������б�����������ԭզ���Ŋ����������Ɛ��������Ī�����
������Ƨ������܁���݈�������׎��Ƿ�Ù������Ԧ껽���񂈿�̂��ޢ�蹛�Ȣ��ᅥ�
�����ҟ�ތ�����殊Ѐ���ô�������ר�荪Ø�����ڿݤ����������������Ƭ���
������т����������ŋ�����ҡ���������·ﱹ��Ӑ����������✿�Ȁː��؜����˦����ڈ�
 ������ņ�ݗ�������٦�����Ȝ��������Ьј����������䡐��Ϩ���������´�Դ���
���£�����∺�ٓ�������������ե�⢐�ϊÃ���ޏ��¬�ǂ�����׈��܀�͇����������
����������ۏ������������Ǌ��ʶ��ơå���������������譿����ä���؊����ݸ����ʒ��
�������������������������ڴ��ϲ���پ���Г�������ℕ���������Ⴥ��������ߗ�˻��
Ͳ�ۄ����ڐ�Ɉ��������ൃ�Î성�᠘���������И��ꗙ�������Ŗ�Ȉ������鴬��ƶ
���Ш�쓃�������������ʱӍ괰�؉����������饔�ԥ�����ì�눈�����քޮ����ޔ����
�������𤈠�䑄��������𒫁�������������������������������኉�痻���݁Ԟ��Ε�
�ط�������ʦ���������������̘䠅�Ŗ飴ꉐπ�葏��⋖��������ɷ����缭������σ��
�����ھ��߿����擘늬��ڃ�Ԑ������深��������������⑪��ހ���ϓ��ñ�����δ踠
�ƅ�������ϗ�����Ƶ�������Ƕ�ȋ�����ճ�Ҙ����������������ي���ʀ���������늫��
���ʰ���򣋡������������������̣�懖Ā��Ҁ�̾����Ź����������������ʾ���
���������������߿򌐀���������Փ۔����ڷ�������ע������Д��Ƅ�������᱔�Ǖ�ۋ
������������܆�������㒯���׷����՘�馈�����������􀮜�����厃�ǚ�쓣������֤�
���Ģ��������ה⑈���������������聶��Ž������ΰ�ǧ��߉����񶵏������ʒ������¡
���쭈����Ȃ��������ش���������̡��������텮���̈Ű�Ç�⻴�����΁���Ֆ�܁����
����ú������������ፔ�������ݕ���߿������˷߿���������億��ړ����뚁祎������
Ё������֝��挝���꺰������髦���������޾����������̠���ߖ򼭳����߈Ì˛�޵����
����米����������腝ܑ��И�׀�������ɓ�қĊ䈨֝�������玐���Ӳ��������
�ا�⊢��ɗŔеɶ�܍͓��ܣ��������崡ƨ����ֈ����槩�������������Ѐ����Ö����
��̅������ù�˽����Ⲑ���箢ل�����������ϋ������ó����þ���۷�߾���������
������舷�߆�������������ߣ���ǃ约Ɛ�����������ڦ����Ǝ������Э�ݖޘѯ�ߩ�
��얱����օф���Ō��ٍ�����Ȋ������������������������������������や���������
����ܠ��ɸ����ҳ�����������ؤ�ާɵ�Ēժ�����������Ʒ��������̑��Ɓ����Ռ�
����������ȡ���������ņ����َ��Ġ���������聱�������載��Ɯ��ϣ��̻ί��ٺ�����
���������������Ҍ�����̈�����ϗ�������ޏ�����������������������Ɲ������ּ����
��������������ô�����ؔ�������������������������������������潭���Ə����
���൚�����籱��ǯ���ъ�Լ͞���΋ȁ���ʓ���Ě����ƀτ�ʮ�Å�������钁�͓���
�Ǌ������˪�������������Ş�������ɜ�����鍀����٠������酟�¬���������������
��������ί���ٱ�י����ȸ����ư񕱡����������Ή�����﷏߯������猁������
��������Ɉװ��޼��ڇ�г∾�������������̪����첺Ƴ밶�������Ź��������Ѹ������
�������Ýϥ�������㲯�ŏ���ր����������ּ���ݿ��������ꂄ�ፌ�����������ß
���ȣ�����贐Ζ���п���������㖨۪����������ꩠ��������􋵦�Þ����ձ�������翷
�����د��ã�ж��ܘ��耜����˜���������Ē���ݩ��̺���ԅ������Ǘ����Ӱ�����
��߅���ʖ������񷞊�����Ō����������ܙ���ҥ������ɝ���������������ބ���ƕ�
�ꃌ����ڰ��������ϰ�����؜���ߴ�����ʟ������������������������փ�����ҡ���
��������͛����杅��ؤ�������⮸����Ξ繢�������䰈��Ǹ������啣�ʬ���������
�畏����Гʪ���µ�������������ոĊʌ�����čŵ����р����ܫ�ց���󺈯���汚�Գ�
�����딘��������������㠍��Ӝ���ё���󒥊������������������ξΕ������÷���
�Г�𰐵���̕���������������Ɉ������������������������ⁱ�׍а�����磁ǥȻ
���Δ����쐩����ڛ�܈���ѳ����Ʃ�񉖋������������������ֺ������ƭ����������ۋ
���݋�������û�����ߜƨ�΢�������봍�ޡڒˇ���ō����๟�����絯�������ڳ�ʙ�
�¡Äզ��լ������ܘ���˦�������嵄���ς���ޠ�ڹ�䨡����ݛ������␴��琨����ь�
���䠢�ޚ����������⧫��ӳʑ��ɇ������Ȁ�����Ή���������꒎ࣼ�������������
ޟ�������������ʀ�����������ȁ������ڥ�����²�������Ġ�ѓ��ѓ�����۫
�谥��������򡒛��������Ò���Ӹʽ�����Ϝ慳���������Û�����ַ������䁱�ž�����
����󐦔�ư�����˔��Ђ�逎����������τ��ŋ̅Κ�����牋��䁁�������ꕅ���陕���
����߮�𘝓�Ӎ椥�آ���������à�����օ����Ӥ������������ꁈ�ۀ�ɹ��ۨ����Ѓ��
����А��Ň�������܅���ĵũɝ��������������ϲ�򀽵�Ա���扒��ΰ��ƌ������������
�������������ʕ��������Ɔ��ڣ����Խ������㠙�阾ȇ��È��ڳ�󁆝���������؉���
������묂����ݖ�̫�Ͳҗ������؅��������������œ��Ȉ����ٹʟ�؊�耤�����蟀¨���
���Ł��������������ǂ����ɓ�蝴���Ҥث�������ɺ�������䷥������ִؕ�����������
������ʹ�������Ǩ��������㚻騺���ү����񵡚��������������ݢ�����ɔϸ󻢹��
�譿��������ϰ����������ҟ�����ɝ��������ʝ�����ȕ�Ҥ���倷���š��Ѐ��ԋ�
��ڰ������������������������ꀂ�񡹃���¼���ֹۭ��ݥ���Έޜɋԕ��߲ψԝ������
��ࢹㄎ��߰����������������㱜�������á�񛿪���մƔҡЊ������ܤ�Ġ��ֺ���
�ٱ���������鵊��֣��󚉻�������븣�Ľ�딎�����١�������������֦��ㅉ����������
���������������ߋ�Ƴ�����㧄���ܕ�����ň�����ݦ������آ��������������
����ģ؄�炇���㱘�´Б����⭌�ܛ�����ʧ��ԥꦃ���ѱ������압�Ǹ������̒Ѻ�
�����я����཯�����ѹ���̈́�����쯀����Ԋ������đ������ʝ������Ǉ���ʑ����
�ڨ��Ѐ�����ف�����ʅ����������㕊���������ׂ㇒�����߸����������惥���خ��
���ۤ����������������Ʈ����􋁍�������ܱ�Ǹ��Ɯ֢���������������ܽҙ������
���ޘ��������Ƙ��ۑ�푂�����������ԩ���Ѧϐ����ߦ���������Μ������ԋ�����ߊ�
������Љ∻���ۥ�髻���⤉��������Ȱ������ę應���������唉䔒���������
�ȥ髎�����ĺ����������̲����谤�蠆ֹ㈼���Ն���Ĳ���򬦮���Аȹǧ���������⣱
ϫ�׸���ޙ������컼������٦��č����ǚ�Щ�Δ����ӫ����������Ɉ���Ӂ��⑦�Ћ�����
�ʆ�ۑ�Ⴤ������Ú��������������ܖ��⺰�������ߋ��ж�맘Ԛ����ձ����˨���좹
�Ӫ�򪜼Λ��Ɯ��Ϊ��������������ڠ�����������ݧ���ᶀ���������Ť���������銬
�Ҍ������Ď��������Ɖޏ������ݟ��޷������޸����Ņɫ���������������������
��΀��Ѿ�괟��������؋��߰�ϒ�����������丹���с���݂�惭��������΃�఩�а�ܠ��
������ݩ�����ݙ�������Ј������Є����ر����тϷ䫔���䯸Ĩ�󦱝��ϲ�ᵼ����ѭ
�ڱ����򔑦£�񰘇ψ�����ɤϜ�������Ȼ�貀�ݼɞߦ���������ğ���׋���������
����탅�����������ߩ������Ȱ�܈�������Η���֦��������������ꃨ�̥ࡀ������蛑�
����쫢�จ޳�������ڧ�������⟜�����ޥ����ʟ⫾�������穟�ײ���ݸ�ʢ����ұѠ��
������������������������۾�����Ç���ϱ���܏��ۃ�������������˸��уǌ�ȳ��������
̠�駌��ʂ������������ڍ������������씴����������损���ۋ����雥�����������
��������ॳ���������������񀓞�ͥ��������ǡ��¯������������ۧ������˷������
������Ֆ�����������Ĉ���ϑ�����������奥�����쪯������벉���ھ����ڥØ��
���ĺď�娾����ĹǤ�ǳ���ޅ��ʱ��ꎷޮ����ߗ�����������֝�����ԥ��
�����α����ϻ��ܣ�������鞷��Ȟ�����ň�����������¦���񅚏��£���ʖ������΢
���Ё������ֹ��������؄����߱��҅�����Ȣ������І���Ӥ�Ϡ���픹������§����
���ڥ�����ó̐���ء���������Ɵ����������蜑�����임������ݑ���ۑܼ�윞������
�̆����١�����ʒ�����̞�������Ȭ����������Ό������ěѼ�Ԫ����Հ��Ő�����
��������������䮟�߳��������������������գ������ü���������̻������ځ��į
����Ĉ��Ӹð����ı������������ж�⁢�胏���������ʅ�������ӓ������������
����������đ����������Ўʜ����ۈ��������Ԯ��ԉ������׍���͓�Є�Ǿ�̓�����
��������������ھ������щ��ꏎ��������َæ������ꌂ�������������ڿ�������֕
����ٖ��ő�ʻ���݅�������������޷�ڏ���������������ء���ޱ��濡��ʜʙ��������
��ө��Ǥ��������л���ˇ���������ɣ������̇�����ٗ�����ꉸ��؊���ʴ͛���Բ���
�߿��γ���ز���Լ���Ѭ�᭓���������й����������������ʩ���ӿ���祠�耊�逧���
�����������ض���������������Ŷ�����黧������������������Ϭ���Ց޹������
������ŕ����ꂚ��������Չ�����򌶟����û䣽�ޟ���������������잱⏎�ש�������
�����П�������Ƙ��˚劉�����Ͳ�����������գ���Ӏ�����쀏���탹�����㌉���
����������溑��ऒ�����ѧՊ��ā��ߕ�����ӧ���Σ���ʴ���ű��楊�������ƃ�օ
������������ያދ��������˝����������ﺢ����͵�춭�����ז�禦����ǆ���������
�͖���à����������П������������������ؿ���Ś������������������������������
�����������Ԟ������������ǋ�����������͏���Р�����ᅇɀ�����ʼ�⺁Ǔۑٽ񈠐�ಎ
�ݞ���������Ӣ򌡊��㶉����γ�����ѡŉϣ�������㞚𗀈�ǐ٫�������㌵�����
׽�Ĉ�������ĝ�Ő���ϡ��،֩�ӳ�셀ؤ��������ͨ�ߑ��ѷ��Ӗ啂������ᨕ�ߚ��
���Ķ���潓������������а���Ի���趴�ښ�������ӻ��ˋ�ֻ�������䎜�Ǝ��ذ�߹��
�ޘ����߶ٲ�َ���������ƭ������Õϵ���ɤ�΄�՜«άܬ����õ��̩��ĥ��Ш��擊�
������������ߤ�������������͏�К����¦�؈��ᔄ�����㾣�����������ɩ�٤ː�
�����Ԯ��ܯđܾ��������ܓ똺�۰ת������񐐁������ϸ������������������џ䚯��
������ؤ���麤�ԩ�ʍ��䲝О��Ҍ����ܓ���������Ũ����ء�ʋӂí��ᓰ饮ɧ��
���������������֧��Ǉ������ݝ���������������剛���������������������ڼ�û�
�в����ڣ�똜������ﹶ�����������ց������ԭ���ﬣ��ь������ޑ����ׯ�᭑������
���è�����������؞��ʈ�������ډ�贪���Ʌ�ꂄ���š�ؼ�������ެ�ӃӍ����遅��̔
�����娵�ԍ����癀���ڇ���䉗չ���Ǝ�������������Ɩ�ݞ�߂����ᚱ��������
Б��ӝ�������������裝����͉�Ģ���⣌��Ç�������������Ɛ�������ڡ�������ɡ�
������������̓��ͧ�����������������У�ʷ������뾵������������������������ͳ
���˒þ���丸���������֛ˊ�������˛����⹉��Ԛ���Á�ǂ����υ���������ר�ų
����ْ�������ǁ�Ĭ���灥�����ϖ�ˈ�頁�񻵷����͂��㻳����ڍ̧��؂����������
ͺ���������ʀ�ᱼ����캣��ѷ���ۇ�������ɉ�������������єی��ś�˞����Ã���
���ݖ��������½�����愄������ܙ٧����ܕ����㠉�����������ا���Ç������������
�Êܥ����Ԫ�͑���Č�ٔ�ӈ�������ΰ�ȏ��ذ�ϭ��͌�����������㗶֗��������Ż�
聝������������ձ�֟����������ʹ�����߯�����ڴ������้ڊ������ކ�������
������������ȇ���鐜�����Ѽ�Ǥ���ܳ�ڴ������߳������ς�Ȉ������џ��̻܋��
�����ü��������������휃��ɋ������������������ĵ�����ם���ܡ֬�Һ�껆�Źϒʈ�
㡤������㏼ά����������������Ё���Ԛ�����������ĥ���߸�ސ�����՞��ҖӴ�
�������א��֋�������¥����ۚ�Ǝ���鈛��������������������ϗ��Ѥ�����ԏ�����՟
��������ߗ������ê�í���׺���������������Ƞ�����������Ϻ����ɂď̌��������䪆��
�Ơ�������󬍚���㋇��β���܌���өײ������Ķ����������ܖ���������������߃�����
��ץ���Ք��Ԃ����Ӎ��������ƃ����ג�͟����ԁ���������������֬������გ������
���͚�������Ĕ���Ǎ������ϙ��������������Ê���������������대�⨔À��ޑ�؅
�����������������È�Ѥ��������Ý�ܼ�������̓����������ٮ�㧮���������������ʏ�
������������������䯆������������Ł��������������٧ڢ���������ã�˛�Ė�����
�ץ��р��������������������������ą�����ϊ���������������������љ������ш�
��ʷ��֊������������ۀ��������ȧ��ʙ��������Δ逑���ɂ�ֈ��������嵺�����
����ʍœˢÆǑ�і�È��ԁ���������ɓ�܂��¸������������؉�Ѹ�����������޻�ċ�Č�
�����������γ��������̇���������պ������ރ�������퍕��˟������������˿������
������ʮ�������κ�����ϓ��Κ��ډˍ����������������������̯ퟛ�ډ��ɩ���茵����
������ء�������Ն͞ާ������굿������ڏ�������͏�ٶ��������ޑ�����ӽ�������
�ؗ���ۡ��ɜ�������̼��Õ��§����;���踢�Ŧ����ϋ˒�ϗ����ġ�����̨絩�৾�
�����􈑟ݫ������������ҍ����¡������ؚ��獄̮����Ѡ�ʉ�Ā�����儠���қ�ڎ���
��������ͺ����𾹰���ա�����홭��������������۟�����������������������鄡�
����柤������������������Ǟ������Ҏ������Ċ�󉝞���ە��ݗ�������٤�⥩�����
��ʯꎜ����ί�����������؟������Ś桧�������զ��������������������Ɏ�ݳ���̯
�֪ܨ����������ޓ�܏ƛ����������������㙦ٟ֥�����������솢������ܑɝ��ώ�ԃ�
����蹸�鏞���뛞������Ќ��������窔�֧�������������Ԋ��������І�݃�ر�
����Ƨߦ���������������ƪ��������ſ�����ǿ��������������������⑎����ʙ
�����ډÁ���������Ù�����й�׷������Ë���៥����͈�����ш蕤���Ɉڽ�������§����
��Υ݃½���������џ�������ü�������ϸ��ь��щړ�����������љ�������ɝ��
�����Ν����ԩ��֒������ҟ����༐��̝�̤����缿����œ���贉�����ɋ��ć�鮔�͗�
������������Ǉ����М�¿����ᄴ���������ʣ���񦗝���������Ѓ�º��¦褲�����������
���ַ��Ð߼���ຐڸ�����ַ����篗ק�Ƨ���Ɔ��������ݓ���������������ѯ����
�����߷�ו����������ƪ�ـ�����������ю�ʑ�ݐ�郰�������������㖟��ʮ���Ψ��娔
����ꤱ���󦁅⚂�в�������Ѐ�����䁁��𘾃��������ߠ��������֤��ஆ���ᩛ
����˳�����ʳה��ը���Ã�ξ�������δ�������ͷ��ځͷ����Ę�������Ը�������ܡ��
������Չ����������ǎ�ץ��緁���������������е���ء�ŀ�����­����ĺ�ݤ���Ď���
�����۾�戵�����������������Õ���������������������������������ԵԷ����הÄ
������ӯ��������՟�Օ��ѭ�����������Λ��溪溫����ճ��鿮�龶���������ʏ����
���П��������Ý������㕐���ٛ�����������ͅ����Á��������������������ߠ������
������������¬»���󍒧��ȑ��������ǁ�鞨���谂ƹ������ĕ��Ƅ���ϳ����
ɇȡ��ȇ��ᵏ����̰�����蓅����ǳ������������֙������բ��Ȉ�ܧ�؈����������̒
�欃�Ƒ��И�̈ϙ�֙��������䎫�������ۅ����������������ਿ����������Є��ﲴ��
�����ꋛ���֖�������������С���������ҡ�����Ĵ�ࢳ⦳���ݻ�ߑ���ܙ�޲ۚ�ٷ��
������ς���骯���і�������ѐ�������Ʌ����Ć��耠��ˉ������ɢ���������������
���۟����������Ѩ�������������Ǥ�������ʰ�������ɺ���Ʌܦ������ѯ��������ݺ�����
�͘�����聜�������ݺǌ���������ů�����̒���Ӣ�ÈЂ��������它���������������
�ʩ����������ؕ�����ϛ������ɮ����������ǚ�Ą���������������ۇ��������������߰
�����������ֵ�뛹��ۻ�����������Ӫ������籡���ŧ��������ʢ��������٨��۾������
�о�Ѻ��������̟��̍�������Ǩ�ΟƯ��������ϲ���À��������������Ģ폔ʪ��
��������˖�������م����䯫����������߱���ǖ����͐���������Ө������ï��퓦���
ޯ������Υ����ņ�˕����������������Ǥ��ߍƓ��������頨Ľ��ɹ���ͩ�����������
����ɽ�ۙ�ՠ����ȴ����������Ԙ����죠������۔�ڹ��֎����Ƨ��ǝ�������Ր����
������Ň������������������ӑ�ٿ��͛��������������־���ހ���ǟ�����������ҷ�
����۫��ƪ������ɥ���ߵ�����ߦ���־�ٓ��߿�ӽ�㬘ҕΘ�����և��͓�����ߵ齭���
����������텹�ř���횟�Ϡ����碈�����Ԓ�����������Ρ�������ì���������������
�ֺ煵��̍˾������������җ�㳻��ۼ����ܔѿ����ͻ������ȳ��ߘ����޲Ǘ����؊��
������Ǭ�����򫴐��۽����ħ���������ۼ���ޣ��ꗼ����犏�������֣�����ڕ�����ۏ
������ЈѻՏ����򠹼��������꣨������������ɧ������ߵ���ۏ�������۴�ٝ����ɫ
�������ݘ����ٕ؛֢û��ܣ�Ư���Û�����¾�η����܎���޿ۓ��ǭ���͊�����󩶫����
���ŝ����䷵�ӎ�Մ������������ޥ�১��ȧ����ţ�����򂎐�����˼��������
������������Ӏ��������꣼曄ޞ�ˊ����Ǣ����Ӕ�崈�������������������������
������Ќ��������������������Ĵ���ꁐ��ʤ��������坠�Ђ������̙쯘�֯��������
��Λ�挕�ː�����Ι�����Ƽ������ק�؟��朸�������ᬊ��������Ѕ����߾���Ъ�公
����̣���������І�ꈾ��ų����ߤ��������˨�����������ϟ������κ���π�������̩��
����������淂�ض����������������܏�٣�ǅ�������������݂�ʿ�Բ���������»볡���
���������������̠�萁����Ý����ق������ݟ����������̜ܮ�ß����㢜𳥴��������
���������Ò׺���������������������������������𻰚�������뛧��أךព���������
�ʼ����ਢ�Ʌ����ج����⛭՝П������ަ����ʯ�����Ѡ�ҁ��᤟���������Ѣ��ꅋ�
ȡ��ظ���׾Ѵ������嶲غ��ݞ�򠁻����᫱�ۧɳ�ż���؏���ׇ�������ǳ���������Х
����׏ߣ��Ł����̀���׍��������؁������۫�͕�����Ά�ҡ����������څ�������
תՁ���ۓ��������ȶ��������������������������������Ǡ�����ˉ���ٓ겉�������
����޸਌�������ɧ��������������ο����ȱ�����������Ö�璗��Є��������ݏ��Ĝ�����
��ν߰�܉Ð�၆������������ғښѹ�ӎ��������؆�讍��п����Ơ�ᳲ�������򈇒�
��������������������ʝ��Ԑ�����������𲨡̐���������ǽ����킲��������͝��
ɽ����ѯ������ׅʄ������®������⒘�䠱��ë��������ȝ���������������������
���飻���ս���ӻ�����ؑ��ޢ�����������������٪㘅��윷��퇲��������������ܡ�
������ՠ���������֓�ՙ���¦���ǹ�轘ڶ�������������Ե�����֙�������ݝ���
�ԯ������釴�׭�۪������ƶ����Ζ�������������Ő�ӆ�����ͩ����������ܯ��Ƕ
ٱ�距����ؙ�����������ȧɋ�殂����������֞��鰡������ԁ����Ѐ����������
��ˊ�����й굿�Ҷ��ڨ���Є��������Û�������������Ӳ��������΄��ߚ����������
�Ǐ�ϣ����ĝ�����������܋�򕬑�������������ߊ��ƶ�����ǉ���鏀����ƌ���в��
������ه�ӻш��匬ᤐ�������ź�����������أ����������������������������������
���˛�����٦��ⓧ������Ԃ���ﬧ��ݷ���ӄ��Φ��ƍ�����˪������������܍������
��ְ��߀���������Њ���Ä���������廼�ފ��׮��������������������對���ڴ�����
妢�����ê����ڎ��������������ϸ�ί�Ά���疆Ǫƺ�����ú����ӧ����Ђ�儏�ć��
����Է���Դח�Ֆɵ����뺎��Ǝ����Đ�抝�����Ҿ��������팥���б��䶋���ݙ��ܝ���
��Ι�ƺ���㻛�����ɠ抧Έ�焈ˏ�ԁ����Є�������ֽ���⾥��٫��թ���ɥÐ���٣�ô�
������į�Љ˔�ߧ�����漝ȋ��̓���Û����ǌ����ы���������ȥ�������Ӻ�ѭ�����܈�
�퇗�㛎Ԥ�¯���ӿ�����߽��������������������ħ���ӻ������������Ц�����将�����
�������������񚲄�Ǔ��׆�͗���ߊ����������ѫ�ڱ�ߕ��Ȩ�������ۇ̱����ڼ�
��ɭЋ���������գ�����ϙ�ɩ�����������С�������������������Ԝ�����إ���ҵ����
����������ͱ�Ԥ������Ɲҗ������܃�����������ܡ�������������ڴ�ǁ�ܑ��ҝ�����
��˕޸������Ι����������ŵ�����������ѿ�������������������؁��Ч������������
��������׵�������������È���˥����ː�������������՘�⤽�����������ݶ��я������
⽍�������ݽ�ѩ߆����鍠Ȯ��ԩ�����������������օ�����߀拍��ć���Ț��Ĉ�����Ŭ
�Ȋݦ���Š����ߤ��������ȵ�쑑�����Ȣ�������������À�������������묗���ݢ֖�͡
�ؙ��������׏���ٙ��ν�������������ཏ�ء�ع����ɝ��܃��ɝ��Ƒ���ɢ��������
�戱��̸㈁汿������ǰ�����������Ή����������ɒ���������٣����ҧ��������۷�Ճ�
�ý�셨����������͏������ś��մ��Ƃ��眼���ɷ�����䰬����ߨۜ�����ƭ�櫗�ʆ����
�ܗ���������������ׂ鞿���ۍ���������ȑȒ�ڱ���Ә�ۇ������Žڔì��α���
���ވ����������򶏆�������������������ƶ������ū�������������������������
�����Ϻ�����끋��Ԍƴ�����ȇ����˷��������������Ǧ��������ۏ��볽����֒�����
�����ݍ������ͥ��ͥ����ך�����Ӳ��׵��Բ�ѹ���ۙ��ڶ�ۏ�Ǟ�������ސ���������
�����̺����������������������������Ԁ���נ������ȷ��������������ڗ�����Ò�
�����؊���婑�犊���ô����İ�ɏ���������煬�ᕾ������녥����������������
���ʭ��������������������ԈǄ۾ȁ������ȸ���Η�ߏ��ċ�������ް者������׬��
ܳ��͋���Ѭ��������������˜�����ޣق���������͏�����ԥ����������𧅔�ξ
�䅯ߧ��������Ċ������ټ��ݤ򀩠��������ά݈�̀�ᄸ�ᬝ����������ϒ��񗂢��
���Ȉ����ӱ�讨����ъ��Ѕ铪����ި���᎝ܡ�⨉�������氘��Ʒ����ݵ��͸�ڙ޶�
�ϭ�����������������������׏����������狰߸�뀴�����������ݭ���󗾁����򩮪���
���٧��׎����������ڛʛ��˚��몊��෕�������ņ�������������������������ȅ�����
�������͓����û����驹�����������Ԝ��ϊ������¹�����������ʓ�ݢ�լ�Ѓ赿
������ˁ�ݒ����������������׎�������Ҡ�������ݍ���½�����ᩀ��з���ӻ��ݨ܋��
����Ñ����������Ⲱ҅��䗲�坸�ع͞������������Ȅ�����ʴ����̈���ࠁᆊ�����ܖ
�������颍ݒڕ���׫�ɠ����Į������Ľ��Ύ���ѳ��ԩ�����鎨�����Ѷ�Ῥ��ƈ�̇Ǉ�
����������݊����є����ɋ֘⼝������м����������ӊ�򌨠�슃���������ϒ���
�񢉼���ކǴ�褊̍׽ʨ����ؖ�������������������ʜ�̦�ʁ�̬ᡮć�ګ�����̀�
����������灐������������Կ�ս�������������ꛛۖۚ�ښ��ٛ����ݝ�������ޟ�������
������������������덺��ۀ��������������������Å��׷���단�����먮�����������
������抿����ڪ���ח��������ߝ��譟鬞�믟��؝�׎���ݾ�������������������ݺ
��Ȼ�������̠����ϒ�����篖��ԥ������޾��������������Ԡ��߸�Ȑ�ڹ������ۮ���
��ޠ���Ǧ��覺�گÓ�ѩ����������Ї�������������������������Į������ㄘ��������
���쳠��������Ь������������߫Ք�������������������������и���ύ���辪��ܿ�����
������̦����������������伯�ǆ�Ԑ���߀�ӵ����ǓĔ������檚���������ׯ�������ڰ
����聕���������́��ေ�ߕ������������ʮ��������№֐��̗��ා��ȇ۩��׀
���ʣ�ǁ�����������������󌨀ı����σ��Ď����η����������������������ЂԂ����
���������������������������������޶���������������֩멇������������������駚�ⶦ
������ߋ�������������������������٧߫����򾾉���������������ۤ�좣켝�쬭���
���ؽ���Ą��Ժ�����ڥ������篮�𥉉���߮��и��Ə�˺������������������ڇ�����
���������Я�̀��񥰱�΁�����Ӂ������ظ�ɞ�������ǧ��߄���������Ɠ�������
���֗���ՠ���������������Ҹá˩���歷��É�������ц��ǎ����������ؗ����
ݛ���Þ�ч��������׺���������ʉ����ӝ��ѯ����������������ؙ��ࢣ����Ğ��
������ľЪ̳����������Һ�����䙿����۔똂׌�����⇔����ㄈ�Ը����ǁ�܉򳊕�ޣ��
���������ܼ���қ���ׄ�ɧ��݄�ī�����񔸬 ���������Μ��������ܗ��ᨔ���������
�������������߀���������������������������������������ϩ��뚝�ĝ�ꞙ���������
�����ݝ����������Ҭ�����ח�Օ�֝��ԕ�������㨛��������ִ֔ԗ���������������
����ӻ�Ͽ懲�ז������۴��Լю��Ә������Ǻ����仞�������������脩ͺ��֠�ǖ���
�ͮ�������������􍤹���Ո��������؜�����˜���ߵ������߆롺����������������Ҙ
����ع�����ඍ����Δ�����ޗ�Ъ�����×百���ү��������Ѭ͝����������͐
��������Ɨ�������х�ࢀ����������ￃ�����������������܏ⴸ��ڼ岙���׹����籬
�ܛߝĮ�������͏̱�κ�����Ժ�ǃ�����ќ�ډ���������՛����ƨ����؂��䁯��������
����Ĳ�ᣊ�����߂���̓�ɠ�����ӛ�҉��������Ĝ��换�ĥɋ���Ґ���Ɖ���݉�큚�
���������ӑ������������Ÿ������������쭮���������������߲����������������������
�霚잛餝�ꚝ윳�׍����������Æ���ә������������������������޿ۥ����������յ�
����������������ߡ������˿���������˾��ꀐ���������κ���ƍ������ӷ��̦��������
��������؟�������������������ۗ��˷������ш���ϧ�������ڀ�����㺀슎���鄬̏�
�����ą���ؗ���̀���̻��֏���ל����杻��܁����߿�������ݒ���ň��������ԩ����
�ꊐ����������������ϛ��������ݥÕ�����������������������౹������ӑᢄ��㨈�
������������������������������ۚ��䦃���������蹓���ʺ�������Ė����꺇ɇ馂��
�����ؙ������¬��������������𘪨�칎������㎎���Ӣ����㩹ׄヒ𓀟��Ѵ�������
��鍚ʼ�����������������ͭه�栾𨮮�������������������������������Р׵������Ơ
������������ؠ�������У������˘�����˺����Ն����������������������׫��ѵ״ז�
������Ǐ�ϟ��ş�ɟ�������������������ʸ׵㬛��ڜ��ڙ�ʞ�Ģ������������������
��������ߪ�����������������귯��ў��������ַ�Ԕ�퇆����́���쫌��������
�����Ђစ�ؽ��Ǭ���������蹬ǳ���咶����㨗ض�䓝�����������܀Է���������Ʌ���
�ȇ��������٤�ۊ�����ꇲ����������䃮̯���͌���������ֽ��ב�����ُ�Ӌ���ݧ���є
���ؽ�汦���ʱ⓸��͊���������������������򐝳���Ԗ�ԡ�늈�������������������ܰ
�����˓�����ӂ���Դ��ۜ�҇�����ƀ��ܐ��̘�����̄܇��į�Ɲ�����Ӎ���×ڶ쌡�֬�
��ᄁ�����Ć������㲟ߥ���������������������������ş�˿��������ʠ�����ꬭ
����Է�����������Ρ��Ƞ���ȸ���ä���������㟾�������܇�À���������͕��ڀ�ď�����
󠧙�ѣ���р��ҡ������������⢊��������ޕ���������Ѥ��������ף���̸������
������������Ԋ�����ౚ�����ʿ寄�����Ә�����ӗｷ���Ԗ����Ԇ�è������И𥁚����
���ܮ�������������ܒ������鴋��������������М�܃�򀋆�Ϊ����Ĕ�𽆧��ܣ����Ȕ�
������Ю�����Ĩ���Ƽ͇��������������㛶������၃�Ζ������Ǧ�ϣ����ũ���������ַ
���έ㷄������ǹ����ѻ���ᨶ𘛿���������Ŗ���Ө��ꃪ����ݱ��Ì����䰭��ǀ����
������Һ�����멁׋��۞������ߡ������҇������ʸ��ɼ�н������ߩ���䊲̭��Ƅ���
䁂萿�漧���욁���������ɟ��������Ԃ�݇��ٲ�����������Ձ֕�����譫�������������
�������Л�������������˃�탽��ݭ��̀������Ǎ����ڡ�ÿ𡮸��Ԅ��������������
�������������߭����ʀȎ�������ʕ��ߕ�����ӻ�������Ѷʯ�������������๫ɜ��Ԓ�
ȟ������ǣ����������ԠƐ�ߔ��������͸�������۱���Ϡ�����ǝۏ���ш����֌
��Ę��΢�硏�Ϡ�ǎ�ǩ����唖���ر���������䭅��խƚ��ۢ����������鐻���������؞
���ȉ������������ޭ���������Ϭ������������׽���������ԗ��������������������
���Ӏ������ұ���������ǚ��ˀ����œ�遯��������۫���Ҿ�ߗ�ǀ�����􂏤����ј���
����ف�ő�у����ݪ�íƔ�����������ݬ����ī���ٌ�Ӷ⫁��؈�����Īܘ����������
���ъ�Ԟ����������Ӛ�Ȉ�԰���ƺ���ֱ�����ػ�������ߐ��Ղ������������������
��Ӈ�����ݺ�Ρ����堫�������ջ������ׂ��Ղ���ܰ����ۈ���뾷Ր��ԕ�Օ��Ԕ�ԕ�
Զ������ݛ���߃𡸶�����Ç��ℐ���х��⃃�����ҏ�������救���¨�ϒ������
�í����ߺ�݁������Ξ��������О�ѩ��������ߤ�����㋇���임Ǌ��𙝵۹����ǭ���
�ϑ�ڀ�Í�Ҕ����Ө����򱎬���鮋����Ɣ毶ē���������ʲ�ǉ���ù���������
�����������������슯흓άΘ���������������������쬚��������寁������
���骍땿�܏��ǜ¾�ʬ��������٦����Ø����������������㓣�����욖⍥�����Ѹ����
���ϕ��������Ծ����ҝ��ރ��������֑������ƩС�咸���򀿯������������β����
������đ������ë��͡�������ĳ�������������������Ď���ӥ�Օյջ���ͭ�ힺ������
�ӑ����������С��������쭳������ź�ϼ���������ŀ��ڢۦ���������ה��������Ǻ�
����֖�����ڲ��ʤ���Њ����������ɵđ��Ĕ����ޯ������ꋿ���������ٝ�ﱭΟ��
�Ă��������᛺�����횥����˗������͵����耷㖴ʯ�၉���ͯ������Úߗ�����̣��
լ����ԥ������������Ⴄ��񀱟���Ψ����������՞������������������̓���𹢷�
������ޠƋ������ۿ�����󋣁��Ц���������܋���ӳ�����ﮩ�����������������Ҳ
��ս�۷ش�����ҳ˫�΅�������Ł��̕Ө�楨у������������Ⰶ��������Є�������
������������̐�����Շ���󣤂�钡��ذ��������덣������Đ���Ą���т�����٨������
������Ç�񆱗Ǌ���ź�傄Ո���������ڑ��������������ϥ����吾�����ꛛ����ڍ��ҡ
�߸����д��������뀍��Ҁ����疚ϱ�������ϲ��ޯ��垱����������̌��˖�����������
�֯��Ԓ�佽���ω�ە��Ȳ��������ܲ靴�ƪޭ�ʌ�裁���Ґ��������ʆ�ԩ��놐а�����
��������������������������Զ��������٘���܎��ޕ�ϯ�������������������Ŏ�ҩ
�ϊ����Ｐ����������ˆ��Ͽ���֘�̽��̻��������������ʠ�������ᝰ�������҄𥸿��
����󅎖��Ɗ���炵����������󍘗���Ϩ콍Ζ����ʋ�͘��̿옽���������ጔ��ϲ���
����͂��������ؼ�踘�ۙ��ݘ����֒�ಹ���ͩ�ʉ�٨�ڌ������ͧ�����̵���ϭ��ݽ�
�߿��֝��못�������涳����������ǟ�������֟��������הҍ����ļ���ٺ�ݞ��Ķ�
�憫��񳯀�����鄇����ư�۾��߅򄢃���¢�����������ꊁ��ڛ��ɋ����܇�����������
�ņ������ʏ����������������ح��軠���媱ٜ�����������خ��ϥ������������Ϫ
�󛁗Զ�������Π����ʱڤ�����ة��딒�£�����ƚ��딘�͈�����á��쥽���Ѩ������
���괸ƃ��Ք����򼄶�Ç���������������������������ꠟ�������̨��Ȁ�Ċ���������
������������ٿ�ܜ���ܦ����Ǧѣ��α�����͔�����㿺�ޫ�ޓ��԰���Ņ���ⰲ������
���������䉚Ǐ��ٔ�Α�������������������Ѳ�����������ʀ���Ѱ������ƞ��ƚ�͎���
������Ρ͌����������Ѡ��ݖ���������З������ٱ������ܥ�ז��������Ϋɲ������
����玱ÿٙ����݄��떝������ڳ������и鸸˚��х���˂�����ߠ������������ܱ���
����ʟ������聂������ܴޓ�������ʆ؁�ċ�����Є���͠�������򰥀���Ƴ��Ƶɩ��
�����ή����������⺌��㄁��͓�����ȴ����ɡ�������������ǭ����浝���񅙓�
�����딢ە���׭�����駮������������ף�땗�����ܢ��ʑ�������Ы񭊨�ս赬���������
Аꀈ����Ƶ�����̍��������˷�����󯿿�ʌ��慺���ؠ�������Ö�����������Ŷ��󣘬�
������Ϊê����輛�߸���������������ƕ҈Ȳ绽�����ӈڀ������泓��ހݭ�������
������ϰҙܒƀ�����δЏ����������𺻚����ȍ��ށ���涩��ǆ��Ȇ�↣������ș���
������������̧�Ӫ��Ę�����ͥ��掭ί���촳�֐����ܳ��ک�����������ִ����������Ə
���ۦ���ؔ߀Θ��������Ɍ���������Ż�����ʩ��������숏���Á������޹�ϰ����Ԧ
��͋������ʕ峸���ˬ��í�˛���Ӛ����ۇ��˛��ȸ��������󾄁�����������춱����
�������״����Åﶩ�Çƙ��蕢���������������������������ח�����۫�����ɀ�Ģ�
�Ĭ��������ܣ���ᦡ������Ӧ��������¢׻����윈��������ۅ���ᑴ�������븄���
��ŧև�֢��ޙ��͹����ڥ�ݸ��́���������������ڦ��������ۮ�����׹����杹�������
��̈���������Մ�̀�������������ర����������̇ؤ����ܖ�����������Ǡ��立��
������������غ��������Ƨ�އ������Į��������������̼���򐳩���ט�����������
ǣ����Ķ�ݺ�öگ���̶�櫜������������Ԋ�Ӟ�����̜���܈��ɺ��༬ڪ��ޛ�����
��ڱ�������줠״������׬䰁���ӄ���ߊܱ��χ����ā���������ֿ��������������
�����������񍁄���ù������ϟ��¢���谉�������ˊ�������Ҍ�ȝ�砒�墙��������
ȁ���������������������������ĵ��ޡ��������������Ɲ�ǃ�Ġ��������ʥĀ�����
����ȇ׼�������Ɨ�ƃӒ��ڰ򳘸���������ˈϭΛ�����ᡸ����̰�ф����ɂ��������
������˿���������䨏ܯ�������΄��怛��̔������Ѽ��܀��������������ᆏ�����
�瀛������������ϊ���Ģؽ��ܴ��ޡ��􋬵����ח���Ӌ��������즖����������ʤ���
�����欚��ǂ������񨓘�ҀÁ��������ӳ���������������������魿��Ɉ����ׅ�����
�̨������И�����õ���ꃋ�������ߨ�Č��������߭ê����ԥ�֬������򳚘�ܲ�
���݆����Ξ�����Ŵ����ǌ��𽺸�����������ƽ��氫������Ͱ������ܻ�������������
�ҁ�ҤΛ��ֻ�������Ɔ�����֏Ѐ��������ԛ������҅Ĥ�������������������С��
胏��Ĭ��Ɍ��������È̍�������������Ơ��������Ш�ͺ�ͯ�ڔǲ���׍��������˵�נ�
��洃�آϔ��ӧ����ҫ�ȓ�������������������������ԓ��������߽����ↀ�������
������ȧ���Ǎ�ч�����߁�����������������ř������۽�ُ���������Å�߶���땗��ϊ
��۱������������������������������䢚ˤ��������ϴ܏������������ƃ�����І���ٍ
����首������������������ꛏް����������������Ȓ���������������析��힓�۱�
Ю����ퟮ��������ƻ�������Ð��ڳ�ޙ����߀ѫ�����ڠ��ɟ�ڔ����Ձ�ٖ�߄�����������
������؛��̮�����࿦���������̮��ЗȄ򃯱����ַ��������џ������´��ܪ���ݽ���
�����������ޑ���Ȋ��ҧ�ŀ�����Ё�����ȃ�ۍ�������ނܠ��̀�ؠ���Ȉ�����������
�ʷ����ш����ٙ��������Ȍ���Ƹ�����ת�������������Ŧ���������˂ਅ�՚��������
�������龣�ˏ������Ϧח���Ѓ�����ṕ�����ћ��ӑ������Ջ�������������Ɋ��࠯�
���҂���ߦ����������������럀�����Ϲ�������������˓��줍�晠������������̕��þ
����������٭�������������Ы��҆�����֍����ȋ�ǧ�Շ�����������������������
ٿ�퍿�ݛ����������ʤ�˝����軆��ܺ������Ի���߂�����򡌀��Ɉ���ք����
��������������ꅱ�ڸ��鴍������ǳ�������������������ʁ����菎��Ɔ����������
�����ÛԲƵ¥����������ݨ������������������򖎒���ª�������������ݦ�Ƒ�֊�ф��
���������ޤ�̈́����Й���ޣ�Ĵч���懢�˳˧���ʍ�������������ȶ��Л���������
�����������ۘ����쮙ע��մ�������َ��������������돹���煆���ӥ������Û��
������ݷ�ޙ�����������ꁁ��������������豝���������󷅰ͦ�����ݙ���䡇��͚�
��􀰙̞ѧ�������Ã������ꣃ��ѓ�ˤ�������������봨���ʆ�Ҏ��䞌������͗�
�������¹���������Ԅ�����ò��٥׶�惁��������ꛏ�Ƿ������������������������
�߉�޻�������������������������׷��ã�������跀�����¹���������®��
�؉�������Ң���Š����ݽ���ݐ��ȇ��ܬѠ����䒣��Ѷ������ǃ�����֯���ڜ惓�ĺ���
ń���Ѷ�״���������֬�ٱ�����������ͥ�㣛��ݍ�������Ŏ�������������������耈Ŗ�
�������������㍶����ۘժŲ��䇯��ǿ������⚼��̈́�ݘ�������������ʵ�溑����վ�
��̼�氋����釦�Ă��ܑ�ू��������ƌ룇��;����������ἕ�����À�̄��ڃ�Ϣ��
����줗�����ɠ��ئ���砂�������ױ���Ũ��������»�������月����⷗������﷭̄��
��ڋ�������Ù��������엕�����������߾�����Ӊ����ⓣ��̰���ڈ�����ߴ�������
������������С��������㏋����栎����޳����┉��۠�����Ğ����ù������͟�鐋�،
ؖ���Ժ��¡����„��ןԷӔ�Ǥ镃�����ʉԆ�����̡Х�җ��ث�����ƽΑ���������֧
���И�̸����것�����Ř���ؒ�������Ķ��؆������������������üǘ����Ī�ʰ̸�����
���ٍ�������ä���֍���ᰯ�䌢󍿮��������������������ӫ����Ε�����⚟��
��ϝ鋿�����텶����۟�����ر�뢚��Ǔꆀ����¶�����ՆƧ�͖�ײ��Ȼ��������̌�ڏ
��ͱ���߄��ݤ��ֺ�۔�۽�छ������گ���­�����Թ����ۯ�������܌���ۖ۽�����
������ʷ����ƃ����ڨ���������Ϣܡ���ھ���đ���ˊ�Ǟ���荀���Ŵ���������
�����ۧ��ސ�����ͭǓ�韯���́���줃����Ѧ�������ܱ������������������������
��ڧԪ���Ȋ��Ӂ䁄����������ʱ���¨�������釼���Ķ�����ٰ��ɀ������݄�ͤ���
��������̳͙�����ꭍ׆�ā���������������ψ��ޱ�����ڎ㈖���������������������
��А��갇���չ���������鲙ѧ��������ḫ�������蛳�ę������ư����Ի������ذ��
����칧��Ѿ��������۰��������榙��������������̠���ܗ�Ϧ�Қ������ڹ�ś�ȴʙ�
��͔�ӆ�����ң���Б���ֹ����ص���޾����������ÏՖ���ҋ����������������������
��攅È����������ŭˈ���С��̜��ͬ����ق��Ŗ��������⊪�ۍ�����̰��ȯ����
��������ۘ��ǻ���������������������ܽ���悀����Ȍ����������Ƣ�캈���������
�Ě�����Ā����¯�ԩ���Ȉ�����޽��⦆ѫ���Ĩ���Ԃ�����ՙ�����Ɲ�����䠛�����Ӆ
����������ـ�ぢʹ�΄������ꃄ��ᵍŝߋ���ۛ�����ç������ή���ґ�������ߺ���
��־��������ӫ��ӗ��ϫɑ����������䗳݆��㘒�����줷��������Э����򆖞��
��������������率���ѷà���ㄮ�Е�����뉹����벱�ȹ���貱���Ʌ��㶐������׉�
���������ݿ�������ȭ���Ԋ̣�����������������܃����ı������������ѿ�������
��������������Ã��������ț���������������������珔�ّ�ء����ꈋ��󁌶�������
��ͅ��ڋ��۶����Ň�����݈�ײ��햒������������Ǧ�炡��嵁�Ý�����À��ɍ��٣���
�Ġ������Þ�륯���������ҥ�������������������������ڣ��⪤ջ�ç���������φ��
��������Ǭ��̀�أ��������𢨂���������Ӎ���������������ƌ�⍚�؊����Ǵ����
Ԃ���̙恋ٺ���������������ŧ���Ÿ�ڿ亹������ħ������������ٮ���̥����񚙵��
���։�����ߏ�����󀐈��٢��ǘ���菏����㖰����դޮ�������������ݽ�޾ٔ���ʤ�
�����ٰ��������ҫ����ɷ��������ꉀ������������������������푐���������ț�����
�î������������������һ���Ӕ�������۪�����������ýȝ���ȷ��ۤ��׎����ۜ����
�ۺ�ɱ������ح��쐤̈�����햳�㈹������Ʉ��̄������������������ʹ�މ�ˠ��������
��ȩ������醜��ɠ���ͮ�ܳ������������܁��춅�ݖ����Ԭ��������Ȋ���Ĵ�������
���ɟ�����ۼ�������Ɣ��޻���ǡ�������ھ������������ϵ������闰�ʘ��Ϥɳ���
�攟���Ͻ��ڒޑ�����������ڛ��ϸ��ڲ̀ʛ����������ҺŒ�������숬Ϙ��ƪ���Ӫ�
�����������ꁮ��ء��Ť������Ɔ������������Ħ����Ώ���ݚ��õ��ӎ��ֳ����
������Ȋ��������ݷ�����ۘ�������Ժ����������¸������������ӛ����ӈ������؎��
��񮸓��򂈢����ϓѩ�Ф�����������ȐƜ���Ҷ���ą�����ʎ僙�������릜���ɝ��
���ީ��Ȕ��������ҫ������ĺ�ģ������������ƣ���������ـ���ۛ�����������ާ��
�Ѵ������ǰ�������ب����Ǩ����̬̟߮���ﾛ�����뿵��缀�Ǽ����ۯ濾���Ꟙ�����߀
��Ǣ�Ǯ�Ɵ��ߌ�ڰ�Ƕ�����䓞ߦ�����ϝ������ɩܾ�����ӑم��է߷��Γ������ɀ���
�Ϻ��ꏌ��쑷ᣁ��������갓�ԃ��ԕ����ݑ����ꏺ��Η�»�˄���蒎�߱���������ܯ��
����ݹ��Ʀ����ř����ό���Ƴ�����皟�����珼�������̼��˭ɀ����ژ�������������
�ؿ����ѐޜ��푦��޸����먵ͣ�������Ɗ�����⪷����Ƨ��у�ד�����ˇ��䡨������
�Ϣ��χ�����ܓ�����؟���ႀ�����ȉЩ����ʬӊ�����Ռ����Ѱހ������Ⲫ����������
�֡����ğ�ޠ����Ѓ�ߢ䟈������ȗ�����������ڝ�ܴ��ۭ��銦�頋�����͝�鞖�����
��ᓟ�� �����Ǝ�������򠘡֭��������������ǐ�ɑ�����ǂ�����˥���ʞ���ؤ�����
���Ű����ǩ񛔔֞�������곺�𡙎����Բ��������������ԁ����慾�����һޑ���瓮��
����̼͌��̀��������Ň���������֞��އ�������ޕ����ꌻ�����돼�����҃Ѷ��������
Ƃ��Ò���ա�����Ψ��������ꄵ���퍹��՞���ט���������Ѝ������痃ћ���窥���Ȁ
�꾩�������ޔ���ѧ��˱�ځ獸����ᢠ�������������ߊ��ɘ�������������������������
������ĺ聓�����҅ڪ������ԁɘ�������٭ܞܕ��Ƽ��Đ���Ҝ�������➇����Á���
��鏇⡠��Ѱ������ڝ���Ȏ����������������̞���Ϋ��ڃ����������������������߃�
���׍�׿�������Βؙ����ě�ҭ������������򢮅����������Ꮋ΃�뎰�������ֳ݃�©�
�Ȁ��左�������������יղ�Ԯ����┄��������̅装�������޿�浙���͛Ȋ��и�Ƥ��
�������������糐����҅��ͽ����ઇ���ۼ�����芌��Ȫ��������������󈋈狨���
�����򭫳������������������©������д��䄑��������섽������璾�ș���ݖ�ַ�
�������������ȉ����Ȳ�̬������Ҁ����ޅ������ӡ�Ť�������쮫����Ͷ���������
������ţ���Ѓ�����ޫՒ���榼��끠���蠓��؜������������ϫ��ɫ����픰�轱�凿��
�Ƃ��Ǝ�ޥ�£ݟ����ޭ󉷘ǐ��ޖ�Ǌ�������ۆ�황�Β���������̠��ڭ����겅
������ͣ���̀�����ڹʩ閁���ၫ���������잊���Я�Ī�ˇǁ�ʧ��ˊ��賦���պ
����ӊ������ߘ̝���珽��퀨�ꈧ��譠������螔�传��ڠ���ǣ�����Ӌ����������
ί�퀐���ӷ�������ſ����䓈����ߔ�������������񂠼���޷�֜�ģ���㗊����Ϛ�Ѥ���
����ۀ�������ʫ׆�ɑ���ҙ�֦Ŕ�ʎ��镞ܝ���ѓ��̄���»̶����ͦ�ʌ����ȇ�ݹ�ࠕ
��Ϥ�ف�ܠ���������辰�������䒶��؜�����՚������ӆ�֛��ͷ���َ������������
�ʈ�ᩭ�����þ��������ʇ����̦щ�����㽕�Ӆ��ႜʈς����̋߁΄����׶��¡����
�������������������������㪩��ʏ̳�֞�������ᅏ�������Ã�𬒵�������݅�����
����֯���ջ���栒����Ǘ�����ݬģ�ڤ䄫����Ɯ�Ƭ������Ȉ��ޏ����������Ý����
ɫ�����������������딐������֢����׀�����������������ꇦ�������η������ġ������
��Ƽ���辁��لᴃ������¢��Ƅ�����ѫպ�ҕ������򖙠����ꕹŧ����ʃ�ܘ�Ŏ���̓�
˅�Ȃ������Ò�ٳ��߮���������œ�ӗ������ƭ�����������̦���������׀����Ӎ纚����
������������Ι��Ϭ����ߞ��ͧ���όЯ�����槶������ۛ������ش�ۅ����������툭���
�����˾탍���������櫒ܪ����������ƛ���㖤��Ƅ����������ꯡ����������ɲ䱍
ߤ������ϭљв��ۉ�����������������������ﬣ�����������������������ȅƷ���
������������Ԇ��ԅԛ����������ϫ������������������պ�������������Ҳ���������
����ᄎ۶ʹ��񸝲�����ذ��������ăӅ������ҙ����ć����������ċ��ɭ����Є��
���ؤ�������������������Ɇ����������������������դ���І�������������������
����������������������������������˃����������������Ҙ��躋�������ǐ���
ث����熦�ğ٧�ڮ���Ү����������������ئ���ɽ���؛����٣����㾤�������������
�����̩���ڗ���և�è�����ҟ����������Ʉؠٖڟ�����ǎ�Π����������ʝ�������ф�
������䣁�罈��´��ٖ�Э�������������πυ��������̈��瞒�Ӝ܋ϖ����������
؄訶��ܬ������ܤ̍�������ۇ��ҫ���菺�숐�ϒ��ᖚ�ؕ͞�����˂��ē�������ʀ�
����������ƨ�Ç����ğ䀍����яҴ�������ы���ه�����Ƹ�٧���懣Ƃ��ּ�᳌�ݳ�
����Ź��͝�ѱ����фѠ����դ�������������������ة����ᬙ�������ߌ�꼂�ԄϿ�
ܡ�ׂ�ͨ�����������������������������ڹ��ǂ����������Ӹ�����蠠����ͷ������
�С�������������������ް�䖻��������피�ؕ����͎ۛ�펴�ԍ���얁�������ܯҪ���
�Ԯ�Ȕ���¬ֈ������ݰė��������偓����ٚ��������������������������އ�����
���Ƴ���؁�����տ���������š�ְ��¿��Ę�����с�Į�����������������ǵ�┉��
�����Ѐ瞇���������¢�𠊂���������ٚ�����ﷇ������������������Ö��ܠ����¯�
��������������������׮鳙�����ڃ��֡��ȡ����ц���岮��Ɍ��餰����Ї���������
��؃��ڿ�����֭�禗۱�Ȇ������������������������������̔������������������ը
�ת���󕇹���󯏐���ρ����ϭ���������ڬ�������֑҇��������������ܼ���������
�ځ�����Ԁ����������������������������ӓ���������ିؾ��������±������ࣉǉ�
�ѯҀ�������ޠ��������׫��������܊����խ�����ߋ��©������������ܔ��������ݕ
ڧ����΋���������к�޷����������­�ʞ�دǾ�������������������ﶸ�』�߮���
��ˀ���������������ú�������������یς�����ۑ����π����������ã�݂����ߜԞ�����
淇���Ѹ����Ҵ�؀�ƣ���؀����������������͖�����у�ٍ�������ڬ��Ѕ��ݐ��������
��̢���ͽ��ȹ�蹝�������������˽������ö���ְ�������������������ʄ���ج�̄�
�����������Խ�����ϟ���������������ݽ���������෿՛��������͗��ç�������������
Ӿ���՞�����ނ������̖���ۗ��������������������忽����޾�������ɮ������ԁ�퐂�
�Ƃ���ؔ�����ƨ���ʏ��������ƀ��Ϸ��Õ����믷���ϭ��ʍ��ҳ����򟠮���큽ج��
ɉ����ा��������ӪԒ������ե������ŀ����ʜ�馿�؄ϐ��Ԣ����󰕾Э�����ތ����
��踲��������ؿ�Ⲱ�����Ǳ���������۩�ԟ������ƓҔ�������ݟ�������·��ꝅ������
�􃗴���Ɉ�������������������Ƈ���з�ǃ����������Ԫ�����뀸��ư����ʹ��
�ݎ��跻ȭ�������Ѩѡ����疖�������龠�ߗ����ه���˨�̦�׆ͺ���������������ե�
㪘ٕ���������ȅ׶熎�����ϊ�����������������������������������ڐ鼀�����������
�������������������ҵ�۾������҅�־�֚ϻ���������¹��ӉΗ�������ɕ�������򞠾
�����������������������՜�Ǉ����ڱ������؇����蜗���������ׂ����������������
���������Ԅ骴߁ʵ�ӳ�����ó��栴��̭��ڀ��ҧ�����ڙ��ݥ��։��������шä
��ֆȅ���󘕃�����������������ޞ�݂驍����ٴ��ة����ҡ��ױ���������������땨�
��듣�����⪝��������𐮙��̰��̆����ģ������焉�����������ԅħ����ѯ������
�ܨ��ݔ������������������Ʊේ�����ﲕ������𦀇���ĳ�լ�З�����픔�����
������Ŕ��ʥ��ꌩÀ������������������ڡՃ�������ﮌ������݁˾���������������
�����ݸ��ݕ��������ᬘ����ץ������ť���σ��������;���̃���ެݕ������������
����ݾ��������������Ȑ���Έ·�����٠����������������ڹ��삵����㰘���Կ��ٓ��
�聂����с���Ų��ކ�Ĉ������������٨̂Ð����և��������������׭���뤽�ٞ�����
ٽ������䵨�����͕��惒�����ϟ��������γɨҪ�ѽ�鯥��ǌ҄Ϳ���̤����ͫ����
������՟�������Ы�؉���Щ蘊Ÿ��������ᔳ������Å��ܶ����������͟��Β����
���ߪ����Ç�����ު�����캼����᾽����ǜ�����耳���������Ϩ��֏���͍֯�蕰
����������������ܳЗ���܅Ս���Ϗ�����ϫ������ȍ�����Đ�΃����Ƭ����ح��۵����
��������������袢̑��������������څ����������������������������������ɮ���и�
�݁������ؿ������޹�����ѹ��ƥ���񉿩���橽���ܛ���ԛ������������������廒
ց�頏�͆��膊�������Ŏ�͈�������������������پ��ܼ������ض̰�༉��Ѓ���ݓ
����׆�����ڄ鬸���謸̅���������֨������ɗ�֭���њ���ߵ遑֫�������Ѭ������
�����������ޮ�ז��ܖ�֡����餽��������������َ��������Ƭ�Ä������ճ���玏������
Ǉ�������ۀ��ۈ��������������������������ȶ���ђ���޹�����ʼ�����������۽��پ�
����˧�Ä������������˺����ԉ��԰��ɭ��Œ��ߟ���ݎ�����������ۃ܇�ޭ�СϨ
쓁����ʭ��Ẅ�χ��������Ӷ��Ĥ̹�ሊ������򛲷ٸ���ݔ�����������ٹ�䢙�
���󹩉����陉����������������������������������������ğ�����񞕸����ԃ�繍����
�ݴԑ�݂���������������΄����ά������ׁ�����袣��ȇ���������������Ҋ��χ����͆�
����ς����ꭵ���Ʃ՞������è��������������ۢ���ꀈ�ە������狮����������
���������×������ᕹ���������Ҿ�ƒ���􆺥���ɨ�����݄���э��냿��Ց���í��߇��
����������������Û������ё�����������˶���٧�퀸�������������𧇔�ڀ���
����Ԟށ����׸�����ϯ����ˇ��ʂ�����������֋봸��ᄁ��̏���ʭת���ڢш�
���ޱ������彽��枕�ף�Պ�����ܮ����˕�̵����ģ���뀚�횹�ŝ������ڌ�����ڿ�����
��������ڋ��ݞ����̧��ٿ����������������������������χ������ŗ������ӓ�
�Ã�䒐����І֬���������«�������؎�֯������������ŝ�����������Վ��뮫ǀ���
�����پ�������ˁ涏Ǘ�����ɑ�����������������۫�ٻ����ğ�Մ��Ɂ����Ą������
�������������˱��Ԃ颾�������Ν��ݤ�ɨ�������������Ž���ܢ趙������ۯ����±�
���ړ�������������������������ˁ�ܨ�ꨏ�㊬ݱ�������Ǜ�ꙭ���֞������쭠��������
���������������������śƌ�������⦭������Γ�ҷ��𴡚�݁�Ѫ��������������
����������������������ӳ������������ҋ����������Ŋ��ـê���腠�Ø�😰����ɭ
���Ҟ�𨳶�Ҭ���ʐ����Ԁ�����Ҟ��ܳ���𰵖�ߜ�������ꅨ������Ƨ�ޯú���̊�
���ɧ�����ϰ�Ğ����ʲ���к���撲Éв����Ã�����❗��҆����������Ļ���������ц
������ن��������ʁ��޽���ݢ��ϊ�����˻��������ذ�ɺ������������ʍ�����ù����
���������������؀���Ќ�ʷ�ί�׷�ϒ񈙀���ԯ��������Ƣ���⛴����ń����Ҕ���ڜ��
��٩��ז�����֭���������뻻�ރ����ª�֎�����������数��ؠ��ʱ�����،��ݩ�ڔ���
�ր�������Ӹ���꫔����������ҥ��Ѝ���������ʫ�占�����ڕ����������џ�⛢���ԅ�
��������ˉ�ԁ�ݱ�ѫ����왇ְ����ט�О����Ԛ�ʨ��������������͔����ᣱ�����
��괄����К�����ㅱ�������ө�������ѡ۩��ы�����˴Ǡ�������ъ���◓��و�������ͫ
��꥖�Ԭ���̆�Ϻݖ��Ό���ރ���������𥁥��܃�������������������ƅĉ�������
�����׉����Ԭθ�ӡ������®�й������٬ϖ�������٨���������������ß��������ܔ
������������������������͆�ㇾ����荵�����ⱎ������Ь՟͡��Ã�ӳ�������
����ׁ��π⑬����������ߣ�����Ц�����ʩ�Ω������������������ܮ��������������Ӭ
�������א�ဈ����Ǽ�������������̂����־�׶���ܾ������ދ��ǧ����ر��֧���������
���ﮌ���ͭ������읞���������ﮯ�������������������񲂐�ɜ��������������Ǽ����
�ׁ���ۭ����ڀ��仴�������������ĩ�������������ބ��Ѡ��ƫ��º�ы�ׄ��������
�������ڔҋ���ޡ�����ݰ���������ȇ��ď��죵����⥀��̩���Ĵ�����Ī����������
�ٟ����߾������������Ӵ����������ܙ�������р�Ԋ��������������偟٣򘤁�ʙ���
ڴ��죱���һ������պ����������֍����֜�����������������������٬����љ�®������
�����줫��莌��٧ʝ���ʙ��챃����Å����������ɜز�ߟ����Ȏ�����ά�������
����葮�ߠ���õ�봑�ׯ�����ʦ����þ�۬��ڌ�£����؛���򜸦�Ӎ��蝹��������Ό��
ݯ�ᯬ�������ܳ���Ã�ܞ�����������Ի���������ՅԦ��������������܆���������깰
���������栔�έ�������痦��������槧榧���򦲀�ఁ�Ҙ�����Ɉ����������
�����׀�Ɣ������⹃��ɐ���ҷ����˵٤�������Ȕ����暲�����خ�ך�ړ����ƀ���
����ʧ���ڊ���������Ō��͒۫��ɔ�ݛ���������ǹ��͖�����������������׌
����Ɂ�������������۩�ߤ������ʻ��Ь�����򞻍����ʹ�ȁ��������֯�ܙ�ȧ����ِ�
�ƭ���ᴒ�ɺ��û�˓����ͥ��ብ򣽴��������������׈�����׮壢������㤓۵�������
����ė�����������쾨�㎞��⎘����ۃ�Ϧ�፦��䂤��岃�������������������������
��������Ը�����������������й����ݯ��ମ�������՗���ҷ�������炅��ꌦӷ�����
�����˨�֗�������������ӫ�ދ�������������ͫ�������ݾ���ʗ���������Ʈ�˞�������
������Ԝ���¤��휱�����؈�������󓾀�����������������������џ���Ѫ�݋��鬠�
���������¼���ǁ�����ќ��ǈ������������ﹿ������߾������즴�޼�����������
�������廿�񫷰���ܞ���ʔ붋�����ģ�������Ʋ���谢���������Ʀ����Ƚ��灡���
����뵤֬��ʴ��ԭ�����䐚�����ś������ܹ���ǀȃ���ꥐގ����������䦶ꟙ���
�߾�������������߹���������ݵ��ݨ����↽����뵔�ঋ����������¥���ګ�⛥�ܖ��
����؇��ڬ��������������۫����ó��������������擦����߿�����������ٽ���������
������������Ȍ��ډܞ������¦�ȭ䉛������ļ��������ē��Ċ������٬��Ȁ������
��ﳓ���ڻ�Ǘ���Û����բ����௾��ظ��ݻ��ھ��ߘ�̥���և�������׳�̈́�������ʌ˰
���؟������ũ����ݩ�������������ܘ�����맷��ݿ�ə������Ģ�������خ������Հ�
���꠩����ۢ��׊����������ʖ����֍���𯟏��𷇪󺱻��������ĭЅ���Ď��������
��π������������Լ�˧��ξ��������������۹�������������������������ݔ���������
����������ނ�댍��с��Ľ������Ģ������ӑ���㨶�����ѓ���ß�猚�����ʱ�׀
������ә�Ռ�������ڥ�������ŷ��嵙����ƴ������җ�����������򱩅������ڹ����ټ�
컫ޖ돂��ͷ����������́��������������܉�ѫ���Ԡׯ����嫥���뤞��̍˂����˹���
���ٚ��讌��ܞڟܕ���������������������ٸ������ڿ��۸�ݻ��ٽ�޾����ʌλ�
�����웥��������������Ǉ��𴐍���袞�ρ��˦���ժ�ʧ�ә��������������������
�ά���틝���������􉷸���������󼵷�����æ����������ӄ�퇦����������ˣ񽝍�
�������������������͆١�����������������������墋��ዱ����Ր˿���֧��ɟ��
���Ҋ������ؔ��������������񠏀��𒮏���������͒����Ë����л���Ӛ�������节�
�����윗�֎��Φ���疷����֖���ֶ׶�������������塟��Ё��������������򛆎�
��������Ԥ������������ʡ���껩�����������و���ɍ����Ɏ����͆����������뤰�ۇ�
ﰻ���������딻���������׫�������������î��º�����������՘�����錅��������
��ت�����׷Ǉ�¾�����έϗ�Ž�韈ޡ���ң���ݺ�ՠ���򟩈������ȣ����ײ�����������
����۔Ҁ��ޟ���������ˏ�����Ž����ݡ����������򰹾��Ύ���ߤ抄�힟������������
����������ǃ����̅���������ƀ���ɩ����ޤ��������惙���ݟ��̍̌�ӭ��ݶ윖��ʛ
����ë�����ݳ����������˅�ٔ�����̻ܖ��������ʊ���Ҟ���������ȼ������樝�����
蘭ʅ�������≬Ͷ�ӫ���ɯ������ɥ���꿩�撊�ٵ�Ԅ���������������ʂ���ߦ�ť���
���ᰄ�ݘ�ø����������η�р������嶰岽�����܈�Ӛ�ֳ��������ڑ����ƨ�����
�������������ۧ������������������������ؒ�����ַ��������ۛ�ߵ������ێ���
����Վ���������֚������������������ʽ�҂�䦃����ܦ�׊�������͌��ȍ����ϗ����
��ƭŨ����������ᒼǯ�����������⧡������ׇ���������ڹڦ���˫������ʫ���خ�
����܇���������������Е���֛����⪸���������гȘ�ʹʪ�֩Ę�����ٌ�����´���
�ݣ���۰���Ƽ�������������ԭ������ݑ��������������ό����ǑƒăÑ������á����
��ܾ������������۽���䍅���袑�����д��Ņ��𴙋���������������ȟ�����̿�Тݟ���
�ӹ����������������������������������������������􀦷ದ�Ё�˛��ڹԔ���͜�
�ް�������������������Ҟ�������⩳�����Ң������҆������ʀ������ɱ��Ռ����
�ͨݳ����Œ���ɧ���������Ҥ�ڸ���ஷ�п�탂����η�����º�񮠹�Ů패�̿���
������ݳ�۝������������������������������������˵�����у����������������������
����������������٬�������������Ơ̔���������ѣ������Ҙ�鱅�¯��꩛ؽ����
�����������Ê�������̆�������ܸ��ͨ�����餦��̂�������������������������
����Ѧ������Ԉ��������̍�����������ҿ�������؟���ƕ����������������ڍΩ�
�������ʤ�Ƙ��у��������ͱ��̀��ˉ�碿����ϖ�Ώ������ѽ�������ƴ���ÿ�
�￼���眉�ܡ�����������������񅼞���������������Ф�����Ĳ枉ŀ������ͤ���
�����Ӏ��������������ә������������닁����氒�̏�όϮϮ�������ނ��߭�ϺΎ���ө
���Ķ����ʅ��φ���ѰǊ�܇�����������얘�ۧ������޽�߼���������δ��ۨ§�ժ��ĥ
ᕀ�£��ؔ�ܭ��Ԡ�ғ����¤�ܚè�ܖ����ڞ����դ�����ά����ٳ�����֏��ɂ����Ώ�
��������������׀�簈���������������������፤������������������֟������
����ڟ������������������Р���������յ��������҂���Ɉ���ǚ���Ԩ�������ʰ����Ӯ
�ݖ�ή��ҫ��Ã�������Ӌ�������Ӫ����ӆ��ۚ������벛����І�Š�������Қ�������
�������堶�����������Ⱦ������������Ë�������������Ҡ������򱩕���պ䞝����ٮ�˥
�����������������ܗ�礗�ۻ�������������ʡ�ȁ�������¢ꤤ��ोɭƹ������ؤ�ڕ
���ń߷���ֳ�����������ܩԫ���������ߟ������������������ץĒ���轅�޹���ｔ�
�����ճ�����������ݞ��݈���ǡ�����ʥ�������������۟߄�ȗ�ޖ��֭��������Ȣ؋�ђ
ք��ᔀ��������Ѵ��׼ߙͧ����ئ꺘��ʺ����꺲��������͠�����߬������ב����ŉ�
����������������������ݫ�������ݕ���һ�ȴ������������ؙ�����ެ�����
�գ༭�ᱫ��ڹ�Ҷ窹�������Ђé���ȥ�����������ʀ�ԫ��Ҷ�搘�򈕖�إԬ��ھ�א��
���ۢ�����󽹨���������������������Ɛ���ķ�����������Ç�������������ӭ���
������ǻ�ڸ��Г����߶�������ق�΢����𽌇ﺽ�纚���̏��Ί���������䛕�ߝ
�������������爷��������񍈢뛛��������˦��򩴝ό��ː���Ϊ����ǳԙ鵵������
�쑒��ҧ�����������ҥ�ߓ������͞���𰺵��ڼ��ݾ����ܝ�������ڡ�����������
��������������Ͻ�����������������������Ջ�ݣ�Ѐ�����Šʈ���؂؆�ć�������ƪ���
��Ē��������ӈ��֔􎕻�����������������������������������񭼠�����Ӑ��ں�
풬������ʢ�Ț������́瞩������ʷ֧�������쀝�����آ�ȃ��٠�����������������
�뛎����͍�������������ꌝ����������ʧ��������鶚��΅����堝��������������
����ם����Ƃ��ڤ�锤��ՠ��������ȋ�������ޯ٬�ѣо��ʁ���ā����׋����������
���򱭘���ɡ����޾��ԋ����������ᾤ�����������ο������𯝑���������侞ı����
���������ċ����ͩ���������ػ�̮��і�ذٻ�Ƅ�ٓ�����Ҙ���ڬ�ϵ���ѥ��ۖ������
���А�䰘������������ٿ������侾����̖������՛��ߧ�����������臛燧秓����
��ʙꁪ���ɑ��������ϋ��ñ�߱�������ԟ������ݎ髝���¨Ժ��৊㎱�����������
�����������������뇛���������ۖ�ŷ������꧑���ٟ��������������ɯ�ᅀ�贈���
�Ј�������������۱���и���ǉČ���鴖��ل䌚�肊���ϥ�����ĥ��ԉ��͌���ͬ�������
�;���ߜ���������������ݯ���Ǹ֟������������������ӵ���������ǯ�ǀ�������͊��
쁁�������������蠎ђ��Ԣ��������օŕհ���ǚ����䶲�ǩ����ɷ��ݖ�������ӳ����
������℧�ρ��ë���ۏ̯��܎����������؝�۝�����ּ�����Ǿ��㜘���������˭͆��
���޶������쮫�����ʆ���׻�����ђ�󔑡�����𘝨�������������䔒���͌�Ɠ�¦�
��������Ǚ����ȹ��ă��ϲ���ߩ옸������ԑ˚�ҥ�ү��������݂���ŉ���ģ��ޟ߾ٿ��
���ӭ�������ۧ�����������Й����������̝��󧲻����و�֘����Ù����������Ҩ�捳
��ɖ�����琭������ѯ������滻��ǯ��������������׵����ሿ���ە�߬������������ć�
���ț�����߶�����ʙƱկ��լ��ų���ҩ�э���������Ӭ֋鸷��ȧ������Ƴ����қ�����
�ٛ�ﬞ��������ޝ��ܾ����������돟��ݱݝ������۲��������ʤ������������������
�����ۖ�љ�����Ŀ�ݼ����ͧ��뜭����ز̞���䂰�����ق�ȃ���㥻���Δ��ʔ����á
ӵ������ض�������������������������������������ϟ��ȗ�����򂏯ވ�뼾�����ނǖ�
�����՛�������������緖�����������𒓥�����������������෭γ�����İ�Ö����̻���
�񁾴հ���������Ҩ����۞�������Ѐ�Ę������������������������ݷ���������������
���剡���������������סּ������٫ݧ����������Ð菁�ڕֹӕʐŌ��ӕٔ����������Ɉ�
����䱣�͌���仼��������婳�䖗�첍�Õ��󉡇�Ҽ������շ�������뙹�����ה���
������ğ��В�����߂ֻ�����Ǒݕ��˞�����������υ��������۬�ڒߐ����ٷ���
����݂Ȏ���԰�ۂ����Ւ�����߆��򒞄��������������������������������������
��������뮯�����䞞��׃��ӵ��כ�֌�ˁ������έ���ˆ����ԊԂ�˂ϴ���򹈅���Ʀ��Ʀ
�󝾴��������������������׿�����������ӯ�������������������ʳ�ʗ���������
�ߛ��������������ј���߾��������ߟ���ޯ�������Ŗ���瑿ⱟ����诘�������
��Ҫ�Ɠ�����̯�٘���ة��ֹ���܈��׺뫝ɼȻݝ������ֶ�������Ύϯ�ί����﯇�߼���
��ܿ����쀇�ۗ�����������Ɲ���������ׂ��ϋ������Ұ����մ�������������հ��
�唜����۫�����۽������󘶄��Ŗ���ۆ☹��ꖥ��ټ���������ݞ݃��ǋ��٧�����
�����Ӽ����������Χ����؋������̈́������́��������������Ј���뼿۔���Յ��Ѹ����
�ҽ������˕��ܚ�������ȪՉ�ȅĔ̒�ԩ޳�����П����⦦���ڮ攖݂�����ܖ�᳉��͔
�Ү������˹�傼҅���ϙ�����������ﹹ��Ļ���������������������̠�����뮅�ɝ��
�������������Ӡ�͐�����������Ʀ�ဘ����״��ڬҩЋ�Ƃ�����٬�ヂ��������߁��
�������������ۿ������������������������м�������ן����ȝ����������π�������ѕ
���Ӌ�흝��칖��ܫܮ���놯��ڦ��������������կ��������Ѥ�������Ұ�悮����������
������������ۧ����ӿ�����������ї�����Ā��鷋ِ����͑�����ۓ�����������������
����鷷�����ï�ނ�����������А����������Ē����������Ċ�����֣����𞝾��դ��
�ꬥ׵̶��܉껽�������������ߟꍼѴ�ۊ�������ܖ��ۻ������Ǉ�ǊǇ������������
㳿������������������Ͷ˝��������������Ť�����ݦԓה�ܳ���񊁎�ӥ�����˽ѽ
������띇�������۾��������˳�������������������������ߝ���ʧ�ߎ����핎����
��ö�������ԃ������Ԥ�雽��۟��ƛ�����Ӱ�ͣ����و��ж������ܖ������ӎ��ʅ�Ȑ
���������䵘��٣����Կ͘͢�УԜ�ˌ��毖��Ռ������������ͭ�����׵���ć�Е�
ɑ���̃��������������çް����ں�����ǋ்�����������������������Ƭ��띖ނҙϨ��
���ѩ��¾������֗����Ϛ���扖�ˬ��̠녚�Ձ��ɖ�ֵ��������ޢ��ׂ������������
�����֠������Ϯ����������㻻װ��ˋ��ǟ��Æ���ܜ���������󹏀������ק��ֻ�����
���������։�����������نʣ�̻�����֮����ک�����깊�������������������߽�����
���ϸ�����ϕ��������Ó�������攲��⩞�պԷ�����������Ƿ������클޻ߞ��������
�������秏�Ϯ����盦鶑�튧�جę���˸���˿�ı����ɐ�С夊��񧉈���đ󥹽�����
��̂�뱎��ڮ�����������ޝЙ��ᤜ�ͺ����ﶼ��������ǳ�����������������܄������
���������������ע����⦌���ı���ą�����։�ꂑ�������������ç���写����Â�����
�Ű��݂��捧��ίȄ������Ѻ�������ꎥ��ՙ�݉����Ƴ��Ҝ̋���򴯍��������
��ߗ���ٝ����ޜ������������Н�������鏢������ƹ���Ɩ�ّ������˵�̳������ٰ�ِ�
�υ̦��Ӟ�������ˣ�������ޣ���������ğͭ��ٱ�֥����ľ����磊�꺦�������޿
�����ޮ�Ͽ��퓇��ﾰ���ʝ����כ��������֘����ķ��������Ґ�ۍ������ھ����������
�Ā����������꫖�،��󚭚��¼���������������ѿ���������������ݻ����Ÿ������
������ˏ۷Б�����������������ݯ������Ć�ß�������������������������������״����
�������砰�����������ͧ���׭����ܩ���ў쉔����ن��ͬ�������󫳰���������������
��������Ώ���׻�������主��ብƿ������������ۗ������������꯿�������������㻗�
��ܿ������������ݐ�ٴ��񸑏��咲���������������ڤ�������������ǭ�ڵ�蠼������
�ص�ë��������ó�����Ͷᆱ��ڮ﹈��´���ֺ��Ȇ�̀�ڐ��������߯������󉖑�������
��Թ؝��řĝɴ��ୣ��򉜪��б��ׯ����������౦������ႋ���Ї��ЁЀا웟����ɷ
����ћ���������愴���Ը������ʍ���ἵ�熃��襳�ɾ�ײ����Þ�������觛��������
���ޭ����Ѭݟ����џ���������������ɰ����㫀������ʥ�������ѥ���Ᏹ�Ԫָ���î��б
͛��ۡ������쳵�����ɏ���������ɭ��������Ą�������������߭��ܺ���������
�㛝���î�����ٵ������������̶�������˅˵��Ӯ��劭�ٵ����Ϋ�꡷���ꁆ�������
ٔ�ع����⍴ⱪ����آ���髖�ƥ��̧�����ܧǄ�����넃�����ƚ�ͦ����Սͭ����ݣ����
�ë�ӻח��������ݸ�����������������߁�������������ˇ����������Ϯ����׶�����
�����ӡ��ގ�������ƹ������Ŕ��Ȏ����ԱŶ��ׂ����������������͟��ܾ�ҭ��
𿐕���ߊ��������ɭ�������������≻�����������������������݅�Ϸ����������ś
߳�����������Ӌ���������緇Ǘ��ć�Еؾ��ʥ�Ć�粠��䉊�����̠˅ؼ�ɡ�ܲ��������
˶���軓�ಱ�����٩Ļ�䐩����Ʃ������Ӓ����Ű��󌗣��ܛ�����Ԧ�����������
ۨ����������۟�ھ�ゆ�ʜ�⌊���Ԑ����ӝ��Õ��Բ�łʪ����¥��͡��������
ɺ�����������އ�����������À���ꤽ�љ��є������Ø��ބ�������������ޔ���˶��
����������ͻڶ������������׀��ɬ������푫����ʹح�ʥ���͖������������͌Ѥ���
�����������Ŷ���㘖Ǉ�ʯ⤁���������ߠ옊ꔗ���̑�����ݹ�������Ǥ��́ʚ�������
�����䝂�������כ����ܻ�ؽ���ݿ����׎���ϑ��������ɷ��˪�養��إ�٫�έ��
��ൊ�չ��Ћ���처��ԓׄ�ѷ��Ѐ���ڶ��Ĥ����ا�����������ܵ�𤄐�䈋���������
�������ޫ�ؿٽ����������������ի��ߊ�����ǭ��������ᝐ��Ơ������������
�������������ޠ�Ӂؘ�Չ�ݰ���͕���ϥ���ץ�����ؔ��������狸ڥ®��ժ۾������
������۟������ϗ���������ԟ�ԕޜ������������������������������ϗ�ޞܿ�����
�윭���֜�����������ٙ����׶��װ�������䙺̷������ʤ���˧���ڠ�Ԣ�ř��Ɨ񱌯
����®������ȫ��������Ȭ�����������������ڢ���������͔�������Б��������ۋ�ǎȷ�
��负��������۟ߠ��������䣎���栦�ڞ���ɯȆ���������������������Ô������������
�黤铆�洭�呦��ێ���ટ�Ԭ��Ζ������茾ꆸ���餼������ȷ˄��賧����Ɏ�á̷�
�����Ʀ�駙�����ů��ͷ���������ݘ�������̘Ί�����̳��󩊥���Զ����ꥏ������ީ�
�����Ń��������Ť���򵹤�璃��ԓ�������������ɿ�ﵓ�������������������ܒ����
���������ǈ���؟���ق׋�����������������֎�Ɏ����ۋꂜ��˅�������۬�җ���ȑ�
�����꜊ϨÊ���Ўۢޖ�ƶ��Ր���ٰͫ��ҭ�����������������Ԑ����ʂ�����ሀ����
Ó�貙Ϧ���쾞���׷׷���������������Ѫ���Ѵ����������ܸ���������򎤆��ۧ��۝臫
�؜��������������������ݲ���굷���׭���楃��ĵ������ʹ�����Ԧ�Ż��𥊇���괶���
������������Ჩ�����˫��������ػ�����햸���؁�贝���ݽ�摥�۠�ǝ�Ǘ�ۇ�
������쀌ݷ���פ�͖�Ѱ��ٷ��㎽�������Քە����������֝���ƅ����쵠�杴���
�������ٹŮ�ɥ���Ƨ����ҫ�֍�ꄤܧ�����條��������ű��ś�ɑ�ȑ����������������
������ἠ�����ĆЃ�����������أ���������������ěŚ�ĥ�������������Ņ���ҕȉ��
��Ƶщŕ󉐕�Ғ����ƒ�����Қ����͉����␺������笠����䓒�ʺɹɄ����颉��͔��
ũ��ق��ؖӭ�����ӈ���Լ젔���ɽƳ�¶���輞ˠ��ǲ��լ������ҭߥՉ�����ǳ����
�톩ѩď���ǖ���֑�����Ǖ괳�〵���ğ����ֹ���Ӂ�ۖ�������Փ�����愈�������
����Ȍ���䔲ڿ���߆��Ƅ�������ճ��֊����䋭�����ڨ��ׅ���ȑ�����ך������Ҙ�
��݈�������꾐������ˁŅ���̛��冀���ɘߧ���ǈ��ǀ������������Л�����������
�𲇧��ㇻ�ׇ�����ޝ��������ϵ������ޛӻ��׏�������������������̶����ɧ���
��͛χ����������̚���⳪�ԋ���Է�����Ѓ���̡��Ӫ������������Ύ������������
��҅���������Ϸ��������ȸۃ����ᔋي������������������Ŋ󐝠��܅������ݿ��Ñ���
�ͷ��Ҧ���٥�Ҋ�樮������ݲ�������ҥ���Ӫ���������ϕ�Կʏ�܀�ı������Ӟ�������
�̼�����������ڷ�Čˤ�Ƽ��ю�������꥕ƶ���Ŭ���ɔ˂�ⶅ���䈧��������֗������
����恩�����𱰷��������ĳ�����Ƞ����ֆ�������������ן������Ȗ���ғ��Ƌ�ձ
�ʅ��������⭚����ƛ�ڗ籪�������厭�ȶ����������텢���򡛲ѓ�ȴ��ʒ嗆��ԡ��
���̣��۳�䶅��خ���؉�Ζ�ع��ݙ�������ϖ�ٔ��������뀠ȡԠۖ������׋���׋�
����И٭���Γ�����Ւ����������������閒��ɯ���񡆛��������ˌ����ࠡ���
��������܁�߰���ۈ�����������߾�����Ϻޛ��ʾ��β�����Š���ڪ���䐖���ƴ������
��꤈����������༅����껇��������������������ȝ��������Ģ���ʷ�𺓬��ꆽ����
����޷Ӂ�ӕ���П�������ݾܼ��ؽ��������쇈�������������������������������
�������������区��ؼ��ֽ��������֔��������鵫���ᙺ����˥�ʈ��̡�����󉡴
���������������������ӓ��������監���ݧ�ێ����ҋ̃�ѬҺ�Ӟ������ݺ������������
���󲘭���ג��Պ�������袍�ᛀ������ԗʔ�ɨ��������֘��©ӝ����󩏿����삉
闞��ދ���˗��Қć⩅���������䦡吡�𲹄����ɧ���󅕂���є���䇎��蘤�ý���
���Ň����߽���۟��̗Ƈ������ШФ������ы��ʜ�����ؖ�����ӎ��ی�����������ח��
�Ҳ�Ĕ���򌪤�꜑��窱���Ѭ������ȑÊ�Ҡ���ͷ�����������Ț���ԃ�˷�����᩶���
��̲��ۮ䦉����܋����ɪ��э����č����ƈ�҂������䖉����ĩ�������������������
뙸������Ш����Ӕۙ��������������ߋ��߸���Ă躱觼���󉥟��ϟ����ҏη�ǭ��
쯬���������٭���Ů�����������܂���簍���􁎶���κ���ʁ��������Ú��݉�Č������
���د�������������쀅��䆧�������������ٷ�̀���򡪛�������ض������ԁﷂ꣢�
���������౦���������������������������������������������������ޡ۷�����
��Ϸί�䑢���ύ��Ξ��������Ó�՚���㽿������պ�ށď�ӯ����⹁㛁Պ�����
¤ڹĪま؞��μ�������������������������־ߝ��Ԅ������҈����ٟ���ۛ��ק�׏ۇ糵
����옮�ʨ�����خ�����ϸ���҈��ߢ��ښ��ݶ����ͧȕ�ҦՒ�����գ�ӣ���ӈ������
ȕ���������۠����󈐎���橥������ʮ���й���̐�����Ҳ�ͦ���񙫈���؝���ϼ�
�������������ܹ�Ն����������������Ɏ���䇭ƛ˺��ؖ��⎣��ʮ������Ƃ�擴���
꘯�񲛨�����������ᵢ������ƛ����ᓅ��͵�̋ɴ�ќ���䖑Ɓ��گ�ؘ���ɜ����ĉ���
������䋆������䱰십���ě���ȋ���������ۥ�粉ҕ�����֐������ո؈���յ˝ͳ����
���������������֒�������ѡ͍�ʫ����̩���՟����Ր���������ڿԚ�����֚Ϛ�𒭬����
��▿���ݼ��ކ�ʄ���ݻꝬ���������Ӟ������勆��覸��卅�嶠��ޞ���܁���������
�����������뺐�����䈐���������ў�����齓����������Ӑ��ÿ��Ģ����������ǋ���
��������熳��㼶˷�����������������Ň��������������ܼ�݌Ɩ������������Τ�׷����
��ȡ��蕷������������쪛ֽ�������դ��������ƭ����ﱲ��帓҉��ʴ����Ǘ�ǒ�׷�ϟ�
������ţ�����ݬ������ъ�咑�����Şɯ�����Ճ��߽������֙����񪩥꾝�ᄕ�������
��ǈ���Ķ���Ȫ�����������������Ť���Չ������Ӿ���׿����ې�������̙���Ʌ�ܮ
��ʶ����Ԍ��ƴ��¨����Ǎ����˅����杲��ݖ����쁥㊋��ߊ��ѭ婞�������⿕���ˢ��
���ܖ���Ꮹ����������ޭ����˜����˲�Ѐ�ԋѭ��ҏ������ä��̔Հ���𚪘�������
�����ܶ��ɢ���̜�Հ�����ً��������բ겎ٓȚ̶ԇ������٭����䥁����ܔ���������
���Ԓӈ���ٙ�܀��ɧ������ɋ������������ǰ��̕����藜��϶���Ҳ��î�����������
�����ڭ���ʏĔ��ڳ����߳����ǖ��Û������﮵�˴��㤘�Ťγ��ˍ�����������Ϸ�����
���׽њ��ڱ�ӣ����϶��젨���đ�����������������ч����ٍ�����������ҴՄ��˴���
����ǘ�򢿈쑂������������𼈨��ļ��򄞃��������������̰����������������ټ�ٽ
�߿�ۼ�����������������������������ʐ�ۣѷ���������۵�����������ٖ��
�������ŏ����Ү�»��������ǩ������������닋������躼������񛆜ч�ѹܻ�������Ռ��
��Ȑ��݃����������������ɫ���̶�Ò���������Ղ��ѱ֤�Ģ����á����𱀙��е���
�̎����䝐�ϸ�藂Ϯ��վ����Ӻ�쉥��«�Ͳ�����������֑��ʨ��̒������Њ���΍����
���礶����๯����ځ���Ľ�ܣ���������������������沣���Ȳ����獠�����ϸ��ח��
�џ�ڏ������������Ɋ��̲Ē�葸ہ����Մ�����Ќ�����Ǥ��ڨ��̀��޸������ޞ����ɮ�
����Ѧ����۩�͹��̰�����٬�ݩ���񬸙�ǳ���֘������Ҙ������؎����Җ�ٖ��۔둮�
����������޷����ࠓ�鿤¶Ϊ�ˇ���瘍���ˤ����ɸ�������������������ю�ڶ����
���ԃ��ԅ��Հ���ɦ������������������ϫ������������������������������ɢ��ѿ
���љ��������ڑ�䞄��ҋ���������씵ͳ��ô̋�������������ԟāت����ӧ���ť����
����ݥ��蒓���ǟ��ѕ�خ�ʎ�͙��ԃ懪����錃������϶���������������������ㄶ��
������ѽ�������Ş��Ĵ����������ܨό���ڶ����ū���렍����ϛ��إ���Ƿ끥Ҧɗ�
��﷈���ڛ����׽ח����ߔ����������󑓨���ۃ��߀蠮����Ԭ��ج�墴�������������
��������ي�ḁ����ן�߰�Ȥ���Ƒ��ڠ�ʪ���������،�����Ӌ��Ɲ��ǯᝆ�������ꂒ
�򛂇��Ք�ҝ���񥷌ׁ��������ī������ظ���ꠕ�Σ��Ҧ��ȑ˜�˖蓮�Ő��ڂς��ę�
ׂ�����ꏍӗ�������΀��ƥ��̐�ז��������̐����ٰₑ���Ķ�ч��±�����泬��㚍
����聲����������閦�ɡ��������ည�����������Ä؁醩�Ȓ���琙�����Ჩ��ƹ��۟�
���췟��������Л�凣�蘟�����၃ȇ�ڷ���½������ۏ�����맽�����ס�ɣ��̄��
�����㥽ʟ��������ۤ��°凔�µ���ځ�ᇄ㓶�������諤ܐ��̌����������İ���
�֬۷���ҡ��������Ͳ�Ç�뺤���Æğ������Ӫ������Ġ��������ۈʴ���������穪�ِ��
��Ĩ����Ɗ������̈����������������ԩ����∰����������ȓ�����ä�Ù������ϭ�����Б
Ó�������轻ۙ������滗�����ǷѦۀ�����ī��Ÿ����������ƚ����������᫨�������
��ܜ���׳�����ڰ�ت���������¶���͍�������������������ׅ��������ޖ�ݾ����
������������߂�����������������ۂ�Ɖ����▤�����ז���뫂��đ���ű���
��䭍��נ�����������ɣԪ�Ց�����������Ε����ن�����������ᝏꊸЁ����������
���Ы����Ǣ��ԩ�������灣���������ϋ�ླ������ّ�������������ь���������
�������Ƶ�����ӓ��������±�����Ѓ���ϣ����܋�Ƨ��­����������Ĕ�Ϸ��݁��
���������β�ɶ�������Ԁ��۰��������ʌ����Ȃ���������������荞������ɮ��������
������������핍�ު�Ү����庩������������������������������킑��״����������
������ˆؔ����庽�쯟��ә����ɐ�ޠ��ȋ�բ���������������Ձǲ�ʒ��������̌��Ĉ��
������Խ��������������������������醜����·�Ĵ��َ��Ր��惐�����э��츨�۰����
��؇�ہ���������˗�Ň����Ǩ�������ɦ������������Å����ě��������������������
��ԯ�����������۩����趲ƙ�ϳ�ëĲ������ۻ������٦��ԇ��舌�������뻎������٭�
�����έ�������߾ۻ����������������۝���欰������Ԇ����������׎���ݪ�Ɛ������
����썩����������ј�艸����ћ���֊�餖���Ŋ���Ɩ���ߤ�ʞʎ��ȹ�ѳх�Ց�����Ы
��څĩ��Љ޾�ɯ������ݲ�����������Úک��ݺ�ֱ����̑�����֨���������ϫ���̾���
������Ȕ��헿�ƿ��������ߤ����ń���ء����ä�󒕗͘����㺃���꺘��ܷ���ᢆ
��خ����¤����ҡ�񻺧��������خ�����������ΰ�����ǆ��ۥ��Ȧ�������ҁ����ӽ޺���
�����ץ�����⮋�����㹩�Ģ��𬒌���������爔���֦ʵ����鄬������Գ����������
ꀲ��������Ƭ�ӽ����������Љ����콣����է����䤈�����瀻���̀�����ϗ���Ȑ�
�쏨�Ԁ��鐞�����誒�������⿉�ܼ���Ϛ��������ڧ����쯠�������녡����������
���������������ǉۊ�ǎ�������輘����������狠����ը뭇���ܠӄ�ױ�ӎ��ԧ��
�Ë����Ǹ�����������پߝ������������ޕ��������ߘ�����ѱ�û��ӫ������������
���Ӻ����蛊�����������䂾����ⱛ����������������������Ȉ������������������
�������Ȳػ��¿�鷫����匶�՚�����������ӹ���ȋ�����꩐���菘��Ȅ�����ʊ����
к���䀼���ԫ���δ��ąͤ��▐ǻ�ڥ������ʗɠ��܄���إ�������د���党�ѐ�Ч���
��ɮ������܈Ă����π��̂��鑶۔Ԡ����߿�����緵�ʺ���ɂ��Ĺ��������ƃ����ʀء�
������覆����遒�̎��ǌԷẉ�ǀ⚜����񅁗����������⬀�����Ù����������������
���эĴ���ρ�๰��������Ț����������⢔��������ؖ����������ɥ��٪���������
�㬗��̋����������ɪ��̵����ވȚҞ�Ć�������س�����ұ����㉖�����ǂ��ֳ�����
����ë���������֌��ف����ȅ����Ձ����հ����ՙ�����Ѥ��և�㽢�Ǭ��ˮ���������Ϭ
��ʼ����驁���؎찚�������������Б��������������쀦��ʋ�ذԝĝ��ͭÝ������
�̱��������������˖����������������ێ������㫻������͟�턓��컩�����۟��������
��Õ���҅���������������������������ǎЌ������в����À����������������������
��޿�ܻ��߻�ݻ�ͤ����܅�������������ܛ�Ӈ�������љ֣��ǅ��������Ԭ������䉼
���А�ض������į���Ӌ���ˉ��䫛����̧����������ʂ��䬢���ʶ����������㰗������
�������֏�노�ʀ�ل��ͼ�Ȧ����ӝ������Ⱦ��խԧ���ؐ�ڷ������������ϟ�����޿�
��ܷ�ƚ������ዂԇ�����˹��������刣����ذ������饀�����Ďѐ������ĉ���¸��
�������Ʌ�����ąؘ�͏�������ψҌ��✟�䄈�������������ޑ��������ʺ�������Κ���
���Ӂ����ʒ���𛘠༒�����������뎦������������ľ�������˚�����ƍ���������ѯ
��خ�Ь����㌀������Փ����Ҝ�ֽ��҂�����������ݖ���ȍ�ς��ݑ̚մ��Ԥ�����٨��
��ʖ��Ǩ����ю������ӎ�٘����������ɵ���������ę������ٖ��ǬŽʟ��į�������
�����ŧǐč�ݸ���х�������������ԋ�������������Ş���̀��������Ӝ�ꎴ��脣���
�݉ӛ�������������ᯌî�����������������δ���������ɭ���ʺ�׵���׍���ŏ��
���ȩ̜��޵��Ս��������Ѵ���ݟ�������ݼ������Ί���������񧂑���̷����ڀ�����
�������䆶�ģ�����⋨�߃���Ț���Ҧ��������Ä��������쉷ʄ�ƕ���擬����⪔���
���ˈ����˙������酄��˛���ń��ż��鑃���𙑛�������̪��߶���ɘ��������倠���
���ė�������������������ؙ�����𭂆Ϸ��􆚎��Ț����Ʉ�����ܲ�܄܂�����ȅ���Ή
˷���ʹ������崄Դ��Խ����щɀ��������̑ђ�������ؤ�����������嘠ԀĀ������
�ꂠꈈ����ɒ���ِ�̃�圂�ж��؅薭��ŷ�Ǧ�����������ڲ��������������⢙��������
��Љ����ۂ��������ʴۮ���������Ꮂ�Ԃ��ߐ���������������ё����戁��������䘙��
���ņ�ƀ��������֤�ޚ䤫��Ñ��Ԁ��������Ĵ����������������ǽ�޿�������؈⏎�
����󗍇���ɑ��Ĕ���������������������ǝ͟���蚤Н�����¯��������׽��܌�֧��
�����޷�����론����қ����ޟ�����ܷ����ź����ǌ�ʫ��縪�߱�����������������
�����۞����ݨ���������ڌ׻��𰺚����܊�线�ܑ�̏��˪�ì�̫���⎽����Н�������
�����ƿ�������߼�½��¨�ӑ��Ô���ơ판�Ҋ������܇�Ť�ù���ͮ�������ڞ����̓�
�����Ɲ���񵗗󱅀ڈ���Ѓ����ꄄ�������к�������̍����ѫ����Ł�����ѥ��ݞ�
�������ߧ۟��܌�������ی�د�ƴ���궚��Ȥ���΋ɱ��Ƙˌ�񌳖�癧����鹍��Ť�ܬ�
�����ސ���������������ಯ���絁��ؚ��������������ʒ�������Ƀ������ύ����ɵ�
�����������ཽ������ճ���������������ל������ͅ���ɸ������Ĉ���Ͱ������
֌������������ݘ���������ʻ���������ԥ��������ລ��������ӷ�쀽����˖�Ț�¡�ϕ
ȵ�ń�ㆪ����ƛ��������¡�Ȼ���բ㺓���߫��ȵ����誡�情�������Ѓ���ޟņ��
�ȐជɈ�������Ł�ޙ��ڔء�ì�������Ҵ������������ȃ��왿��������������������
�������˭�����İ�ʄ��������������͑�ٔȒ���������ߴ�����մ�����ք�ё²���뜲�
��������������ԝ��ў�����������������������������콝�������؁���������
��쯳䇥ʉ��������靷���������������������Ӝߵ�����쟃��������利����ܛ��
�ڎ�ӭ�䟪������޶�����꯴�����Ʈ��������БĖ��������݌����������ܲ懻��ތ����
������ם���Ȓ�Τ�������Î�ɦ��䠠���̧�т������˼��єˏ�������˖����ⵏ����
�����������̀�ʫ�������������ߟ����������������凋����󝷵�����Ȝ���Ȑ�
���ف���ܠ��̺��ɯ��Ӭ�����◜����������ǈ����я������������������캆���߅��
��Ā������������ӑ���ߊ����������ǌ���ᦜ�����편����ϡ�Ա�Õ����껲�󆶴ѥ����
���κĜ�꤈�֜�����ȑ粿������Ǎ�����ǃ���俾�����Ϫ��Ï�٭���ߒ�������������
����υ���ֿ����ߛ������������׾��ӻ����߿����Ϙ�����ɚ�����Ä���樱������ە�
��䩢���������䙁����ٔ����׻���������������䊔�񄷧������秚�ц��Ȳ��
�ĉ������������͇��霰������Ϟ����مސ���˂�ͼ����ù�˯���ק�������ރ���
�҈�����֑����������芧۾�Ŵ������������츷�؇������������и���������������
������Ғ�������������˘��頇��䢍������Ǝ������������ߦς������ڠ�ԓ�����Đ�
������٬����ۂ��ߵю����������������߷�폚誶��ۦ�۠�������՟������;���ѝ��
䴈�ҟ��������������������ۡ�Դ��ۻ����������������搪���̓�����������޾��
�������ޮާ�������װ������ڧ�Ͱй�����嫿����֋���ڦ����������ԣ漢��р����ى
��Ŏ�������ܒ��������Ē�����刟�����̷ܼ�ɝ�������쿴�ƃ�Ǝ��������ᠮ�ǉ�Ĥ
՟�Ѯ���������Ԭ�������õ�ú���ّ����ٻ��������ӯ�ٲ��ɑ�������ɸ����Π��ڌ���
��������������������ǿ����������������������������ޞ�ј�㻉����������������
ٞ��镈���ݬ�̉�Ѕ�����������̉�ӫ�ݼ�������ڽ־����𽴿�����ᙥӒ���م������
��������Ґ᠈��������з�����������ɺ�ꇸ�������߶������������������ě�����ŷ��
����������ς���Ǜ����뱽�����躺������˵������٭��띺������������������������ק�
�׏������������֤����ƅ��滿ռ�㄄�������������������͍�ݤ�����슀����󄄈�ǌ�
�����懿��Ε�ߕ���������Ɠ���ʗ�����ۂ����ڑ��աӫ̓��Ɛ��⸐�Ǒ����׍����Э
���ċܓ���⍙���������Ǘ���Ӹ��������׿�����ަ�����剜������♪����������݁���
�������ݍ�������״���΀��Ð����ǐ���Ϭ���̢��؏»������ŏ��Ң��͒�������¯����
��������������Γ◖�ޅ�������������ׁ�����ޤ�񒍋�����ׁ��І���ﮂǌ���߉��
ͬ�������������Ԕ���ۏӕ�������������ٷ��þ������������ꁺ�Ĵ�ߕ����������
�����������ߟ�մ����ף��������纽��������Ȝ��᭺荂�����������������ېĵ���
����ꗔۖ�Ӽ�������č���Ĭױݕ��̳�۴�맳���߉����������۸����䁢������ߛ�����
������۲�����᪍���©��Ƃ৚���Ȼ���ý�ԙ�������Ҹ�������������䥐ɒ�縥⎌�
�󂜑�컪�������ɾ�����ѿ��լ�ż���¬�����թԥؒ�����Ĉ���������޾��޾����ɶ���
���Ǜ�Ц��������������Ј��ݒ��ԯ������������������̏忒�ѱ������鶬�����������
���������굯Ԭ���Ů�������ի���󥁾��☴��ܐ��ў�䷲�ρ�����Ŵ䌷����������σ
����˸���א������냌���̍�קݟ�����������ɮ����ޝ����������͡���Ս��������М���
�ԡ��ݿ���Ɏ��������ߗ�����۳֮���͕���띻��ݶ�������������������￾�������̳
���צ������ʚ����Ƞ�����֖������������ڭ��֖��䞖��삇�����袿�����텏�߈��
�����И�Ɛ����ܭ�����ߩ�철���«�ƫ���˥����������͢���㠙������Σ�����䰧�
̑��ے�Ĥ������������������������딣���Ǻ���ھ�鸺��Ƨ����͊��Щ��ۥ���������
����������������������ր﯃�������䱰�Ϣل�������☊Ѧ�������㒉����̹���ޭ
��굜�ٵ��������ۃ����׏��􇯾��ڮ�뷬�����Ё�ޅى������Ė�̩����»������
���Փ��ؗ�������Ƈ���������������ڽ����۟���ܺߝ�Ź����������ڣۜ�������
����������؟���ݘ�����ȼ�ص������פ�����멎�����׭µ˵�˱�������������������
��������ⷱ�ȶ����ꀙ����礆�ѭ����������愧����˛�ג�������������ߙ������
����Єϐ��ɜ���̥ϯі������������ܞ���Ԯܱ�������ԣ���£������������瓡�
�������ܐľ�����ʄ����𰉖ġ��詾���╛��ý����ΐ��ܐ���ɳ�������ˆ�����˓���
ŧ�𡿯��������ۇ�������������������뺊������������ѳ�����������Ʃ�����磌��
�����ƹ�җ������㌏��Β��ρ��걧��۴���������������ͧ���������������폪��Ʈ�
��������⧵Ռ��������鱃˫�ٛ��Ҵ�������������������ϻ���۟��������������
��я�ܿ�㦽������ڇ��✮���П�������ḿ����������礻��������ܠ����؛�փ
��˃���������ߞ����ßާ�������������ӏǷ���ӥ̛�����܄������՛��˂�ꝶ�я��ިڣ�
�����ۙ����ʂ����̥�������������ޯ�������体�׹������ʮ��͕����򇝻����������
뾤����Ɏ����ܶ��ȝƗ�Ń���Ҭ��Պ�ħүݐ��֙³����������̍���Ͱ̡۝���������
�۬�������ʤ���Ԓ������̭�������ȵ�ޢ���͈����ۢ��������������������夗�Ӹ�☱�
�ϻ��۸��⦁ن曝��ឍ�������̥�����ӎ酒�ۣ������Ȑ��Ƅ��Ÿ؛��������������
�������τ����������ϫ�ɵ�������΍������괲�ԁ��թ�ݩ���պ��ɾ����ѭ���������
�������؎�����ݞ�ϳ���»�燸����ǔ��𖁙��������ꎀ��������������ȣ�����ю����
ގ���������Іם������ݝ婶������������Ի��ѵ�󿼆����������ۿ��������������
��޴����Ӗ�����ǌ�����֟������Ο�����׶�����֙햲����쳚��ȋ����斮���ҷ�
��ݸڼ���֮��Ũ���ѫ��������˶���ې���࣌����������������ԫ��ېǭ�ز�����֪�
����̼�������ٗ�����Ľ������ϡ��������������Ⴛ��σ�������Ɠ���ܒ����������
�������킟���������������Ĕ��ܳ���Μ늻�����ٓ˙ڮ��������ąڽ���
��������Û���ݖ���������������������ג�����������������շ�����揜ހ�ݼ��
�٩������ыգ�����������񢟞�������Ϩ��������������ї�Μ�����ؗ��厏���Ѽ�ɗ�
������߀�������������ˣ����Ә���ў�����녚������杹�������������������ﲟ����
����������������������ϭ�׹���ŏ��쯃����������藇�۪������������Ԕ����è
�����������Ɩ������Օ�������ӗ�����ٮ��Ε������Ϯ�Ɨ���������䢼�����뗟�´��
���؞������ޫ���Ǟ����ڭܹ߫���ȡ���ָށ���ī��ڐč�ρ������Ȧ������Ե�
���Ɉ�����ޤ�ҌΊ�����������ퟁ�ڑ����������¹������Ί��ķ������ƺ���
ƚ����渵����ʂ­�����֫Č�������Ç�ট�����͵���Š�톾��ĝ������蠧Â��˶�ج�
��ϛ�������䬖��憊���ճΫ������돳��ޏ�������ũ����������́��ɸ����ټ���
�𖎠����������������������ӣ���⯏�����������Ѕ����������������������ֽ���ڒ��
Ƨ����Ӹ�׾����������ʟ���������ס�ן��������ɏ���������������ה��������������
�������������뷶��ߪ�ۍ��յ���׋����؎��򬨰�����׳۝�����خ����֎���ߊ���
���������ξɖ����ْ��邌ѐ���젢��������ٸ����į����������������Ĭ���������±�
�����Ž������ݙ����������𦧾�����������ă��幌�������������ݏ�������ݣ����
������Ҋ���������ӭ�ѭ���δ󺵧�ɉ����ạ����ĸ����ۛ��������������������������
��뺶�����𼎿�Ј���ܤ�������ξ������������库���菨�臏��������д�ֱ��ŕ�׶��
��������ٮ��Щ��������ѓ������Ή������Θ찿���Ď�񉽄��秞����º������������
ޏ�����к������դ�Қ��֚�������ۥ������������������������ء����������ۿכ����
�������Н������Ŏ���ݟ�揯ח�������٪�㪖����ߧ����蛙����ˢ�ڂԠ���آ�۬����
��ઁ�����軋������պ��ĸ��Ӹ����ߪ��ő���稣���ᎊ�����䋊�����䳼�����Ă��
����§���֨А���벚㾴����������������ö������£�������҃ￃꎊ���Α��ʂ熸�
������������ۇ��ß���؃�ǍЃ��������������������՝̷�ऋ��͐���������������
��⚋��������ז�ֶ���֠������ƀ��������������Ұٵ����Ь�������������鹲勡
���ѳ�٠�����׽�ƞ�ؑ�����Ԏ������������ƪ�����������Ɩ�쐇����򞟘��鑀�Ð��
����������ʼ�ٙ�������ܖ����֕�ޔƖٕ�Đ�������ߗ���ͯ��������������������
����������ݟ�˃�Ƶ��Ӄ��������������䘄�����멶���ȶ��Ӈ������������������
���ʜ쐸�ږ���ͬ�����۩ѭ����ۚ��ё�������ݭ������ܼ٥�����܅�������������
��������Ɛ��͐ⷁ���������ؓ钋缓Ϻ������������Ҿ��������Ʉ��䞠�����Ð����͎ӗ
ü���續�����ꇈ�������������۾��ż������Ȏ�Ĉ�Ɗ���왂��ᡅ����������˄ٰ���
��ʆ��ń���ĸ���������������ʎ�ۇ�����������Ĥ���������ϧÜ������վ��ա㪯�����
䀻Խ��쑐����ŋ�ݪ����轪����󨡾�垮��􃦝���������ܔ柎����İ�������������
���㽀�����񪌷�ǫ���������ٝ��ͯ�զ��֨�������������÷���������û����櫫�
���ݯ��՜�ݥ���������ϓ䏂������޼��������ޞ�����Ƒ���������������ٮ◲�����
�����륬��������������Ƣ��ʱ�������������������؛���ߖ����䪷���Ŭ��������
���ô��������ΐ��Ȑ��������˅������Ƴ�Ѷ�ԛ���������������۔¿�̙�ɀ�ǡ�����
����ܐ���ΰ�ǽ�ǋ������ގ���޾����ɶ������������տ���é��ΐ�Ď��β���������Ę�
䖣�������ꖕ������������ţꔺð��卸�����ѵ�������١ξ¥��������Ȓ�Ȏ����
����ӣ������������������ˎ��������̵����������ڨ��ϖ����������⸶��������������
�������̈́���߃��������������ޤ�ϳ�������ա���Ѳ�������������������������
�������������Ӭ�ʇ������������쥽�������������������ڼݭ��҃��ݬչ���Η��
ր����ܯƖ�˼����ӏ���Ѯ�É��ꯨ������ܕ�˶ܡ������˷�������ٟ�������ט����
��������������؎����Ρ���Ѭ���Ͷ��߲����썹�����贮�����܊˖�����쯓�����羏
�����댿��̓���粱��Ĝ�����������ذ��������������޾��޸����ɶ����������ċ�����
�������ѻ����������񉥕��������λ������ޏ���������������ƣ�͞���Э������������
�׼��ώ��������Ö������ПЅ���ѲÐ�Ă��ђ������������غ���𛙠�ċ�楃��ծ���
�á�ў�ч���ꚵ���������ÉΓ��ޟ�🷙�����զů������瞅������������Ħ�
�ü���ç���Ż��ً�ӑ�˲��ٚ������Ǔ��������������������ޮ�������������������
�����ޮ�ެ��ۨ��Ƿ޿����ڛ�����撠���������즋עȁ�沯Ϭ䝶�Ŧ������
������������ɝ������������������������ޖ�؄���Ӽ��֧ѣ��ª��ѹ땎����������¶��
�����Ɨ����㛈�����Ѧ���������������������͹�ǌާĕ��癑�Ā��°���辖Ơ���
�蓄�����󡿯�ۨ����ۇ�����ڤӠ����������Հǥ�԰�ڑٍ����َԮ����ۺ�
Ù���Ϝ������ف������櫝����̕�џ��ڲ������Ί�Յ�����Ƒ���䥹��얳Ч��������
�蠽��������ߕ����������Ԕ��ɧ��������͇���ׁ���ĵ����ң���������՞��������
󣽒�������������æհ皐��擒���̚�����������嵓׌޴�ח������ݩ���ݡ���ٵ��
䱩����������������Ђ�������������Ӷ��Ş����ۮ����������ͱ��񬠎���ѐ؅������
����龹�����ۄ۩�Ԅ�������������ݫ����������������򣷶�������ӣ�����ɼ�ޞ�
����������֥֨�֭����������������ς�������ϻ�Ѧ�޸������̾͘����Ӳʈ������Ҽ���
��������؄׿��ۄ�آ���������������������Ґ嘪���荠�䅤�Ť�Қ��ͅ��ƍ��Ϫ������
��ʚΆ�����������Ǆ��ݚ���������Ȼ�����钆����ʈۧ�ɷ��܈��Ș��ᢔ�Ӷ�ɀ��ب�
�ß����ߡ��������������ĩ����Ҵ����姃����߀�Ƙ��駣�㔰ӂ�ܜ����ͨ�Š�������
��٬������ھ옐���˚�����섔�Ļ��ؿ�݆��؀�����Ƣ����������Ν�����Χ�����
����槒����̹�����䢜��ʎ����竅����������峪��ʫݐ��ެ����Ф�����������
���������������ꁵ���ߝ�����ś˦�񭣞���ӡ���������������������դ�����ܭȗ
Ϋ�厛�Ҹ�ݐ劄��Ѩ��̊����΀��������������䠈������۟������겪�ɤ�������
�缅����̂ǂ�����ߜ�����������϶��ȋ�����ć�͇��ݠ�����������щз����Դ���ʄ��
�ڐ��Ĺ��횶������흅Їö�Գ��ǔ���ҧ��زצ�̈́Ω�����ՠ����������ܡ����������
���Ҏ�ٚ�驄��쭡隔�����౾����¡���¼����؈���ң�����䤮��������摪�É��������
���������̀���������κީ리���됵��𘝱Ø�������ۗ�����ǯ�����ʴ�§׆������૪
��ప������Χ̀嶂ڎ������������ƹ���˶�������Է�⮋ļ�ф��ج�����ʹ���
�ٖ�����Ɂ�ž�ت������ܙ��㕩������������������������۱������ܐ�㧯��셄��Ǩ
����Ʈ���������ݭ�����������Р����뵁��୲ݫ��Ӗ�����ɤ��������������ݕԠ���
�Ѳ�����������戊���Ϋ��ߵ���������Ü�����⾌������������������ᄉ��҈Ӵ�
����������ۧ���Υ������۳����ڛ̬����������ൖ�듙��ﰅ��������ڝ����ɛ��ی�Ц
����ߐک�����휕������̆噔�Ѧ�͙�儨�ԇ�����ۀԂ����������񈕍�����𢸄�
������ة��伛�ަ���ȏ������ⶡ��̮�������������������׆�Й٥⤕��蔴��䝚�ș
����������Ǯ��咁�����������ۇ��ݐ���������������������ᒤ�ɐ���������裻����
ؤ�����Ӗ����ό���ۭ�����͇��ѻ�Ɩ�����������������������ʶ�����ޑɁ�����ɗ��
�����������Ǿ����ǌ����Ä�������׵�����ӱ�������֙�����������������ú���Ҳˉ���
�̃�셓׽����������ք����������Ѻ϶�ȋ������ɰ���󄲃�����ϳ���Ƥų��Ԟ���淓��
��丗���������ӝ����̶��ĵ�����қͷ��򠧫�鍌��境���ŕ暀���ل������
��ِ�ح���۬��ڵ�����ڳ����궩�����������ɵî�ᖶ�����憮�鋇͌Є��
тת���������������߭���������㲪���ֱٕ�լ̀ݙ���ر����π�����Ȕ��ԇ���
���̱�������Љ厔ܙԚ�ѫ�␍ݩ¦ґ��ٖ��瘊��Ü�����蜯��Ɉ⨼і������̝�ښ��
������Ƹ�˲Шԣ��Ǽŋ�����������ߜ�󾭏ݥ�᷒��㦜������̾�߈�ӯ�䋕��������
�ѭʠ�������󍆒�������ъ����麎��������͎���ɜ���ٙ��޴����壈ͻ�����Ɩ����
�Μ����ŵÜ�Ā����Ĥ𡿯��������ۇ���������������֌ր�Ȋ�������ӯƉ��
��ڄ�쀖��Μ��ē�������ҭ�����ٵ���ơ�⯌׻�ʿ���������É�ὒ��������嬪��ن��
������̌������͇�������𕊯��œ������ع���܀���󓧜��젤�ˀ����ی�ߢ�����
�����熵޷���������ف�����◨�����������Җ��������������ާ�����č��Ʉ���ʈ��
����ܐ�����������痤������ɼ����֏���ƣ��×������Ǳ��������醾�����̺䶒�������
��Ķ��׼���׵��������������������č����������������������ߚ�ڐ���竲��Нƞ��
������҂�ċ�Ѯ����������쮔ߤ�����ތ���ܛ㽽����ڟ���������ݱ靌���֘�ﻑ�����
���������޾�����Ճ������᪚ˍ���������ŉ��􂠛�����������Բ�����Ԙ�����
��à����➅��������֜�ꥌ����ܭ������������،�������Į�ǀ������̅����۔�̄���
����̗����ˍ���ͬ�ⵍ��������Ĭ����������ꄠ����絜�հ�����ɩ�������ۑ���
�����Ѣ��Ȇ����䇞�؉저��������葽������戝෷�ǐ��򛒕ې�°뀸�ט��ؕ�΍�����
����˘��弌с�����Ӽ����鼺����Ϋ�諩����ײ����ۛ�쇷��ҕ���筦���绺��
��궯��û���������ԙ��������������������ۀ�����외�Ϛ���ߑ����������쩅���ඍ�
�������ғ߸җ�������՜ޖۻҘ՟���Ʃ���ݑ�ܙ֝�����������ީۻ������㴣�������
���؟���ݿ���������������с����ٔ���������̀����Ä���ӯ������������Î�삪��
�О��Ɗ���ӫ�������������Ɇ𦹊��ٓ���٘�����������ḗ���⇯������ۚ�㵉��ܳ�
��Ţ��҆ۏ������נ��ˊ���������Ѭ����Ԇ��Б����҇������������؊�Ͻ���勞��첀�
�ҷ�������َ����Ơܰ��������ŭ�̒�똕�Ͷ���������È�܄�ˮ���犫�ذ���ޫ�땻ް�
��⹜�ǔ��Ḍ����Ψ���������Ƶ���ΰ��ؓ����Ǯ���պ��������˥��ɺ������Ԓ����
��ȍ�蟉�����π���ݒ����Ԭ�����������Յ������������܌��坿�鬥����ګ�ߝ����ՠ
������񲩲��������껗����ݾ�����԰�����珍�����۸��ρ�����ܾ����������׺�唈��
�����ኙ����퐊Ƀ�Ƶ����������é������Ӡ����Ο����䇶����Ғ������������昛�Ά
��������⩞Λ�������纶�ˋ�����ˠ��菭����Κ��������Ɖ���؁�ڂ�Ԯ����ނ���
�����₦�����ԃ����И����Ű��ʨ����������ǘ���󿜽��ϼ����Ɉ������ꆚ������Њ��
�������ߥޘ�񩤰�܂����������Ŏ�ܢ��Т�������ڑՊ������˝�������׋ʖ�ٜܮ�œ
���滫�ܣ�鶊ׁ�����뤥≆��דߧ����¡�������������߉���ډӑ����ߐ���������Ӎ�
섿��������勣����烕������Р���������긔�����ֳ�ک��ʗ�𴔯�͗ϖ�������������
Í���ߢ�闐������ȷǆ�����򯙷�������؟����������������儈��۟���ć��➒������
Իɻ��������Ӡ��ފ�ʩ�ϝ������쀸��ͧ���������ͦ�����ӓ遠������ҁ�������Ȩ�
��ī𐯇�່��������䘯�ם������ٌ��㍓������������������ډ릞�ё�֝���ܴ����
ˉ�������쐳�ͬ��;��˛�������턴����陚��ꀡ��´�٢�涹�鍇�毑������ۀ���
�ۀ������ޞ���̘���⟍ó�৘�ʤ��������ת������Χ�����΍���Úߊ������ǩ�����
�΂�ɋ����婵����󤔂��ͫ������쟱Ц���ש���������ܝ���ɑ�㨯��������ן������
���忒����������������ޒ��ܦ�����Ʊ���������������������ӿ�������ۤ�������
�������ߒ����믗뫯�������Ն��������������͑�����՝����������ɶ����栗�Ď���
��󉟍�ℜ�Ȕѳ�����͇������㻙�ر�ք������䄀����ζ��ǖ��������ĵ����܁����
��ǵ���҉�����������糸��΂��������̈��������Á�����Ң�ͷ���ᶐ����˟�ށ���
��觥턶𣈮���Ֆ����ʧ���Ԁ�؃�ŝ������生��������������ⶱ��윮捛�ҎͰ������
��������������������ۜꡤ���������ʸ�������ٴ�싰����駄�����Ə��������Ĭ��
��Ĩ�����ñ����������ͽ�������Ƨ䱝�䔐���ƾ��̙�����ͬ�����������������⼜�ͥ�
ҳ�����Ł������ꔾ�ė������ҍ������߸��������͖�Ӊ�����ؓę�����ǖ��ܯ������
���������ҷގ󎣜͟ݪ����ʚ�����ȧ޲�Ӵ���ּ������ßۧ���῵�����󻁋�����ā
���Ç������������䇉�Ϡ���ⱙ�����㻂׎�����ǣ������ٿ�Ȇ������˧��������뼜�
�������������̛������Ӝ�ա�������ք�㌞���ω��б�����ӑ򇓕̚Գ�̈́���������
�˻���ɷ�즣���������ʩ�ǥ����ڏ�������ٜ��Ɯ�������������ދ�����򹟅���ƵЏ
��������Ɲ�������ť��đՔ�����ŭ�兘������̆�����������̖��Ε��З�Ո�𡖹����
��ͼ闭�������업���ŝ��Ѓ������ݯ���ۯϺ���䬦���Ҳ�������ś�ձ�������
�����������玱�ی��̟��٦����켲���򈋣��������׸���������˝��ڝ��Ή����
��������ک��Ý�������������߷�����������������ӝ��ᅑ�㹅�����ұ������罴��
����Ñ����������׌襑����������������ͦ�Ԕ蚛��͒􃋲�䍇��������߈���������֝�
�����۶��������������Î����������ճ�邋�����ŕ��⨟�����ҡ���������Ǡ��Ú�ʭ
������±��ʾ���Ő��ŕ����ŏ��Ԣ�ը���Ÿ���ީ����ꨙ����������������נ����痧
�����ë��ӫ������፲���Ǩ����������ˆ����Յ�ֹ�������Ž����¾����鰗����������
��텦呝������ߋ����������؟�������ެ랃�����������ơ�������������உ�̶������
���������������ȩ���������������ę����������󲲄������Ԃ�ψ�Ŭ�����󉛢���
�׺��������������ῳ���Г�����ö�������郎�������������𠉩��������㱢��������
�����Ƿ������Ӂ��ִ��������ܽҚ���������ń鐱֩Ņ������������������绌��
ڥ�ʆ���ȋ嵕����ҹ���� �横����ߣʽ��������Ҏ��ۺ����㉗���ԋ���ꔚ���ç�����
�޾�������ׯ���ޫ�߽߬�޽��ܿ͏�������̇¥�Ӄ���ĕ�������������������ǜ��
��뱭����є�ۊ�닦��Ϻ�������޸�ĵ�ɾ������������е���������������ȍ��
������쏶�����Ս��Ռ���ي��ңڛ�����Ɓ����������������ʚ���뚫�Ê������������ˍ�
���խ�����������鬢㡽������������Ѹ��ßۚ�Ҿ�ῷ����ô�Ü´��ȗ��ʉ�
�͇���蚺̵ܹ��������Ы���������������쇌��󜸭��φ����вŎ��Ӣ�ɼ�ä����
т�ː�탳ް���͇�����ұ�������ёæ����������������ʖ�Ւ����֮������褹���������
���š��ˡ�ڵ�����Չ�������ê����������ܬ�痫��ȧ�����椔��Ѐ����ĩ��Զ����Ž��
������������醽��鯟��߈���������ʡ����Η����꒴���������޼������Ƅ�����������
�֬ۡ�Ꮭ��������ڛ���ཌ维����ߨ鲦�����ӷ����Շ��䅝�������ŉƫ���������î�
���ƃ�������ޒ�¿ׁ�ٰ����ﺾ�����������ۂ�ڢ��ް��������������������Ԉ�ò���
���ȝ��¼���វ��󂉢��ö�������ȐЌӓŴ�����Ŵ�����߈ʂ񀦯����񆕱訉��Ź���
��쀬���ïޔ���������Ԑ����������Ϟ���贆������䗐��Ƥ����̰������������͞
�鎜������מ������������Ȫ������ӑ�������踺�����ྠ�������������񅩜���ָ������
����գ�뮚�󮚸���ÕЉ�Ç���Ç��������ؿ����ք����������Ԏ����˓�����뫌���̉�
�ś�������Ƽ�⾃����ʑ͒�����孅��������������������謉�ކ�ۛ�������٠��˶���
��������ޣ����������ȸ������Ǻ�����Č�נۘ��ܸ榈�����Ԑ��������������
�Ϻ��՞������������꟟���м����ح��픸���ԁ��ǀƗ�ן���������݀��Ѱ����������
����ۆ튆���舥�Ӹ��������῅�😕�����Ͷ�����������������Ơ�湱���ƱԈ���
����Ć���������Ĝ����黾�ڃ�ȝុ����Ƹ�燑��������������ӣ����������������
������������������������������������ו�������ʡ����乛�ې�ܚ����Ý�ԇ���󚭪�
�ٲ⫊�������������ʇ���Ʋ�������إ����Չ������逥����޺���틾�˅���̪��ǿ�͊
쮯���ᘭ������Ϭ�����������ʪ���ʖ�������ϵ�����ۃ�ݟ����ù��܂�����������
���֐�ؙ�������å�����ӂ�����������؎��������ݽ����������Ɣ������ǲ��������
��վ�䐀�����ٔ����þ֔�˹ؗ���ɽ�����ՙ��������������ԇ����Ǭ͝������Հ�
ݤ������ǯ������Ŧ��Ȁ����������بÔ�������Ԣ��􁉬�������������������
�Դ�肖�����ԡݸ���՚�֨�פ��ù������ґ�ѝ��ҷν����������ȟ��Ѵ�������������ÿ
�����촣ŏ���������������Ֆ�������������֜���ꯏ��Ͼ����������կ�����Щ���
��������ޛ���颙�̀Œ������ՠ��������Ƿ�����㥾����������ţܐ�������ω�ƞ���
��餾Ȅ��ݪ��٠�ʇ�뭆���ϰ��ϡ�������吿��Ń��ʠݏ��蛔�Ե�����ֈ��͝�֎���
ۺ���޷���۾�����ܨ�������փ����ӊ�˾�����ԕ���ī�����������������镕��ⲋ�
����ж�괏����ǅ�������������̭������ד�ݤ�Ԁ�������ĩ�������������ٴ���Ҍ�
�ʄ�ԝ����ɇ�����������Їȝ����ß�շ΋ӊ�������ЂѬ�����Я�يߑ�����ջ��湛Ș
�ރﭖ������Ԩ��䞬����֕���ݸ˻�������������������ڴ���Ε�������������ٟ�۬
ɽ���������߈�������Ţ����Ď�����ѫʾ����ض���ԍ��������ŕ����ӈ��������ߝ����
����ⱸ�����󶘒����톓�����������󱵼�����������ޚ�����直�ڣ�Ф�����僩�彬�
Ň���òԀ�Ě��í��ܴ�����ꈾ�����ȩ󛋊ϕ���ڮ�������໒�ԏ���ڡ��纻������ާ�
����Ұ�Į��͓�����ٕ��䦄���ϡ����Ե����������������⫼������ɇ���˃���
�һ��Ĺ��������幋�����૥ʾ�������ҍ��靰�����՛����녅݁�����������ﬢ���
�����������ʰ�����ԗ������ҕ�۔������ߘ�ұ����������ۛ�Ϩ����ϕ���Ă��
Ф���ޯ֭������ŷ��τ�����ǋ��ٽ�ģ°�ܬ��������դ᳚����ۣ��ͧ������ʥ��Ѝ�
�Ԕ䳞ޣ�������݇��ͨ���с���ѫ���݌����Ŝ���殾�����𬞏��������镵��
�����ڸ�̱������������㾧����ʄ���䆧���������ގ�뱂����ů���ԓ�������埛����
������������ѭ������˭�������������ݵ��������Ƿם�ϗ���������ٚ��򓻥���٠��
Ӵ����Т��용�Յ���ꢕ�������ذ��������ĬНަ���������ԴٿȺ�䄄�΂�¬��찷�Җ
��ˆء����³��ע����Ɣ��񮣇������˚�ɡ����ד�픫��ٸ��Є������ʮ׎������𣂝
����������������������������溼�儌幁��Ց������ݹ�ԣ���˕ˑ�ԙ����������
�ͯ���譵����ی�ċ���歀��ڬ������ŗ����ؗ���Ԯ���ր��藒��ҳ�����ަ���ߣ����
�٦�ߖ珟��������������ʝ����ή�鍵������첶����Ŝ���ߕ�ɰ���ʆ������덠
������������ю�Ќޏ�����Ӿ����磅���҇����ҙ����ʂ��Ѧ���Ι������ܝ�����ϟ��
��������ь������������ć蕖��ؤ������Δ���Ϯ��ᠮ���Ƚ��Ԋ�ߜ����������Ђ�������
�������������ֲȢ�������ԡ���Ɇ����򢅝���ѻ���Ũά�Ո߳�ѹŲ���ݾ�ʆ̨�ë��
�����é��ڕ�����ε��˵��ҭ���Ċּ�µ�̆���������򗝡��篨�ۦ���ܭ�����
����������Ԏ������ҙ֍�������������ԯ�����Ȭ�����ר̫��¨ކ�������ȑ���ʞ�
�ך�����ᥓ���ϓɪ���������֌��샻��矛�쾆�������Š���ׯ��֖����欖����
���ۘ�������˝����ٹΉȻ���ޯ��ڸ����奝��؉����ƕ��Ī������������������ԥ��
���̉��Ƙ���������������������ό׷��κ�����曘Ю�׸ˈ����鹓�������ǅ�������
�槉��ɇ�����������������Н���䙹۾�����ܩ¥���̔�؆п������ؤ�����ߐ��������
�ȃ����뱪������Ѩ�Ż������۪������Љ���Ĝҩñ�絎��ť�ױ�������Ӻ���ȉ���謓�
�羍����迠�庪ˆ�Ȟ����ԥ�Ȱ���ػ�᮶�����ӕ�����̚�Ź���ư�ѿ����ܲ�������
����ߢ�������ѭ���̘��Ȍ����ݤ���ź�تƮӨ����������ؔ������٢�ϻ��������
������ӆֲ���ũ������隹���ۄ�ܵ���Ĕ����Ֆ��箖�Ȅ�̀Ҭ���ѧ����կ��������
�����Х�����ֈʈ���Ĵ��͑����Ƨ�ҷ����������������߮ﺷ��ଭ�������Ȝ�а񴧦ڟ��
ʯ�����������ؾ�ʇ�Ǧ�����ď��ϥ��ꏑҥ컣�����������ˠ������⤗����َǍ��٠�
㤬����Ńʕ�î��������삔�����ݫ�����������ӛ���������٩�܌�؁������������
Ǌ��ė�ؠ����������޼�����ؚ��敋��������̇��陱����̖�����������ɜ���
����ʹ���������ؐ���僲�֣���⻈�������������������ľ���������̈́��ѝ��
��ﭺ��������و����Ǝ�˽��Ƃ������������ɠ���ԛ�⸘���٤�����������������
ħ������������ؾڪႡ����ɠ��Ҋ����˚����׷�ފ����������˓����ܷ������Ą��Ј�
������ۋ���ބ�����ʢ��Ĩ����ɐ�����ʚ������а��Ǉ�ݻ�����������ܰ�ҍ��өƒ
�����������Ͳ�����Ũ�����������ޠ�ӟ�����淆�ٕ�ʕ굎���օ�����ٞ�ފ�����������
��������ǝ�ꆹ�ʫÅ����������������؜��ꋴԕ����������⏳��ř�ӥ����ުþڗ��
�ӡ����ݦ��󲱗������ꋐ�������������������ʾ�����ͥ������ġ���������嶬����
����Ұ���О�����������֩�ߌΈ�ʒꐧʑ������Ѱ��謓����ل����������������к
���֕���ש�����̘���ԗ�ك������ή����缂������������ͪ�в�吶��򊧭�����
��Ɏ�����ڐ钸ȗ������Ք��򎨎���ť������������ɋĥ����ډ����؁���짺����겣�
鱳��ɵ嫪Ґ��������������買������ȭș������Ȭ����ޚ������ޯ�̛������������
�����⻄����۪������ᇙ��Տ��ƀ�����������������κ���㼰���܃���뮷�����
����ڄּ���ʪ����ಃ���ȟ������ᆙ���ṱ�Ԧ���ܷ�����������������ԋ���ܼ���
����Ԍ�������͢�ڭ܇�����򎔕�����᠌���̭�����릗�����މ����ݛҥ��佊ӡ��
�ꢻ�����қ���ڕ��񙱧��ĵ����܂��ޚ�����������ןĹܽ����������꾝��ԃ�����
ە����������������ġ�Ʈ�բ����������������Օ����؞�Ԓ���զ���ᐤ��������؝��
�����ԡ�������Խ��刅��ڶϻ��䞿��ݑ���ǯ����󵬳��㰳���騺��̃��������Ό��
�㟓�������ɹ�����������ۙ�����������ܘ�����������ϳ���������ܪ��ܲ��ߊ܎
�睫����������۞��ݕ�����쯓��Ҳ����׀��Њ���ĠӃ�Ļٞ�����ԿĘ�������݉��
��쥌����ҳ����ܼ��չ��ޭ����������払���騯�މ�ԡ��Ⱥ���������� ��֍�����Ĩ
����Ї��ݐ���ڬ𗶓�Ͱ����ӻ�Ѱ�����ͮ��͚����Ȯ��ۛ��Ҫ������κ�������̘
Ǌ����܀�������Ͷ������ە�ş�������������������ː����������ɵ�����ۊ�䠨
�������������Н�ơ����������Ձ��������Ձ����󄜈�������������������Þ»������
��䇆�����ԇ�ޅ���������Ǟ���ϡ���Ձ�������������������������������Н���������
���Ȼ෡�ǃՁ������ǃՁ���ᷡǃ�ܻ����⇶��������턜������ڈ�����򼣰����
����������������᰿�く��������ǃۻ��Õ�����������턜����ƪ�ډ��������ډ�
␪������������Н�������Н������򼰵������������������������ね�������ǃ�
ܻ����⇶��������턜������ڈ�����򼣰���쯡������������ΐ��䟪����������
�������ه����߾�ᣯ��������ͪ��ݨ�个᳧���������忿Ӵ��ތǽ�������ڗ䧀͔��
�ߕ��������ۗ������䃡�����߅���������������埤࿠ԇ���򂯽��������������얄�נ
�ޘ��鏂ɐ�������Ł������������ډ���������Ŀ��������������������Н�����
�������Չ���Ⱦԇ���Н�ơ����������Ձ�Ⱦԇ�������������覐�ȱ�Ƈ�ߕ���
֡���ٗ�ο�毖�꼋���������ˠ�������򱼱��������������������Ʉؐ¾�Å⮍�����
������䵣�����ߖ������������� �������������������������������ɷ�٠��󚜼
��������������Ǝ�����붻��˽����ޛ�������진��򢔈�����Љ������������
����¡������������������������¡����������������
&]
[s3; &]
[s4;%- &]
[s5;:SaveImage`(const Image`&`,int`,const String`&`,String`):%- [@(0.0.255) bool]_[* Save
Image]([@(0.0.255) const]_[_^Image^ Image]_`&[*@3 img], [@(0.0.255) int]_[*@3 qualityBpp], 
[@(0.0.255) const]_[_^String^ String]_`&[*@3 fileName], [_^String^ String]_[*@3 ext]_`=_`"`"
)&]
[s2; Saves Image [%-*@3 img] in file [%-*@3 fileName] with format [%-*@3 ext]. 
If ext is `"`", the format is taken from [%-*@3 fileName] extension.&]
[s2; [%-*@3 qualityBpp] is the quality (for jpg) or the bits per pixel 
(for other formats):&]
[s3; &]
[s4;%- &]
[s5;:PrintImage`(const Image`&`,int`,int`,int`,int`):%- [@(0.0.255) bool]_[* PrintImage](
[@(0.0.255) const]_[_^Image^ Image]_`&[*@3 img], [@(0.0.255) int]_[*@3 x]_`=_[@3 0], 
[@(0.0.255) int]_[*@3 y]_`=_[@3 0], [@(0.0.255) int]_[*@3 width]_`=_Null, 
[@(0.0.255) int]_[*@3 height]_`=_Null)&]
[s2; Prints image [%-*@3 img] in coords. [%-*@3 x,] [%-*@3 y,] [%-*@3 width,] 
[%-*@3 height].&]
[s3; &]
[s4;%- &]
[s5;:DrawRectLine`(Draw`&`,int`,int`,int`,int`,int`,const Color`&`):%- [@(0.0.255) void
]_[* DrawRectLine]([_^Draw^ Draw][@(0.0.255) `&]_[*@3 w], [@(0.0.255) int]_[*@3 x], 
[@(0.0.255) int]_[*@3 y], [@(0.0.255) int]_[*@3 width], [@(0.0.255) int]_[*@3 height], 
[@(0.0.255) int]_[*@3 lineWidth], [@(0.0.255) const]_[_^Color^ Color]_`&[*@3 color])&]
[s5;:DrawRectLine`(Draw`&`,Point`&`,Size`&`,int`,const Color`&`):%- [@(0.0.255) void]_[* D
rawRectLine]([_^Draw^ Draw][@(0.0.255) `&]_[*@3 w], [_^Point^ Point]_`&[*@3 pos], 
[_^Size^ Size]_`&[*@3 s], [@(0.0.255) int]_[*@3 lineWidth], [@(0.0.255) const]_[_^Color^ Colo
r]_`&[*@3 color])&]
[s5;:DrawRectLine`(Draw`&`,Rect`&`,int`,const Color`&`):%- [@(0.0.255) void]_[* DrawRectL
ine]([_^Draw^ Draw][@(0.0.255) `&]_[*@3 w], [_^Rect^ Rect]_`&[*@3 r], [@(0.0.255) int]_[*@3 lin
eWidth], [@(0.0.255) const]_[_^Color^ Color]_`&[*@3 color])&]
[s2; Draws a rectangle in Draw [%-*@3 w] defined by either [%-*@3 x,] 
[%-*@3 y,] [%-*@3 width,] [%-*@3 height][%- , or Point ][%-*@3 pos][%-  and] 
Size [%-*@3 s][%-  or Rect ][%-*@3 r][%- , with line width] [%-*@3 lineWidth] 
and Color [%-*@3 color].&]
[s3; &]
[s4; &]
[s2;l0;:RandomColor`(`):%- [_^Color^ Color]_[* RandomColor]()&]
[s2; Returns a random color.&]
[s3; &]
[s4;%- &]
[s5;:GetRainbowColor`(int`):%- [_^Color^ Color]_[* GetRainbowColor]([@(0.0.255) int]_[*@3 val
16])&]
[s2; Returns a rainbow color from an input value [%-*@3 val16] from 
0 (Red) to 0xFFFF.&]
[s3; &]
[s4; &]
[s5;:GetRect`(const Image`&`,const Rect`&`):%- [_^Image^ Image]_[* GetRect]([@(0.0.255) con
st]_[_^Image^ Image][@(0.0.255) `&]_[*@3 orig], [@(0.0.255) const]_[_^Rect^ Rect]_`&[*@3 r])&]
[s2; Returns a subimage delimited by Rect [%-*@3 r] taken from [%-*@3 orig].&]
[s3; &]
[s4;%- &]
[s5;:GetPixel`(const Image`&`,int`,int`):%- [@(0.0.255) const]_[_^RGBA^ RGBA]_`*[* GetPixel
](const Image_`&[*@3 img], [@(0.0.255) int]_[*@3 x], [@(0.0.255) int]_[*@3 y])&]
[s2; Gets the color of a pixel in image [%-*@3 img] in coordinates 
[%-*@3 x], [%-*@3 y].&]
[s2; This pixel is read`-only.&]
[s3;%- &]
[s4;%- &]
[s5;:GetPixel`(ImageBuffer`&`,int`,int`):%- [_^RGBA^ RGBA]_`*[* GetPixel](ImageBuffer_`&[*@3 i
mg], [@(0.0.255) int]_[*@3 x], [@(0.0.255) int]_[*@3 y])&]
[s2; Gets the color of a pixel in image [%-*@3 img] in coordinates 
[%-*@3 x], [%-*@3 y]. &]
[s2; This pixel is modifiable.&]
[s3; &]
[s4; &]
[s5;:IsValid`(const Image`&`,int`,int`):%- [@(0.0.255) bool]_[* IsValid]([@(0.0.255) const]_
[_^Image^ Image]_`&[*@3 img], [@(0.0.255) int]_[*@3 x], [@(0.0.255) int]_[*@3 y])&]
[s2; Returns true if coordinates [%-*@3 x] and [%-*@3 y] are inside Image 
[%-*@3 img].&]
[s3; &]
[s4; &]
[s5;:IsValid`(ImageBuffer`&`,int`,int`):%- [@(0.0.255) bool]_[* IsValid]([_^ImageBuffer^ Im
ageBuffer]_`&[*@3 img], [@(0.0.255) int]_[*@3 x], [@(0.0.255) int]_[*@3 y])&]
[s2; Returns true if coordinates [%-*@3 x] and [%-*@3 y] are inside ImageBuffer 
[%-*@3 img].&]
[s3; &]
[s4;%- &]
[s5;:IsValid`(const Image`&`,T`&`):%- [@(0.0.255) template]_<[@(0.0.255) class]_[*@4 T]>_[@(0.0.255) b
ool]_[* IsValid]([@(0.0.255) const]_[_^Image^ Image]_`&[*@3 img], [*@4 T]_`&[*@3 t])&]
[s2; Returns true if point [%-*@3 t] is inside Image [%-*@3 img].&]
[s3; &]
[s4;%- &]
[s5;:IsValid`(ImageBuffer`&`,T`&`):%- [@(0.0.255) template]_<[@(0.0.255) class]_[*@4 T]>_[@(0.0.255) b
ool]_[* IsValid]([_^ImageBuffer^ ImageBuffer]_`&[*@3 img], [*@4 T]_`&[*@3 t])&]
[s2; Returns true if point [%-*@3 t] is inside ImageBuffer [%-*@3 img].&]
[s3; &]
[ {{10000@1 [s0; [* Other functions]]}}&]
[s3; &]
[s5;:GetExtExecutable`(const String`):%- [_^String^ String]_[* GetExtExecutable]([@(0.0.255) c
onst]_[_^String^ String]_[*@3 ext])&]
[s2; Gets the program that will open by default the files with extension 
[%-*@3 ext].&]
[s0; &]
[s0; -|[/ Example:]&]
[s0; [/ -|GetExtExecutable(`"html`") `-> `"Firefox.exe`"]&]
[s3; &]
[s4;%- &]
[s5;:GetDriveList`(`):%- [_^Array^ Array]<[_^String^ String]>_[* GetDriveList]()&]
[s2; Returns an array with the paths to all drives, internal or external, 
identified in the system.&]
[s3; &]
[s4;%- &]
[s5;:Getcwd`(`):%- [_^String^ String]_[* Getcwd]()&]
[s2; Returns an absolute file name representing the current process 
working directory.&]
[s6; Replaced by GetCurrentDurectory(.)&]
[s3;%- &]
[s4;%- &]
[s5;:Chdir`(const String`&`):%- [@(0.0.255) bool]_[* Chdir]_([@(0.0.255) const]_[_^String^ St
ring]_`&[*@3 folder])&]
[s2; Sets the process`'s working directory to [%-*@3 folder].&]
[s0;l288; Returns true if successful.&]
[s6; Replaced by SetCurrentDurectory().&]
[s3; &]
[s4;%- &]
[s5;:GetDesktopManagerNew`(`):%- [_^String^ String]_[* GetDesktopManagerNew]()&]
[s2; A more complete version of GetDesktopManager() based on GetOsInfo().&]
[s3; &]
[s4;%- &]
[s5;:NON`_REENTRANT`_V:%- [* NON`_REENTRANT`_V]&]
[s5;:NON`_REENTRANT`(v`):%- [* NON`_REENTRANT]([*@3 v])&]
[s2; It returns [%-*@3 v] if the function has been called in the same 
thread and it has not returned yet.&]
[s0;l288; It is useful to avoid a function to be called twice in 
different situations, for example:&]
[s0;#l288;i150;O0; The function calls Ctrl`::ProcessEvents(); If the 
function has been called when a button has been pressed, this 
button can be pressed again so the function can be called twice.&]
[s0;#l288;i150;O0; The function is called by ChildLostFocus() and 
it opens a new window using, lets say, PromptOK(). This way ChildLostFocus 
will be called twice: the second one because PromptOK() makes 
the field to loose the focus.&]
[s0; ]]