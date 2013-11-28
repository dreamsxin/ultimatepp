topic "Text formatting";
[2 $$0,0#00000000000000000000000000000000:Default]
[i448;a25;kKO9;2 $$1,0#37138531426314131252341829483380:class]
[l288;2 $$2,0#27521748481378242620020725143825:desc]
[0 $$3,0#96390100711032703541132217272105:end]
[H6;0 $$4,0#05600065144404261032431302351956:begin]
[i448;a25;kKO9;2 $$5,0#37138531426314131252341829483370:item]
[l288;a17;*@5;1 $$6,6#70004532496200323422659154056402:requirement]
[l288;i1121;b17;O9;~~~.1408;2 $$7,0#10431211400427159095818037425705:param]
[{_}%EN-US 
[s0; Text formatting&]
[s5;K:`:`:Format`(const char`*`,const`:`:Vector`<`:`:Value`>`&`):%- [^`:`:String^ Strin
g]_Format[@(64) (][@(0.0.255) const][@(64) _][@(0.0.255) char][@(64) _`*][@3 format][@(64) , 
][@(0.0.255) const][@(64) _][^`:`:Vector^@(64) Vector][@(64) <][^`:`:Value^@(64) Value][@(64) >
`&_][@3 args][@(64) )]&]
[s5;%- [^`:`:String^ String]_Format[@(64) (][@(0.0.255) const][@(64) _][@(0.0.255) char][@(64) _`*
][@3 format][@(64) , ][^`:`:Value^@(64) Value][@(64) _][@3 arg][,@3 1][@3  
][@4 `[], [^`:`:Value^@(64) Value][@(64) _][@3 arg][,@3 n][@4 `]...] [@(64) )]&]
[s5;K:`:`:Format`(int`,const char`*`,const`:`:Vector`<`:`:Value`>`&`):%- [^`:`:String^ S
tring]_Format[@(64) (][@(0.0.255) int][@(64) _][@3 language][@(64) , ][@(0.0.255) const][@(64) _
][@(0.0.255) char][@(64) _`*][@3 s][@(64) , ][@(0.0.255) const][@(64) _][^`:`:Vector^@(64) Vect
or][@(64) <][^`:`:Value^@(64) Value][@(64) >`&_][@3 v][@(64) )]&]
[s5;%- [^`:`:String^ String]_Format[@(64) (][@(0.0.255) int][@(64) _][@3 language][@(64) , 
][@(0.0.255) const][@(64) _][@(0.0.255) char][@(64) _`*][@3 format][@(64) , 
][^`:`:Value^@(64) Value][@(64) _][@3 arg][,@3 1][@3  ][@4 `[], [^`:`:Value^@(64) Value][@(64) _][@3 a
rg][,@3 n][@4 `]...] [@(64) )]&]
[s2; &]
[s0; Format forms output text based on [*@3 format], inserting actual 
arguments to placeholders. Argument values are converted to text 
using formatters. U`+`+ specifies set of standard formatters; 
application can freely register their own formatters for specific 
Value types too.&]
[s0; &]
[s0; Note that the variable number of Value arguments is implemented 
by overloading the Format up to 20 parameters.&]
[s0; &]
[s0; Placeholders start with [* %] and have format:&]
[s0; &]
[s0; [* %][*@4 `[][*@(0.0.255) commands][*@4 `]`[][*@(0.0.255) options][*@4 `]`[][*@(0.0.255) forma
tter`-id][*@4 `]`[][*@(0.0.255) ``][*@4 `]]&]
[s0; &]
[s0; [*@(0.0.255) commands] are interpreted by Format routine (not 
specific formatter). Each command sequence ends with character 
specifying the kind of command, this delimits it from options 
and/or formatter.&]
[s0; &]
[s0; Available commands:&]
[s0; &]
[ {{1785:8215^ [s0; [*/@(0.0.255) position][* :]]
::= [s0; Seeks to an argument at [*/@(0.0.255) position]. Allows to `"reorganize`" 
ordering of arguments, useful with translations.]
::^ [s0; [*/@(0.0.255) width][* <]]
::= [s0; Places formatter result into field with [*/@(0.0.255) width] characters, 
aligns left.]
::^ [s0; [*/@(0.0.255) width][* >]]
::= [s0; Places formatter result into field with [*/@(0.0.255) width] characters, 
aligns right.]
::^ [s0; [*/@(0.0.255) width][* `=]]
::= [s0; Places formatter result into field with [*/@(0.0.255) width] characters, 
aligns to center.]
::^ [s0; [* `[][*/@(0.0.255) text][* `]`~]]
::= [s0; If argument is [* Null], uses [*/@(0.0.255) text] instead of formatter 
result.]}}&]
[s0; &]
[s0; [*@(0.0.255) formatter`-id][*  ]must consist of alpha characters 
only, unlike C identifiers, digits or `'`_`' are not allowed. 
Everything between [*@(0.0.255) commands] and [*@(0.0.255) formatter`-id] 
is considered to be [*@(0.0.255) options] and passed to formatter. 
Note that [*@(0.0.255) formatter`-id] is Value type specific `- 
the same name can specify different formatter depending on Value 
type. [*@(0.0.255) formatter`-id] is case`-sensitive.&]
[s0; &]
[s0; Character [* `*] in [*@(0.0.255) options] section is replaced by 
argument converted using AsString.&]
[s0; &]
[s0; If [*@(0.0.255) options] are to contain alpha characters, they 
need to be escaped using [* `[ `]] to distinguish options from 
formatter`-id.&]
[s0; &]
[s0; Placeholder can end either by non`-alpha character or by [* ``]. 
formatter`-id can be left empty; in that case Format uses AsString 
to convert Value to text (defined in RichValue interface) `- 
the most trivial placeholder is therefore [* %``].&]
[s0; &]
[s0; While Format implements all of classic printf formatter, please 
notice two incompatibilities:&]
[s0; &]
[s0;i150;O0; All arguments of Format must be convertible (and are 
converted) to Value. On the positive side, Value performs natural 
conversions like double `-> int, so it is possible to e.g. use 
%d for double value.&]
[s0; &]
[s0;i150;O0; formatter`-id `"eats`" all alpha characters. This is 
a problem when non`-placeholder alpha character is to follow 
placeholder, e.g. %dpt `- this has to be written as %d``pt (`` 
delimits the formatter`-id).&]
[s0; &]
[s0; &]
[s0; [*/ Standard formatters]&]
[s0; &]
[s0; [* default formatter]&]
[s0; &]
[s0; If formatter`-id is empty, Value is converted using AsString 
(implemented in RichValue interface).&]
[s0; &]
[s0; &]
[s0; [* printf formatters]&]
[s0; &]
[s0; Most printf formatters are supported:&]
[s0; &]
[s0; [* c d i o x X ld li lo lx lX e E f g G s]&]
[s0; &]
[s0; Please refer to printf documentation for the description.&]
[s0; &]
[s0; &]
[s0; [* switch formatter]&]
[s0; &]
[s0; This is special number formatter (registered for double, int 
and int64 values). [*@(0.0.255) options] of switch formatter contain 
a list of values and respective texts `- a text for actual argument 
is printed. [*@(0.0.255) formatter`-id] is [* s].&]
[s0; &]
[s0; The format of switch [*@(0.0.255) options] is&]
[s0; &]
[s0; [*@4 `[][*@(0.0.255) modulo][* %][*@4 `]`[][*@(0.0.255) case][* :][*@(0.0.255) text];[*@4 `]...`[
][*@(0.0.255) default][*@4 `]]&]
[s0; &]
[ {{1395:8605 [s0; [*@(0.0.255) modulo]]
:: [s0; If this optional part is present, modulo of argument is used 
for switch cases.]
:: [s0; [*@(0.0.255) case]]
:: [s0; Numeric case.]
:: [s0; [*@(0.0.255) text]]
:: [s0; Text for given numeric case.]
:: [s0; [*@(0.0.255) default]]
:: [s0; Default text when no case is matched.]}}&]
[s0; &]
[s0; Note that as text usually contains letters, whole switch options 
section is almost always escaped using [* `[] [* `]].&]
[s0; &]
[s0; &]
[s0; [* simple integer formatters]&]
[s0; &]
[s0; These formatters are registered for double, int and int64 values.&]
[s0; &]
[ {{1426:8574h1;@(204) [s0; [*@(0.0.255) formatter`-id]]
:: [s0; Description]
::@2 [s0;%- [* month]]
:: [s0; [C Lower`-case month name.]]
:: [s0;%- [* Month]]
:: [s0; [C Month name with first letter upper`-case, rest lower`-case.]]
:: [s0;%- [* MONTH]]
:: [s0; [C Upper`-case month name.]]
:: [s0;%- [* mon]]
:: [s0; [C Abbreviated lower`-case month name.]]
:: [s0;%- [* Mon]]
:: [s0; [C Abbreviated month name, first letter upper`-case, rest lower`-case.]]
:: [s0;%- [* MON]]
:: [s0; [C Abbreviated upper`-case month name.]]
:: [s0;%- [* day]]
:: [s0; [C Lower`-case day name.]]
:: [s0;%- [* Day]]
:: [s0; [C Day name with first letter upper`-case, rest lower`-case.]]
:: [s0;%- [* DAY]]
:: [s0; [C Upper`-case day name.]]
:: [s0;%- [* dy]]
:: [s0; [C Abbreviated lower`-case day name.]]
:: [s0;%- [* Dy]]
:: [s0; [C Abbreviated day name, first letter upper`-case, rest lower`-case.]]
:: [s0;%- [* DY]]
:: [s0; [C Abbreviated upper`-case day name.]]
:: [s0;%- [* tw]]
:: [s0; [C 12`-hour modulo format.]]
:: [s0;%- [* a]]
:: [s0; [C Letter format, 1: a, 2: b, ... 26: z, 27: aa, ...]]
:: [s0;%- [* A]]
:: [s0; [C Letter format, 1: a, 2: b, ... 26: z, 27: aa, ...]]
:: [s0;%- [* r]]
:: [s0; [C Lower`-case roman numbers.]]
:: [s0;%- [* R]]
:: [s0; [C Upper`-case roman numbers.]]}}&]
[s0; &]
[s0; &]
[s0; [* alternate real number formatters]&]
[s0; &]
[s0;O9;~~~.352; [* n]-|fixed decimals&]
[s0;O9;~~~.352; [* v]-|valid decimals&]
[s0;O9;~~~.352; [* ne], [* ve]-|force exponential notation&]
[s0;O9;~~~.352; [* nf], [* vf]-|force fixed notation&]
[s0;O9;~~~.352; [* nl], [* vl]-|language`-based formatting&]
[s0; &]
[s0; The format of [*@(0.0.255) options] is&]
[s0; &]
[s0; [*@4 `[][* `+][*@4 `]`[`[][* `-][*@4 `]][*@(0.0.255) digits][*@4 `]`[][* !][*@4 `]`[][* `^][*@4 `[][* `+
][*@4 `]][*@(0.0.255) expdig][*@4 `]]&]
[s0; &]
[s0;O9;~~~.576; `+-|always prepend sign&]
[s0;O9;~~~.576; [*@4 `[][* `-][*@4 `]][*@(0.0.255) digits][@(0.0.255) -|]number 
of decimals to print (negative `= left of decimal point, default 
`= 6)&]
[s0;O9;~~~.576; [* !]-|keep insignificant zeros&]
[s0;O9;~~~.576; [* `^]-|exponent options:&]
[s0;l160;O9;~~~.640; [* `+]-|always prepend sign to exponent&]
[s0;l160;O9;~~~.640; [*@(0.0.255) expdig][@(0.0.255) -|]exponent padding 
width&]
[s0; &]
[s0; &]
[s0; &]
[s0;%- [*/ Examples of standard formatters]&]
[s0; &]
[ {{5311:4689 [s0;%- Format(`"[* %d], [* %s]`", 123, `"TEXT`")]
:: [s0;%- [C 123, TEXT]]
:: [s0;%- Format(`"[* %2:s], [* %1:d]`", 123, `"TEXT`")]
:: [s0;%- [C TEXT, 123]]
:: [s0;%- Format(`"[* %010d]`", 123)]
:: [s0;%- [C 0000000123]]
:: [s0;%- Format(`"[* %0`*d]`", 11, 123)]
:: [s0;%- [C 00000000123]]
:: [s0;%- Format(`"`|[* %20<d]`|`", 123)]
:: [s0;%- [C `|123                 `|]]
:: [s0;%- Format(`"`|[* %20>d]`|`", 123)]
:: [s0;%- [C `|                 123`|]]
:: [s0;%- Format(`"`|[* %20`=d]`|`", 123)]
:: [s0;%- [C `|        123         `|]]
:: [s0;%- Format(`"[* %d``]pt`", 123)]
:: [s0;%- [C 123pt]]
:: [s0;%- Format(`"[* %`[empty`]`~d], [* %`[empty`]`~d]`", 123, Null)]
:: [s0;%- [C 123, empty]]
:: [s0;%- Format(`"[* %``]`", 123)]
:: [s0;%- [C 123]]
:: [s0;%- Format(`"[* %c]`", 65)]
:: [s0;%- [C A]]
:: [s0;%- Format(`"[* %d]`", 123)]
:: [s0;%- [C 123]]
:: [s0;%- Format(`"[* %i]`", 123)]
:: [s0;%- [C 123]]
:: [s0;%- Format(`"[* %o]`", 123)]
:: [s0;%- [C 173]]
:: [s0;%- Format(`"[* %x]`", 123)]
:: [s0;%- [C 7b]]
:: [s0;%- Format(`"[* %X]`", 123)]
:: [s0;%- [C 7B]]
:: [s0;%- Format(`"[* %e]`", 1.23)]
:: [s0;%- [C 1.230000e`+000]]
:: [s0;%- Format(`"[* %E]`", 1.23)]
:: [s0;%- [C 1.230000E`+000]]
:: [s0;%- Format(`"[* %f]`", 1.23)]
:: [s0;%- [C 1.230000]]
:: [s0;%- Format(`"[* %g]`", 1.23)]
:: [s0;%- [C 1.23]]
:: [s0;%- Format(`"[* %G]`", 1.23)]
:: [s0;%- [C 1.23]]
:: [s0;%- Format(`"[* %n]`", 1.23)]
:: [s0;%- [C 1.23]]
:: [s0;%- Format(`"[* %1n]`", 1.23)]
:: [s0;%- [C 1.2 ][/ (explicit number of decimals)]]
:: [s0;%- Format(`"[* %3!n]`", 1.23)]
:: [s0;%- [C 1.230 ][/ (force insignificant zeros)]]
:: [s0;%- Format(`"[* %ne]`", 1.23)]
:: [s0;%- [C 1.23e0]]
:: [s0;%- Format(`"[* %2`^`+3ne]`", 1.23)]
:: [s0;%- [C 1.2e`+000 ][/ (exponent formatting)]]
:: [s0;%- Format(`"[* %nf]`", 1.23e30)]
:: [s0;%- [C 1230000000000000000000000000000]]
:: [s0;%- Format(`"[* %nl]`", 1.23)]
:: [s0;%- [C 1,23]]
:: [s0;%- Format(`"[* %v]`", 1.23)]
:: [s0;%- [C 1.23]]
:: [s0;%- Format(`"[* %2v]`", 1.23)]
:: [s0;%- [C 1.2 ][/ (2 valid digits)]]
:: [s0;%- Format(`"[* %2v]`", 123)]
:: [s0;%- [C 120 ][/ (2 valid digits)]]
:: [s0;%- Format(`"[* %ve]`", 1.23)]
:: [s0;%- [C 1.23e0]]
:: [s0;%- Format(`"[* %vf]`", 1.23e30)]
:: [s0;%- [C 1230000000000000000000000000000]]
:: [s0;%- Format(`"[* %vl]`", 1.23)]
:: [s0;%- [C 1,23]]
:: [s0;%- Format(`"[* %`[1:one;2:two;3:three;another`]s]`", 2)]
:: [s0;%- [C two]]
:: [s0;%- Format(`"[* %`[1:one;2:two;3:three;another`]s]`", 20)]
:: [s0;%- [C another]]
:: [s0;%- Format(`"[* %`[3%1:one;2:two;3:three;another`]s]`", 20)]
:: [s0;%- [C two]]
:: [s0;%- Format(`"[* %month]`", 6)]
:: [s0;%- [C june]]
:: [s0;%- Format(`"[* %Month]`", 6)]
:: [s0;%- [C June]]
:: [s0;%- Format(`"[* %MONTH]`", 6)]
:: [s0;%- [C JUNE]]
:: [s0;%- Format(`"[* %mon]`", 6)]
:: [s0;%- [C jun]]
:: [s0;%- Format(`"[* %Mon]`", 6)]
:: [s0;%- [C Jun]]
:: [s0;%- Format(`"[* %MON]`", 6)]
:: [s0;%- [C JUN]]
:: [s0;%- Format(`"[* %day]`", 6)]
:: [s0;%- [C saturday]]
:: [s0;%- Format(`"[* %Day]`", 6)]
:: [s0;%- [C Saturday]]
:: [s0;%- Format(`"[* %DAY]`", 6)]
:: [s0;%- [C SATURDAY]]
:: [s0;%- Format(`"[* %dy]`", 6)]
:: [s0;%- [C sa]]
:: [s0;%- Format(`"[* %Dy]`", 6)]
:: [s0;%- [C Sa]]
:: [s0;%- Format(`"[* %DY]`", 6)]
:: [s0;%- [C SA]]
:: [s0;%- Format(`"[* %tw]`", 0)]
:: [s0;%- [C 12]]
:: [s0;%- Format(`"[* %tw]`", 5)]
:: [s0;%- [C 5]]
:: [s0;%- Format(`"[* %tw]`", 15)]
:: [s0;%- [C 3]]
:: [s0;%- Format(`"[* %0tw]`", 15)]
:: [s0;%- [C 03]]
:: [s0;%- Format(`"[* %a]`", 1)]
:: [s0;%- [C a]]
:: [s0;%- Format(`"[* %a]`", 123)]
:: [s0;%- [C es]]
:: [s0;%- Format(`"[* %A]`", 1)]
:: [s0;%- [C A]]
:: [s0;%- Format(`"[* %A]`", 123)]
:: [s0;%- [C ES]]
:: [s0;%- Format(`"[* %r]`", 8)]
:: [s0;%- [C viii]]
:: [s0;%- Format(`"[* %R]`", 1231)]
:: [s0;%- [C MCCXXXI]]
:: [s0;%- Format(`"[* %``]`", GetSysDate())]
:: [s0;%- [C 08/25/2006]]
:: [s0;%- Format(`"[* %``]`", GetSysTime())]
:: [s0;%- [C 08/25/2006 20:37:09]]
:: [s0;%- Format(`"[* %``]`", `"text`")]
:: [s0;%- [C text]]
:: [s0;%- Format(`"[* %``]`", GetSysDate())]
:: [s0;%- [C 25.08.2006]]}}&]
[s0; &]
[s0;%- Registering custom formatters&]
[s0; &]
[s5;K:`:`:Formatter`:`:typedef:%- typedef_[^`:`:String^ String]_(`*Formatter)([@(0.0.255) c
onst][@(64) _][^`:`:Formatting^@(64) Formatting][@(64) `&_fmt)]&]
[s2; Formatter has to have form of function with single [^`:`:Formatting^ Formatting] 
argument.&]
[s0; &]
[s1;K:`:`:Formatting`:`:struct:%- [@(0.0.255) struct][@(64) _]Formatting&]
[s2; This structure passes all informations to format Value argument 
to the formatter.&]
[s0; &]
[s5;K:`:`:Formatting`:`:language:%- [@(0.0.255) int][@(64) _]language&]
[s2; Language of resulting text.&]
[s0; &]
[s5;K:`:`:Formatting`:`:arg:%- [^`:`:Value^ Value]_arg&]
[s2; Actual argument.&]
[s0; &]
[s5;K:`:`:Formatting`:`:format:%- [^`:`:String^ String]_format&]
[s2; Formatting [*@(0.0.255) options].&]
[s0; &]
[s5;K:`:`:Formatting`:`:id:%- [^`:`:String^ String]_id&]
[s2; Formatter`-id.&]
[s0; &]
[s0; &]
[s5;K:`:`:RegisterFormatter`(int`,const char`*`,`:`:Formatter`):%- [@(0.0.255) void][@(64) _
]RegisterFormatter[@(64) (][@(0.0.255) int][@(64) _][@3 type][@(64) , ][@(0.0.255) const][@(64) _
][@(0.0.255) char][@(64) _`*][@3 id][@(64) , ][^`:`:Formatter^@(64) Formatter][@(64) _][@3 f][@(64) )
]&]
[s2; Registers formatter for specific Value [%-*@3 type]. If [%-*@3 type] 
is VALUE`_V, formatter is applied to all Value types if no formatter 
for specific type is specified.&]
[s0; &]
[s5;K:`:`:RegisterNumberFormatter`(const char`*`,`:`:Formatter`):%- [@(0.0.255) void][@(64) _
]RegisterNumberFormatter[@(64) (][@(0.0.255) const][@(64) _][@(0.0.255) char][@(64) _`*][@3 i
d][@(64) , ][^`:`:Formatter^@(64) Formatter][@(64) _][@3 f][@(64) )]&]
[s2; Registers formatter for int, double and int64 types.&]
[s0; &]
[s5;K:`:`:RegisterStringFormatter`(const char`*`,`:`:Formatter`):%- [@(0.0.255) void][@(64) _
]RegisterStringFormatter[@(64) (][@(0.0.255) const][@(64) _][@(0.0.255) char][@(64) _`*][@3 i
d][@(64) , ][^`:`:Formatter^@(64) Formatter][@(64) _][@3 f][@(64) )]&]
[s2; Registers formatter for String and WString types.&]
[s0; &]
[s5;K:`:`:RegisterDateTimeFormatter`(const char`*`,`:`:Formatter`):%- [@(0.0.255) void][@(64) _
]RegisterDateTimeFormatter[@(64) (][@(0.0.255) const][@(64) _][@(0.0.255) char][@(64) _`*][@3 i
d][@(64) , ][^`:`:Formatter^@(64) Formatter][@(64) _][@3 f][@(64) )]&]
[s2; Registers formatter for Date and Time types.&]
[s0; &]
[s5;K:`:`:RegisterValueFormatter`(const char`*`,`:`:Formatter`):%- [@(0.0.255) void][@(64) _
]RegisterValueFormatter[@(64) (][@(0.0.255) const][@(64) _][@(0.0.255) char][@(64) _`*][@3 id
][@(64) , ][^`:`:Formatter^@(64) Formatter][@(64) _][@3 f][@(64) )]&]
[s2; Registers formatter to be applied when no formatter for specific 
type is specified.&]
[s0; ]