// WARNING: This file is machine generated by fidlc.

#include "fidl.h"

extern "C" {

// old

extern const fidl_type_t example_UnionSize8Aligned4Table;
extern const fidl_type_t example_Sandwich1Table;
extern const fidl_type_t example_UnionSize16Aligned4Table;
extern const fidl_type_t example_Sandwich2Table;
extern const fidl_type_t example_StructSize16Alignement8Table;
extern const fidl_type_t example_UnionSize24Alignement8Table;
extern const fidl_type_t example_Sandwich3Table;



static const ::fidl::FidlUnionField Fields26example_UnionSize8Aligned4[] = {
    ::fidl::FidlUnionField(nullptr, 3u, 964920088u),
    ::fidl::FidlUnionField(nullptr, 3u, 1734933826u),
    ::fidl::FidlUnionField(nullptr, 0u, 2143482075u)
};
extern inline const ::fidl::FidlCodedUnion* const example_UnionSize8Aligned4Table_alt;
const fidl_type_t example_UnionSize8Aligned4Table = fidl_type_t(::fidl::FidlCodedUnion(Fields26example_UnionSize8Aligned4, 3u, 4u, 8u, "example/UnionSize8Aligned4", example_UnionSize8Aligned4Table_alt));

extern inline const ::fidl::FidlStructField* const Fields17example_Sandwich1_field1_alt_field;
static const ::fidl::FidlStructField Fields17example_Sandwich1[] = {
    ::fidl::FidlStructField(&example_UnionSize8Aligned4Table, 4u, 0u, Fields17example_Sandwich1_field1_alt_field)
};
extern inline const ::fidl::FidlCodedStruct* const example_Sandwich1Table_alt;
const fidl_type_t example_Sandwich1Table = fidl_type_t(::fidl::FidlCodedStruct(Fields17example_Sandwich1, 1u, 16u, "example/Sandwich1", example_Sandwich1Table_alt));

static const ::fidl::FidlUnionField Fields27example_UnionSize16Aligned4[] = {
    ::fidl::FidlUnionField(nullptr, 2u, 550622143u)
};
extern inline const ::fidl::FidlCodedUnion* const example_UnionSize16Aligned4Table_alt;
const fidl_type_t example_UnionSize16Aligned4Table = fidl_type_t(::fidl::FidlCodedUnion(Fields27example_UnionSize16Aligned4, 1u, 4u, 12u, "example/UnionSize16Aligned4", example_UnionSize16Aligned4Table_alt));

static const ::fidl::FidlStructField Fields17example_Sandwich2[] = {
    ::fidl::FidlStructField(&example_UnionSize16Aligned4Table, 4u, 0u)
};
extern inline const ::fidl::FidlCodedStruct* const example_Sandwich2Table_alt;
const fidl_type_t example_Sandwich2Table = fidl_type_t(::fidl::FidlCodedStruct(Fields17example_Sandwich2, 1u, 20u, "example/Sandwich2", example_Sandwich2Table_alt));

static const ::fidl::FidlStructField Fields31example_StructSize16Alignement8[] = {};
extern inline const ::fidl::FidlCodedStruct* const example_StructSize16Alignement8Table_alt;
const fidl_type_t example_StructSize16Alignement8Table = fidl_type_t(::fidl::FidlCodedStruct(Fields31example_StructSize16Alignement8, 0u, 16u, "example/StructSize16Alignement8", example_StructSize16Alignement8Table_alt));

static const ::fidl::FidlUnionField Fields30example_UnionSize24Alignement8[] = {
    ::fidl::FidlUnionField(&example_StructSize16Alignement8Table, 0u, 872699291u)
};
extern inline const ::fidl::FidlCodedUnion* const example_UnionSize24Alignement8Table_alt;
const fidl_type_t example_UnionSize24Alignement8Table = fidl_type_t(::fidl::FidlCodedUnion(Fields30example_UnionSize24Alignement8, 1u, 8u, 24u, "example/UnionSize24Alignement8", example_UnionSize24Alignement8Table_alt));

static const ::fidl::FidlStructField Fields17example_Sandwich3[] = {
    ::fidl::FidlStructField(nullptr, 4u, 4u),
    ::fidl::FidlStructField(&example_UnionSize24Alignement8Table, 8u, 0u),
    ::fidl::FidlStructField(nullptr, 36u, 4u)
};
extern inline const ::fidl::FidlCodedStruct* const example_Sandwich3Table_alt;
const fidl_type_t example_Sandwich3Table = fidl_type_t(::fidl::FidlCodedStruct(Fields17example_Sandwich3, 3u, 40u, "example/Sandwich3", example_Sandwich3Table_alt));

// v1

extern const fidl_type_t v1_example_UnionSize8Aligned4Table;
extern const fidl_type_t v1_example_Sandwich1Table;
extern const fidl_type_t v1_example_UnionSize16Aligned4Table;
extern const fidl_type_t v1_example_Sandwich2Table;
extern const fidl_type_t v1_example_StructSize16Alignement8Table;
extern const fidl_type_t v1_example_UnionSize24Alignement8Table;
extern const fidl_type_t v1_example_Sandwich3Table;



static const ::fidl::FidlUnionField Fields29v1_example_UnionSize8Aligned4[] = {
    ::fidl::FidlUnionField(nullptr, 7u, 964920088u),
    ::fidl::FidlUnionField(nullptr, 7u, 1734933826u),
    ::fidl::FidlUnionField(nullptr, 4u, 2143482075u)
};
extern inline const ::fidl::FidlCodedUnion* const v1_example_UnionSize8Aligned4Table_alt;
const fidl_type_t v1_example_UnionSize8Aligned4Table = fidl_type_t(::fidl::FidlCodedUnion(Fields29v1_example_UnionSize8Aligned4, 3u, 8u, 24u, "example/UnionSize8Aligned4", v1_example_UnionSize8Aligned4Table_alt));

extern inline const ::fidl::FidlStructField* const Fields20v1_example_Sandwich1_field1_alt_field;
static const ::fidl::FidlStructField Fields20v1_example_Sandwich1[] = {
    ::fidl::FidlStructField(nullptr, 4u, 4u),
    ::fidl::FidlStructField(&v1_example_UnionSize8Aligned4Table, 8u, 0u, Fields20v1_example_Sandwich1_field1_alt_field),
    ::fidl::FidlStructField(nullptr, 36u, 4u)
};
extern inline const ::fidl::FidlCodedStruct* const v1_example_Sandwich1Table_alt;
const fidl_type_t v1_example_Sandwich1Table = fidl_type_t(::fidl::FidlCodedStruct(Fields20v1_example_Sandwich1, 3u, 40u, "example/Sandwich1", v1_example_Sandwich1Table_alt));

static const ::fidl::FidlUnionField Fields30v1_example_UnionSize16Aligned4[] = {
    ::fidl::FidlUnionField(nullptr, 2u, 550622143u)
};
extern inline const ::fidl::FidlCodedUnion* const v1_example_UnionSize16Aligned4Table_alt;
const fidl_type_t v1_example_UnionSize16Aligned4Table = fidl_type_t(::fidl::FidlCodedUnion(Fields30v1_example_UnionSize16Aligned4, 1u, 8u, 24u, "example/UnionSize16Aligned4", v1_example_UnionSize16Aligned4Table_alt));

static const ::fidl::FidlStructField Fields20v1_example_Sandwich2[] = {
    ::fidl::FidlStructField(nullptr, 4u, 4u),
    ::fidl::FidlStructField(&v1_example_UnionSize16Aligned4Table, 8u, 0u),
    ::fidl::FidlStructField(nullptr, 36u, 4u)
};
extern inline const ::fidl::FidlCodedStruct* const v1_example_Sandwich2Table_alt;
const fidl_type_t v1_example_Sandwich2Table = fidl_type_t(::fidl::FidlCodedStruct(Fields20v1_example_Sandwich2, 3u, 40u, "example/Sandwich2", v1_example_Sandwich2Table_alt));

static const ::fidl::FidlStructField Fields34v1_example_StructSize16Alignement8[] = {};
extern inline const ::fidl::FidlCodedStruct* const v1_example_StructSize16Alignement8Table_alt;
const fidl_type_t v1_example_StructSize16Alignement8Table = fidl_type_t(::fidl::FidlCodedStruct(Fields34v1_example_StructSize16Alignement8, 0u, 16u, "example/StructSize16Alignement8", v1_example_StructSize16Alignement8Table_alt));

static const ::fidl::FidlUnionField Fields33v1_example_UnionSize24Alignement8[] = {
    ::fidl::FidlUnionField(&v1_example_StructSize16Alignement8Table, 0u, 872699291u)
};
extern inline const ::fidl::FidlCodedUnion* const v1_example_UnionSize24Alignement8Table_alt;
const fidl_type_t v1_example_UnionSize24Alignement8Table = fidl_type_t(::fidl::FidlCodedUnion(Fields33v1_example_UnionSize24Alignement8, 1u, 8u, 24u, "example/UnionSize24Alignement8", v1_example_UnionSize24Alignement8Table_alt));

static const ::fidl::FidlStructField Fields20v1_example_Sandwich3[] = {
    ::fidl::FidlStructField(nullptr, 4u, 4u),
    ::fidl::FidlStructField(&v1_example_UnionSize24Alignement8Table, 8u, 0u),
    ::fidl::FidlStructField(nullptr, 36u, 4u)
};
extern inline const ::fidl::FidlCodedStruct* const v1_example_Sandwich3Table_alt;
const fidl_type_t v1_example_Sandwich3Table = fidl_type_t(::fidl::FidlCodedStruct(Fields20v1_example_Sandwich3, 3u, 40u, "example/Sandwich3", v1_example_Sandwich3Table_alt));

// decls: old <-> v1_no_ee map

inline const ::fidl::FidlCodedStruct* const example_Sandwich1Table_alt = &v1_example_Sandwich1Table.coded_struct;
inline const ::fidl::FidlCodedStruct* const v1_example_Sandwich1Table_alt = &example_Sandwich1Table.coded_struct;

inline const ::fidl::FidlCodedStruct* const example_Sandwich2Table_alt = &v1_example_Sandwich2Table.coded_struct;
inline const ::fidl::FidlCodedStruct* const v1_example_Sandwich2Table_alt = &example_Sandwich2Table.coded_struct;

inline const ::fidl::FidlCodedStruct* const example_Sandwich3Table_alt = &v1_example_Sandwich3Table.coded_struct;
inline const ::fidl::FidlCodedStruct* const v1_example_Sandwich3Table_alt = &example_Sandwich3Table.coded_struct;

inline const ::fidl::FidlCodedStruct* const example_StructSize16Alignement8Table_alt = &v1_example_StructSize16Alignement8Table.coded_struct;
inline const ::fidl::FidlCodedStruct* const v1_example_StructSize16Alignement8Table_alt = &example_StructSize16Alignement8Table.coded_struct;

inline const ::fidl::FidlCodedUnion* const example_UnionSize16Aligned4Table_alt = &v1_example_UnionSize16Aligned4Table.coded_union;
inline const ::fidl::FidlCodedUnion* const v1_example_UnionSize16Aligned4Table_alt = &example_UnionSize16Aligned4Table.coded_union;

inline const ::fidl::FidlCodedUnion* const example_UnionSize24Alignement8Table_alt = &v1_example_UnionSize24Alignement8Table.coded_union;
inline const ::fidl::FidlCodedUnion* const v1_example_UnionSize24Alignement8Table_alt = &example_UnionSize24Alignement8Table.coded_union;

inline const ::fidl::FidlCodedUnion* const example_UnionSize8Aligned4Table_alt = &v1_example_UnionSize8Aligned4Table.coded_union;
inline const ::fidl::FidlCodedUnion* const v1_example_UnionSize8Aligned4Table_alt = &example_UnionSize8Aligned4Table.coded_union;

// struct fields: old <-> v1_no_ee map

inline const ::fidl::FidlStructField* const Fields17example_Sandwich1_field1_alt_field = &Fields20v1_example_Sandwich1[1];
inline const ::fidl::FidlStructField* const Fields20v1_example_Sandwich1_field1_alt_field = &Fields17example_Sandwich1[0];

} // extern "C"
