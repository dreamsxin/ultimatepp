topic "template <class T, class V, class HashFn>  class AIndex";
[2 $$0,0#00000000000000000000000000000000:Default]
[i448;a25;kKO9;2 $$1,0#37138531426314131252341829483380:class]
[l288;2 $$2,0#27521748481378242620020725143825:desc]
[0 $$3,0#96390100711032703541132217272105:end]
[H6;0 $$4,0#05600065144404261032431302351956:begin]
[i448;a25;kKO9;2 $$5,0#37138531426314131252341829483370:item]
[l288;a17;*@5;1 $$6,6#70004532496200323422659154056402:requirement]
[l288;i1121;b17;O9;~~~.1408;2 $$7,0#10431211400427159095818037425705:param]
[{_}%EN-US 
[s5;%- [*@(64) template_<][*@(0.0.255) class][*@(64) _][*@4 T][*@(64) , ][*@(0.0.255) class][*@(64) _
][*@4 V][*@(64) , ][*@(0.0.255) class][*@(64) _][*@4 HashFn][*@(64) >__][*@(0.0.255) class][*@(64) _
][* AIndex]&]
[s0;:`:`:AbortExc`:`:`:`:AbortExc`(`): [t class ][*t AIndex]&]
[s0; &]
[s0; [*C@4 T]-|Type of [^topic`:`/`/CoreTopics`/src`/AIndex`$en`-us^ elements] 
to store. T must satisfy requirements for container flavor identified 
by parameter V and must have [*C operator`=`=] defined.&]
[s0; [*C@4 V]-|Basic random access container.&]
[s0; [*C@4 HashFn]-|Hashing class. Must have defined [*C unsigned operator()(const 
T`& x)] method returning hash value for elements.&]
[s0; This template class adds associative capabilities to basic random 
access containers, forming flavors of Index. It is used as base 
class for concrete index flavors, [* Index] and [* ArrayIndex].&]
[s0; It allows adding elements at the end of sequence in constant 
amortized time like basic random container. Additionally, it 
also allows fast retrieval of a position of the element with 
specified value. Hashing is used for this operation. AIndex stores 
hash`-values of elements, so it has no sense to cache them externally.&]
[s0; Building of internal hash maps of AIndex is always deferred 
till search operation. This effectively avoids unneeded remapping 
if large number of elements is added.&]
[s0; Removing elements from an AIndex causes an interesting problem. 
While it is possible to simply remove (or insert) an element 
at a specified position, such operation has to move a lot of 
elements and also scratches internal hash maps. Thus removing 
elements this way is slow, especially when combined with searching.&]
[s0; The solution for this problem is [*/ unlinking] of elements. Unlinked 
elements are not removed from index, but they are [*/ ignored][/  
]by search operations. Unlinking is a simple, constant time, 
fast operation. Further, it is possible to place an element at 
the first available unlinked position (rather than to the end 
of sequence) using the [* Put] method, reusing unlinked position 
in short constant time.&]
[s0; The only problem of unlinking is that it breaks the so`-called 
[* multi`-key ordering]. This term means that if there are more 
elements with the same value in the index and they are iterated 
through using the FindNext method, their positions (got as the 
result of Find and subsequent FindNext methods) are in ascending 
order. The problem is that it is impossible to implement placing 
elements at unlinked positions in short time while preserving 
this ordering. On the other hand, usage scenarios for indexes 
show that need for unlinking elements and multi`-key ordering 
is almost always disjunct. For the rest of the cases, it is always 
possible to restore ordering by the [* Reindex] or the [* Sweep] 
method.&]
[s0; Like any other NTL container, AIndex is [*/^topic`:`/`/Core`/srcdoc`/Moveable`$en`-us^ m
oveable][*/  ]type with [*/^topic`:`/`/Core`/srcdoc`/Moveable`$en`-us^ pick 
and optional deep copy] transfer semantics, although these features 
are more important in derived concrete index flavors.&]
[s0; Members&]
[s0; &]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Add`(const T`&`,unsigned`):%- [@(0.0.255) void]_[* Add]([@(0.0.255) cons
t]_[*@4 T]`&_[*@3 x], [@(0.0.255) unsigned]_[*@3 `_hash])&]
[s2; Adds a new element with a precomputed hash value.The precomputed 
hash value must be the same as the hash value that would be the 
result of HashFn. The benefit of this variant is that sometimes 
you can compute hash`-value as the part of an other process, 
like fetching strings from an input stream.&]
[s6; Requires T to have deep copy constructor.&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 x]-|Element to add.&]
[s7; [*C@3 `_hash]-|Precomputed hash value.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Add`(const T`&`):%- [@(0.0.255) void]_[* Add]([@(0.0.255) const]_[*@4 T]`&
_[*@3 x])&]
[s2; Adds a new element to AIndex.&]
[s6; Requires T to have deep copy constructor.&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 x]-|Element to add.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Find`(const T`&`,unsigned`)const:%- [@(0.0.255) int]_[* Find]([@(0.0.255) c
onst]_[*@4 T]`&_[*@3 x], [@(0.0.255) unsigned]_[*@3 `_hash])_[@(0.0.255) const]&]
[s2; Retrieves the position of the first element with the specified 
value in AIndex, using a precomputed hash value. The precomputed 
hash value must be the same as the hash value that would be result 
of HashFn. If multi`-key ordering is not broken and more than 
one element with the same value exists in AIndex, the lowest 
position is retrieved. If the specified value does not exist 
in AIndex, a negative number is returned. Unlinked elements are 
ignored.&]
[s7; [*C@3 x]-|Element to find.&]
[s7; [*C@3 `_hash]-|Precomputed hash value.&]
[s7; [*/ Return value]-|Position of the element or negative value if 
value is not in AIndex.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Find`(const T`&`)const:%- [@(0.0.255) int]_[* Find]([@(0.0.255) const]_[*@4 T
]`&_[*@3 x])_[@(0.0.255) const]&]
[s2; Retrieves the position of the first element with the specified 
value in AIndex. If multi`-key ordering is not broken and more 
than one element with the same value exists in AIndex, lowest 
position is retrieved. If the specified value does not exist 
in AIndex, a negative number is returned. Unlinked elements are 
ignored.&]
[s7; [*C@3 x]-|Element to find.&]
[s7; [*/ Return value]-|Position of the element or negative value if 
value is not in AIndex.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:FindNext`(int`)const:%- [@(0.0.255) int]_[* FindNext]([@(0.0.255) int]_[*@3 i
])_[@(0.0.255) const]&]
[s2; Retrieves the position of the next element with the same value 
as the element at specified position. If multi`-key ordering 
is not broken and more than one element with that value exists 
in AIndex, the lowest position greater than specified one is 
retrieved, so positions returned by subsequent calls to FindNext 
are in ascending order. When there are no more elements with 
the required value, a negative number is returned. Unlinked elements 
are ignored.&]
[s7; [*C@3 i]-|Position of the element.&]
[s7; [*/ Return value]-|Position of the next element with same value.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:FindLast`(const T`&`,unsigned`)const:%- [@(0.0.255) int]_[* FindLast](
[@(0.0.255) const]_[*@4 T]`&_[*@3 x], [@(0.0.255) unsigned]_[*@3 `_hash])_[@(0.0.255) const]&]
[s2; Retrieves the position of the last element with specified value 
in AIndex, using a precomputed hash value. The precomputed hash 
value must be the same as the hash value that would be the result 
of HashFn. If multi`-key ordering is not broken and more than 
one element with the same value exists in AIndex, the greatest 
position is retrieved. If the specified value does not exist 
in AIndex, a negative number is returned. Unlinked elements are 
ignored.&]
[s7; [*C@3 x]-|Element to find.&]
[s7; [*C@3 `_hash]-|Precomputed hash value.&]
[s7; [*/ Return value]-|Position of the element or negative number if 
value is not in AIndex.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:FindLast`(const T`&`)const:%- [@(0.0.255) int]_[* FindLast]([@(0.0.255) c
onst]_[*@4 T]`&_[*@3 x])_[@(0.0.255) const]&]
[s2; Retrieves the position of the last element with specified value 
in AIndex. If multi`-key ordering is not broken and more than 
one element with the same value exists in AIndex, the greatest 
position is retrieved. If element does not exist in AIndex, a 
negative number is returned. Unlinked elements are ignored.&]
[s7; [*C@3 x]-|Element to find.&]
[s7; [*C@3 `_hash]-|Precomputed hash value.&]
[s7; [*/ Return value]-|Position of the element or negative number if 
value is not in AIndex.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:FindPrev`(int`)const:%- [@(0.0.255) int]_[* FindPrev]([@(0.0.255) int]_[*@3 i
])_[@(0.0.255) const]&]
[s2; Retrieves the position of the previous element with the same 
value as the element at the specified position. If multi`-key 
ordering is not broken and more than one element with that value 
exists in AIndex, the greatest position lower than specified 
one is retrieved (so that positions got by subsequent calls to 
FindNext are in descending order). When there are no more elements 
with required value, negative number is returned. Unlinked elements 
are ignored.&]
[s7; [*C@3 i]-|Position of the element.&]
[s7; [*/ Return value]-|Position of the previous element with same value.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:FindAdd`(const T`&`,unsigned`):%- [@(0.0.255) int]_[* FindAdd]([@(0.0.255) c
onst]_[*@4 T]`&_[*@3 key], [@(0.0.255) unsigned]_[*@3 `_hash])&]
[s2; Retrieves position of first element with specified value in 
AIndex, using a precomputed hash value. Precomputed hash value 
must be same as hash value that would be result of HashFn. If 
multi`-key ordering is not broken and more than one element with 
the same value exists in AIndex, the lowest position is retrieved. 
If element does not exist in AIndex, it is added to AIndex and 
position of this newly added element is returned. Unlinked elements 
are ignored.&]
[s7; [*C@3 key]-|Element to find or add.&]
[s7; [*C@3 `_hash]-|Precomputed hash value.&]
[s7; [*/ Return value]-|Position of the found or added element.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:FindAdd`(const T`&`):%- [@(0.0.255) int]_[* FindAdd]([@(0.0.255) const]_
[*@4 T]`&_[*@3 key])&]
[s2; Retrieves position of first element with specified value in 
AIndex. If multi`-key ordering is not broken and more than one 
element with the same value exists in AIndex, lowest position 
is retrieved. If element does not exist in AIndex, it is added 
to AIndex and position of this newly added element is returned. 
Unlinked elements are ignored.&]
[s7; [*C@3 key]-|Element to find or add.&]
[s7; [*/ Return value]-|Position of the found or added element.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:operator`<`<`(const T`&`):%- [_^`:`:AIndex^ AIndex]`&_[* operator<<]([@(0.0.255) c
onst]_[*@4 T]`&_[*@3 x])&]
[s2; Operator replacement of [* void Add(const T`& x)]. By returning 
reference to AIndex it allows adding multiple elements in a single 
expression, thus e.g. allowing to construct a temporary Index 
as part of an expression like Foo((Index<int>() << 1 << 2)).&]
[s6; Requires T to have deep copy constructor.&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 newt]-|Element to be added.&]
[s7; [*/ Return value]-|Reference to AIndex.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Unlink`(int`):%- [@(0.0.255) void]_[* Unlink]([@(0.0.255) int]_[*@3 i])&]
[s2; Unlinks the element at the specified position. The unlinked 
item stays in AIndex but is ignored by any Find operation.&]
[s7; [*C@3 i]-|Position of item to unlink.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Put`(const T`&`,unsigned`):%- [@(0.0.255) int]_[* Put]([@(0.0.255) const
]_[*@4 T]`&_[*@3 x], [@(0.0.255) unsigned]_[*@3 `_hash])&]
[s2; If there are any unlinked elements in AIndex, one of them is 
replaced by specified value. If there are no unlinked elements, 
the element with the specified value is appended to the end of 
AIndex using [* Add]. The precomputed hash should be same as the 
result of HashFn. The position of the placed element is returned.&]
[s6; Invalidates multi`-key ordering.&]
[s6; Requires T to have deep copy constructor.&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 x]-|Element to put into AIndex.&]
[s7; [*C@3 `_hash]-|Precomputed hash value.&]
[s7; [*/ Return value]-|Position where the element was placed.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Put`(const T`&`):%- [@(0.0.255) int]_[* Put]([@(0.0.255) const]_[*@4 T]`&_
[*@3 x])&]
[s2; If there are any unlinked elements in AIndex, one of them is 
replaced by specified value. If there are no unlinked elements, 
the element with the specified value is appended to the end of 
AIndex using [* Add]. The position of the placed element is returned.&]
[s6; Invalidates multi`-key ordering.&]
[s6; Requires T to have deep copy constructor.&]
[s6; Invalidates iterators to AIndex.&]
[s7; [*C@3 x]-|Element to put into AIndex.&]
[s7; [*/ Return value]-|Position where element is placed.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:FindPut`(const T`&`,unsigned`):%- [@(0.0.255) int]_[* FindPut]([@(0.0.255) c
onst]_[*@4 T]`&_[*@3 key], [@(0.0.255) unsigned]_[*@3 `_hash])&]
[s2; Retrieves the position of the first element with the specified 
value in AIndex, using a precomputed hash value. The precomputed 
hash value must be the same as the hash value that would be the 
result of HashFn. If the specified value does not exist in the 
AIndex, it is placed to it using [* Put(const T`& x, unsigned `_hash).] 
The position of the found or placed element is returned.&]
[s6;~~~.992; Invalidates multi`-key ordering.&]
[s6; Requires T to have deep copy constructor.&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 key]-|Element to find or put.&]
[s7; [*C@3 `_hash]-|Precomputed hash value.&]
[s7; [*/ Return value]-|Position of the found or placed element.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:FindPut`(const T`&`):%- [@(0.0.255) int]_[* FindPut]([@(0.0.255) const]_
[*@4 T]`&_[*@3 key])&]
[s2; Retrieves the position of the first element with the specified 
value in AIndex. If the element does not exist in the AIndex, 
it is placed to it using [* Put(const T`& x).] The position of 
the found or placed element is returned.&]
[s6; Invalidates multi`-key ordering.&]
[s6; Requires T to have deep copy constructor.&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 key]-|Element to find or put.&]
[s7; [*C@3 `_hash]-|Precomputed hash value.&]
[s7; [*/ Return value]-|Position of the found or placed element.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Set`(int`,const T`&`,unsigned`):%- [@(0.0.255) void]_[* Set]([@(0.0.255) i
nt]_[*@3 i], [@(0.0.255) const]_[*@4 T]`&_[*@3 x], [@(0.0.255) unsigned]_[*@3 `_hash])&]
[s2; Replaces the element at the specified position with a new element 
with the specified value, using a precomputed hash`-value. Speed 
of this operation depends on the total number of elements with 
the same value as the specified one.&]
[s6; Requires T to have deep copy constructor.&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 i]-|Position of the element.&]
[s7; [*C@3 x]-|Value to set.&]
[s7; [*C@3 `_hash]-|Precomputed hash value.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Set`(int`,const T`&`):%- [@(0.0.255) void]_[* Set]([@(0.0.255) int]_[*@3 i
], [@(0.0.255) const]_[*@4 T]`&_[*@3 x])&]
[s2; Replaces the element at the specified position with a new element 
with the specified value. Speed of this operation depends on 
total number of elements with the same value as specified the 
specified one.&]
[s6; Requires T to have deep copy constructor.&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 i]-|Position of the element.&]
[s7; [*C@3 x]-|Value to set.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:operator`[`]`(int`)const:%- [@(0.0.255) const]_[*@4 T]`&_[* operator`[`]
]([@(0.0.255) int]_[*@3 i])_[@(0.0.255) const]&]
[s2; Returns the element at the specified position.&]
[s7; [*C@3 i]-|Position of the element.&]
[s7; [*/ Return value]-|Constant reference to element.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:GetCount`(`)const:%- [@(0.0.255) int]_[* GetCount]()_[@(0.0.255) const]&]
[s2; Returns number of elements in AIndex.&]
[s7; [*/ Return value]-|Actual number of elements.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:IsEmpty`(`)const:%- [@(0.0.255) bool]_[* IsEmpty]()_[@(0.0.255) const]&]
[s2; Tests whether AIndex is empty. Same as GetCount() `=`= 0.&]
[s7; [*/ Return value]-|true if AIndex is empty, false otherwise.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Clear`(`):%- [@(0.0.255) void]_[* Clear]()&]
[s2; Removes all elements from AIndex.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:ClearIndex`(`):%- [@(0.0.255) void]_[* ClearIndex]()&]
[s2; Restores multi`-key ordering.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:UnlinkKey`(const T`&`,unsigned`):%- [@(0.0.255) int]_[* UnlinkKey]([@(0.0.255) c
onst]_[*@4 T]`&_[*@3 k], [@(0.0.255) unsigned]_[*@3 h])&]
[s2; Unlinks all elements with specified value using precomputed 
hash`-value. Unlinked elements stay in AIndex but are ignored 
by any Find operations. Precomputed hash value must be same as 
hash value that would be result of HashFn. &]
[s7; [*C@3 k]-|Value of elements to unlink.&]
[s7; [*C@3 h]-|Precomputed hash value.&]
[s7; [*/ Return value]-|Number of elements unlinked.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:UnlinkKey`(const T`&`):%- [@(0.0.255) int]_[* UnlinkKey]([@(0.0.255) con
st]_[*@4 T]`&_[*@3 k])&]
[s2; Unlinks all elements with specified value. Unlinked elements 
remain in the AIndex but are ignored by any Find operations.&]
[s7; [*C@3 k]-|Value of elements to unlink.&]
[s7; [*/ Return value]-|Number of elements unlinked.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:IsUnlinked`(int`)const:%- [@(0.0.255) bool]_[* IsUnlinked]([@(0.0.255) i
nt]_[*@3 i])_[@(0.0.255) const]&]
[s2; Tests whether the element at the specified position is unlinked.&]
[s7; [*C@3 i]-|Position.&]
[s7; [*/ Return value]-|true if element is unlinked.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Sweep`(`):%- [@(0.0.255) void]_[* Sweep]()&]
[s2; Removes all unlinked elements from AIndex. Complexity of the 
operation depends on the number of elements in AIndex, not on 
the number of unlinked elements. Also restores multi`-key ordering.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Insert`(int`,const T`&`,unsigned`):%- [@(0.0.255) void]_[* Insert]([@(0.0.255) i
nt]_[*@3 i], [@(0.0.255) const]_[*@4 T]`&_[*@3 k], [@(0.0.255) unsigned]_[*@3 h])&]
[s2; Inserts an element with the specified value at the specified 
position, using a precomputed hash value. The precomputed hash 
value must be the same as the hash value that would be the result 
of HashFn. This is a slow operation, especially when combined 
with any search operations.&]
[s6; Requires T to have deep copy constructor.&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 i]-|Insert position.&]
[s7; [*C@3 k]-|Element to insert.&]
[s7; [*C@3 h]-|Precomputed hash value.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Insert`(int`,const T`&`):%- [@(0.0.255) void]_[* Insert]([@(0.0.255) int
]_[*@3 i], [@(0.0.255) const]_[*@4 T]`&_[*@3 k])&]
[s2; Inserts an element with the specified value at the specified 
position. This is a slow operation, especially when combined 
with any search operations.&]
[s6; Requires T to have deep copy constructor.&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 i]-|Insert position.&]
[s7; [*C@3 k]-|Element to insert.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Remove`(int`):%- [@(0.0.255) void]_[* Remove]([@(0.0.255) int]_[*@3 i])&]
[s2; Removes the element at the specified position. This is a slow 
operation, especially when combined with any search operations.&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 i]-|Position of the element to remove.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Remove`(const int`*`,int`):%- [@(0.0.255) void]_[* Remove]([@(0.0.255) c
onst]_[@(0.0.255) int]_`*[*@3 sorted`_list], [@(0.0.255) int]_[*@3 count])&]
[s2; Removes multiple elements from AIndex. Time of operation only 
slightly depends on the number of removed elements. This is a 
slow operation, especially when combined with any search operations.&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 sorted`_list]-|Pointer to array of positions to remove, in 
ascending order.&]
[s7; [*C@3 count]-|Number of elements to remove.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Remove`(const`:`:Vector`<int`>`&`):%- [@(0.0.255) void]_[* Remove]([@(0.0.255) c
onst]_[_^`:`:Vector^ Vector]<int>`&_[*@3 sorted`_list])&]
[s2; Removes multiple elements from AIndex. Same as Remove(sorted`_list, 
sorted`_list.GetCount()).&]
[s6; Invalidates iterators to AIndex.&]
[s6; Invalidates references to Index.&]
[s7; [*C@3 sorted`_list]-|Sorted Vector of positions to remove.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:RemoveKey`(const T`&`,unsigned`):%- [@(0.0.255) int]_[* RemoveKey]([@(0.0.255) c
onst]_[*@4 T]`&_[*@3 k], [@(0.0.255) unsigned]_[*@3 h])&]
[s2; Removes all elements with the specified value using a precomputed 
hash`-value. The precomputed hash value must be the same as the 
hash value that would be the result of HashFn. This is a slow 
operation, especially when combined with any search operations.&]
[s7; [*C@3 k]-|Value of the elements to remove.&]
[s7; [*C@3 h]-|Precomputed hash value.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:RemoveKey`(const T`&`):%- [@(0.0.255) int]_[* RemoveKey]([@(0.0.255) con
st]_[*@4 T]`&_[*@3 k])&]
[s2; Removes all elements with the specified value. This is a slow 
operation, especially when combined with any search operations.&]
[s7; [*C@3 k]-|Value of the elements to remove.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Trim`(int`):%- [@(0.0.255) void]_[* Trim]([@(0.0.255) int]_[*@3 n])&]
[s2; Reduces the number of elements in AIndex to the specified number. 
Requested number must be less than or equal to actual number 
of elements in AIndex.&]
[s7; [*C@3 n]-|Requested number of elements.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Drop`(int`):%- [@(0.0.255) void]_[* Drop]([@(0.0.255) int]_[*@3 n]_`=_[@3 1])
&]
[s2; Drops the specified number of elements from the end of the AIndex 
(same as Trim(GetCount() `- n)).&]
[s7; [*C@3 n]-|Number of elements.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Top`(`)const:%- [@(0.0.255) const]_[*@4 T]`&_[* Top]()_[@(0.0.255) const]&]
[s2; Returns a reference to the last element in the AIndex.&]
[s7; [*/ Return value]-|Reference of thr last element in the AIndex.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Reserve`(int`):%- [@(0.0.255) void]_[* Reserve]([@(0.0.255) int]_[*@3 n])&]
[s2; Reserves capacity. If the requested capacity is greater than 
current capacity, capacity is increased to the requested value.&]
[s7; [*C@3 n]-|Requested capacity.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Shrink`(`):%- [@(0.0.255) void]_[* Shrink]()&]
[s2; Minimizes the memory consumption of AIndex by decreasing the 
capacity to the number of elements.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:GetAlloc`(`)const:%- [@(0.0.255) int]_[* GetAlloc]()_[@(0.0.255) const]&]
[s2; Returns the current capacity of AIndex.&]
[s7; [*/ Return value]-|Capacity of AIndex.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Serialize`(`:`:Stream`&`):%- [@(0.0.255) void]_[* Serialize]([_^`:`:Stream^ S
tream]`&_[*@3 s])&]
[s2; Serializes content of AIndex to/from Stream. Works only if NTL 
is used as part of UPP.&]
[s6; Requires T to have serialization operator defined.&]
[s7; [*C@3 s]-|Target/source stream.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:PickKeys`(`)pick`_:%- [*@4 V]_[* PickKeys]()_pick`_&]
[s2; Returns a basic random access container of elements. Destroys 
AIndex by picking.&]
[s7; [*/ Return value]-|Basic random access container of elements in 
AIndex.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:GetKeys`(`)const:%- [@(0.0.255) const]_[*@4 V]`&_[* GetKeys]()_[@(0.0.255) c
onst]&]
[s2; Returns a constant reference to basic random access container 
of elements.&]
[s7; [*/ Return value]-|Constant reference to a basic random access 
container of elements.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:operator`=`(pick`_ V`&`):%- [_^`:`:AIndex^ AIndex]`&_[* operator`=](pi
ck`__[*@4 V]`&_[*@3 s])&]
[s2; Assigns basic random access container to AIndex. Transfers the 
source container in short constant time, but destroys it by picking.&]
[s7; [*C@3 s]-|Source container.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:operator`<`<`=`(const V`&`):%- [_^`:`:AIndex^ AIndex]`&_[* operator<<`=
]([@(0.0.255) const]_[*@4 V]`&_[*@3 s])&]
[s2; Assigns the basic random access container to AIndex, while preserving 
the value of the source container.&]
[s6; Requires T to have deep copy constructor or optional deep copy.&]
[s7; [*C@3 s]-|Source container.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:AIndex`(pick`_ V`&`):%- [* AIndex](pick`__[*@4 V]`&_[*@3 s])&]
[s2; Pick`-constructs AIndex from a basic random access container. 
Transfers the source container in short constant time, but destroys 
it by picking.&]
[s7; [*C@3 s]-|Source basic random access container.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:AIndex`(const V`&`,int`):%- [* AIndex]([@(0.0.255) const]_[*@4 V]`&_[*@3 s
], [@(0.0.255) int])&]
[s2; Deep`-copy constructs AIndex from basic random access container.&]
[s6; Requires T to have deep copy constructor or optional deep copy 
constructor.&]
[s7; [*C@3 s]-|Source AIndex.&]
[s5;K%- typedef_T_ValueType&]
[s2; Typedef of T for use in templated algorithms.&]
[s5;K%- typedef_typename_[^V`:`:ConstIterator^ V`::ConstIterator]_ConstIterator&]
[s2; Constant iterator type.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:Begin`(`)const:%- [_^`:`:AIndex`:`:ConstIterator^ ConstIterator]_[* Be
gin]()_[@(0.0.255) const]&]
[s2; Returns a constant iterator to the first element in AIndex.&]
[s7; [*/ Return value]-|Iterator.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:End`(`)const:%- [_^`:`:AIndex`:`:ConstIterator^ ConstIterator]_[* End](
)_[@(0.0.255) const]&]
[s2; Returns a constant iterator to the position just beyond the 
last element in AIndex.&]
[s7; [*/ Return value]-|Iterator.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:GetIter`(int`)const:%- [_^`:`:AIndex`:`:ConstIterator^ ConstIterator
]_[* GetIter]([@(0.0.255) int]_[*@3 pos])_[@(0.0.255) const]&]
[s2; Returns a constant iterator to the element at specified position. 
Same as [* Begin() `+ i]. The benefit of this method is that [* pos] 
is range checked in debug mode.&]
[s7; [*C@3 pos]-|Required position.&]
[s7; [*/ Return value]-|Iterator.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:AIndex`(`):%- [* AIndex]()&]
[s2; Constructor. Constructs an empty AIndex.&]
[s3;%- &]
[s4;%- &]
[s5;:`:`:AIndex`:`:AIndex`(const`:`:AIndex`&`,int`):%- [* AIndex]([@(0.0.255) const]_[* AIn
dex]`&_[*@3 s], [@(0.0.255) int])&]
[s2; Optional deep copy constructor.&]
[s6; Requires T to have deep copy constructor or optional deep copy 
constructor.&]
[s7; [*C s]-|Source AIndex.&]
[s0; ]