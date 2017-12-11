#include <stdint.h>

#if 0
C:/msys64/home/sydlu/CProjects/clustered-forward-demo-vk/demo/cluster_forward.vert
// Module Version 10000
// Generated by (magic number): 80001
// Id's are bound by 89

                              Capability Shader
               1:             ExtInstImport  "GLSL.std.450"
                              MemoryModel Logical GLSL450
                              EntryPoint Vertex 4  "main" 9 24 33 37 47 50 59 62 72 74 78
                              Source GLSL 450
                              Name 4  "main"
                              Name 9  "world_pos_out"
                              Name 15  "UBO"
                              MemberName 15(UBO) 0  "view"
                              MemberName 15(UBO) 1  "normal"
                              MemberName 15(UBO) 2  "model"
                              MemberName 15(UBO) 3  "projection_clip"
                              MemberName 15(UBO) 4  "tile_size"
                              MemberName 15(UBO) 5  "grid_dim"
                              MemberName 15(UBO) 6  "cam_pos"
                              MemberName 15(UBO) 7  "cam_far"
                              MemberName 15(UBO) 8  "resolution"
                              MemberName 15(UBO) 9  "num_lights"
                              Name 17  "ubo_in"
                              Name 24  "pos_in"
                              Name 33  "world_normal_out"
                              Name 37  "normal_in"
                              Name 47  "world_tangent_out"
                              Name 50  "tangent_in"
                              Name 59  "world_bitangent_out"
                              Name 62  "bitangent_in"
                              Name 72  "uv_out"
                              Name 74  "uv_in"
                              Name 76  "gl_PerVertex"
                              MemberName 76(gl_PerVertex) 0  "gl_Position"
                              Name 78  ""
                              Decorate 9(world_pos_out) Location 0
                              MemberDecorate 15(UBO) 0 ColMajor
                              MemberDecorate 15(UBO) 0 Offset 0
                              MemberDecorate 15(UBO) 0 MatrixStride 16
                              MemberDecorate 15(UBO) 1 ColMajor
                              MemberDecorate 15(UBO) 1 Offset 64
                              MemberDecorate 15(UBO) 1 MatrixStride 16
                              MemberDecorate 15(UBO) 2 ColMajor
                              MemberDecorate 15(UBO) 2 Offset 128
                              MemberDecorate 15(UBO) 2 MatrixStride 16
                              MemberDecorate 15(UBO) 3 ColMajor
                              MemberDecorate 15(UBO) 3 Offset 192
                              MemberDecorate 15(UBO) 3 MatrixStride 16
                              MemberDecorate 15(UBO) 4 Offset 256
                              MemberDecorate 15(UBO) 5 Offset 264
                              MemberDecorate 15(UBO) 6 Offset 272
                              MemberDecorate 15(UBO) 7 Offset 284
                              MemberDecorate 15(UBO) 8 Offset 288
                              MemberDecorate 15(UBO) 9 Offset 296
                              Decorate 15(UBO) Block
                              Decorate 17(ubo_in) DescriptorSet 2
                              Decorate 17(ubo_in) Binding 0
                              Decorate 24(pos_in) Location 0
                              Decorate 33(world_normal_out) Location 1
                              Decorate 37(normal_in) Location 1
                              Decorate 47(world_tangent_out) Location 2
                              Decorate 50(tangent_in) Location 3
                              Decorate 59(world_bitangent_out) Location 3
                              Decorate 62(bitangent_in) Location 4
                              Decorate 72(uv_out) Location 4
                              Decorate 74(uv_in) Location 2
                              MemberDecorate 76(gl_PerVertex) 0 BuiltIn Position
                              Decorate 76(gl_PerVertex) Block
               2:             TypeVoid
               3:             TypeFunction 2
               6:             TypeFloat 32
               7:             TypeVector 6(float) 4
               8:             TypePointer Output 7(fvec4)
9(world_pos_out):      8(ptr) Variable Output
              10:             TypeMatrix 7(fvec4) 4
              11:             TypeVector 6(float) 2
              12:             TypeInt 32 0
              13:             TypeVector 12(int) 2
              14:             TypeVector 6(float) 3
         15(UBO):             TypeStruct 10 10 10 10 11(fvec2) 13(ivec2) 14(fvec3) 6(float) 11(fvec2) 12(int)
              16:             TypePointer Uniform 15(UBO)
      17(ubo_in):     16(ptr) Variable Uniform
              18:             TypeInt 32 1
              19:     18(int) Constant 2
              20:             TypePointer Uniform 10
              23:             TypePointer Input 14(fvec3)
      24(pos_in):     23(ptr) Variable Input
              26:    6(float) Constant 1065353216
              32:             TypePointer Output 14(fvec3)
33(world_normal_out):     32(ptr) Variable Output
              34:     18(int) Constant 1
   37(normal_in):     23(ptr) Variable Input
              39:    6(float) Constant 0
47(world_tangent_out):     32(ptr) Variable Output
  50(tangent_in):     23(ptr) Variable Input
59(world_bitangent_out):     32(ptr) Variable Output
62(bitangent_in):     23(ptr) Variable Input
              71:             TypePointer Output 11(fvec2)
      72(uv_out):     71(ptr) Variable Output
              73:             TypePointer Input 11(fvec2)
       74(uv_in):     73(ptr) Variable Input
76(gl_PerVertex):             TypeStruct 7(fvec4)
              77:             TypePointer Output 76(gl_PerVertex)
              78:     77(ptr) Variable Output
              79:     18(int) Constant 0
              80:     18(int) Constant 3
         4(main):           2 Function None 3
               5:             Label
              21:     20(ptr) AccessChain 17(ubo_in) 19
              22:          10 Load 21
              25:   14(fvec3) Load 24(pos_in)
              27:    6(float) CompositeExtract 25 0
              28:    6(float) CompositeExtract 25 1
              29:    6(float) CompositeExtract 25 2
              30:    7(fvec4) CompositeConstruct 27 28 29 26
              31:    7(fvec4) MatrixTimesVector 22 30
                              Store 9(world_pos_out) 31
              35:     20(ptr) AccessChain 17(ubo_in) 34
              36:          10 Load 35
              38:   14(fvec3) Load 37(normal_in)
              40:    6(float) CompositeExtract 38 0
              41:    6(float) CompositeExtract 38 1
              42:    6(float) CompositeExtract 38 2
              43:    7(fvec4) CompositeConstruct 40 41 42 39
              44:    7(fvec4) MatrixTimesVector 36 43
              45:   14(fvec3) VectorShuffle 44 44 0 1 2
              46:   14(fvec3) ExtInst 1(GLSL.std.450) 69(Normalize) 45
                              Store 33(world_normal_out) 46
              48:     20(ptr) AccessChain 17(ubo_in) 34
              49:          10 Load 48
              51:   14(fvec3) Load 50(tangent_in)
              52:    6(float) CompositeExtract 51 0
              53:    6(float) CompositeExtract 51 1
              54:    6(float) CompositeExtract 51 2
              55:    7(fvec4) CompositeConstruct 52 53 54 39
              56:    7(fvec4) MatrixTimesVector 49 55
              57:   14(fvec3) VectorShuffle 56 56 0 1 2
              58:   14(fvec3) ExtInst 1(GLSL.std.450) 69(Normalize) 57
                              Store 47(world_tangent_out) 58
              60:     20(ptr) AccessChain 17(ubo_in) 34
              61:          10 Load 60
              63:   14(fvec3) Load 62(bitangent_in)
              64:    6(float) CompositeExtract 63 0
              65:    6(float) CompositeExtract 63 1
              66:    6(float) CompositeExtract 63 2
              67:    7(fvec4) CompositeConstruct 64 65 66 39
              68:    7(fvec4) MatrixTimesVector 61 67
              69:   14(fvec3) VectorShuffle 68 68 0 1 2
              70:   14(fvec3) ExtInst 1(GLSL.std.450) 69(Normalize) 69
                              Store 59(world_bitangent_out) 70
              75:   11(fvec2) Load 74(uv_in)
                              Store 72(uv_out) 75
              81:     20(ptr) AccessChain 17(ubo_in) 80
              82:          10 Load 81
              83:     20(ptr) AccessChain 17(ubo_in) 79
              84:          10 Load 83
              85:          10 MatrixTimesMatrix 82 84
              86:    7(fvec4) Load 9(world_pos_out)
              87:    7(fvec4) MatrixTimesVector 85 86
              88:      8(ptr) AccessChain 78 79
                              Store 88 87
                              Return
                              FunctionEnd
#endif

static const uint32_t cluster_forward_vert[742] = {
    0x07230203, 0x00010000, 0x00080001, 0x00000059,
    0x00000000, 0x00020011, 0x00000001, 0x0006000b,
    0x00000001, 0x4c534c47, 0x6474732e, 0x3035342e,
    0x00000000, 0x0003000e, 0x00000000, 0x00000001,
    0x0010000f, 0x00000000, 0x00000004, 0x6e69616d,
    0x00000000, 0x00000009, 0x00000018, 0x00000021,
    0x00000025, 0x0000002f, 0x00000032, 0x0000003b,
    0x0000003e, 0x00000048, 0x0000004a, 0x0000004e,
    0x00030003, 0x00000002, 0x000001c2, 0x00040005,
    0x00000004, 0x6e69616d, 0x00000000, 0x00060005,
    0x00000009, 0x6c726f77, 0x6f705f64, 0x756f5f73,
    0x00000074, 0x00030005, 0x0000000f, 0x004f4255,
    0x00050006, 0x0000000f, 0x00000000, 0x77656976,
    0x00000000, 0x00050006, 0x0000000f, 0x00000001,
    0x6d726f6e, 0x00006c61, 0x00050006, 0x0000000f,
    0x00000002, 0x65646f6d, 0x0000006c, 0x00070006,
    0x0000000f, 0x00000003, 0x6a6f7270, 0x69746365,
    0x635f6e6f, 0x0070696c, 0x00060006, 0x0000000f,
    0x00000004, 0x656c6974, 0x7a69735f, 0x00000065,
    0x00060006, 0x0000000f, 0x00000005, 0x64697267,
    0x6d69645f, 0x00000000, 0x00050006, 0x0000000f,
    0x00000006, 0x5f6d6163, 0x00736f70, 0x00050006,
    0x0000000f, 0x00000007, 0x5f6d6163, 0x00726166,
    0x00060006, 0x0000000f, 0x00000008, 0x6f736572,
    0x6974756c, 0x00006e6f, 0x00060006, 0x0000000f,
    0x00000009, 0x5f6d756e, 0x6867696c, 0x00007374,
    0x00040005, 0x00000011, 0x5f6f6275, 0x00006e69,
    0x00040005, 0x00000018, 0x5f736f70, 0x00006e69,
    0x00070005, 0x00000021, 0x6c726f77, 0x6f6e5f64,
    0x6c616d72, 0x74756f5f, 0x00000000, 0x00050005,
    0x00000025, 0x6d726f6e, 0x695f6c61, 0x0000006e,
    0x00070005, 0x0000002f, 0x6c726f77, 0x61745f64,
    0x6e65676e, 0x756f5f74, 0x00000074, 0x00050005,
    0x00000032, 0x676e6174, 0x5f746e65, 0x00006e69,
    0x00070005, 0x0000003b, 0x6c726f77, 0x69625f64,
    0x676e6174, 0x5f746e65, 0x0074756f, 0x00060005,
    0x0000003e, 0x61746962, 0x6e65676e, 0x6e695f74,
    0x00000000, 0x00040005, 0x00000048, 0x6f5f7675,
    0x00007475, 0x00040005, 0x0000004a, 0x695f7675,
    0x0000006e, 0x00060005, 0x0000004c, 0x505f6c67,
    0x65567265, 0x78657472, 0x00000000, 0x00060006,
    0x0000004c, 0x00000000, 0x505f6c67, 0x7469736f,
    0x006e6f69, 0x00030005, 0x0000004e, 0x00000000,
    0x00040047, 0x00000009, 0x0000001e, 0x00000000,
    0x00040048, 0x0000000f, 0x00000000, 0x00000005,
    0x00050048, 0x0000000f, 0x00000000, 0x00000023,
    0x00000000, 0x00050048, 0x0000000f, 0x00000000,
    0x00000007, 0x00000010, 0x00040048, 0x0000000f,
    0x00000001, 0x00000005, 0x00050048, 0x0000000f,
    0x00000001, 0x00000023, 0x00000040, 0x00050048,
    0x0000000f, 0x00000001, 0x00000007, 0x00000010,
    0x00040048, 0x0000000f, 0x00000002, 0x00000005,
    0x00050048, 0x0000000f, 0x00000002, 0x00000023,
    0x00000080, 0x00050048, 0x0000000f, 0x00000002,
    0x00000007, 0x00000010, 0x00040048, 0x0000000f,
    0x00000003, 0x00000005, 0x00050048, 0x0000000f,
    0x00000003, 0x00000023, 0x000000c0, 0x00050048,
    0x0000000f, 0x00000003, 0x00000007, 0x00000010,
    0x00050048, 0x0000000f, 0x00000004, 0x00000023,
    0x00000100, 0x00050048, 0x0000000f, 0x00000005,
    0x00000023, 0x00000108, 0x00050048, 0x0000000f,
    0x00000006, 0x00000023, 0x00000110, 0x00050048,
    0x0000000f, 0x00000007, 0x00000023, 0x0000011c,
    0x00050048, 0x0000000f, 0x00000008, 0x00000023,
    0x00000120, 0x00050048, 0x0000000f, 0x00000009,
    0x00000023, 0x00000128, 0x00030047, 0x0000000f,
    0x00000002, 0x00040047, 0x00000011, 0x00000022,
    0x00000002, 0x00040047, 0x00000011, 0x00000021,
    0x00000000, 0x00040047, 0x00000018, 0x0000001e,
    0x00000000, 0x00040047, 0x00000021, 0x0000001e,
    0x00000001, 0x00040047, 0x00000025, 0x0000001e,
    0x00000001, 0x00040047, 0x0000002f, 0x0000001e,
    0x00000002, 0x00040047, 0x00000032, 0x0000001e,
    0x00000003, 0x00040047, 0x0000003b, 0x0000001e,
    0x00000003, 0x00040047, 0x0000003e, 0x0000001e,
    0x00000004, 0x00040047, 0x00000048, 0x0000001e,
    0x00000004, 0x00040047, 0x0000004a, 0x0000001e,
    0x00000002, 0x00050048, 0x0000004c, 0x00000000,
    0x0000000b, 0x00000000, 0x00030047, 0x0000004c,
    0x00000002, 0x00020013, 0x00000002, 0x00030021,
    0x00000003, 0x00000002, 0x00030016, 0x00000006,
    0x00000020, 0x00040017, 0x00000007, 0x00000006,
    0x00000004, 0x00040020, 0x00000008, 0x00000003,
    0x00000007, 0x0004003b, 0x00000008, 0x00000009,
    0x00000003, 0x00040018, 0x0000000a, 0x00000007,
    0x00000004, 0x00040017, 0x0000000b, 0x00000006,
    0x00000002, 0x00040015, 0x0000000c, 0x00000020,
    0x00000000, 0x00040017, 0x0000000d, 0x0000000c,
    0x00000002, 0x00040017, 0x0000000e, 0x00000006,
    0x00000003, 0x000c001e, 0x0000000f, 0x0000000a,
    0x0000000a, 0x0000000a, 0x0000000a, 0x0000000b,
    0x0000000d, 0x0000000e, 0x00000006, 0x0000000b,
    0x0000000c, 0x00040020, 0x00000010, 0x00000002,
    0x0000000f, 0x0004003b, 0x00000010, 0x00000011,
    0x00000002, 0x00040015, 0x00000012, 0x00000020,
    0x00000001, 0x0004002b, 0x00000012, 0x00000013,
    0x00000002, 0x00040020, 0x00000014, 0x00000002,
    0x0000000a, 0x00040020, 0x00000017, 0x00000001,
    0x0000000e, 0x0004003b, 0x00000017, 0x00000018,
    0x00000001, 0x0004002b, 0x00000006, 0x0000001a,
    0x3f800000, 0x00040020, 0x00000020, 0x00000003,
    0x0000000e, 0x0004003b, 0x00000020, 0x00000021,
    0x00000003, 0x0004002b, 0x00000012, 0x00000022,
    0x00000001, 0x0004003b, 0x00000017, 0x00000025,
    0x00000001, 0x0004002b, 0x00000006, 0x00000027,
    0x00000000, 0x0004003b, 0x00000020, 0x0000002f,
    0x00000003, 0x0004003b, 0x00000017, 0x00000032,
    0x00000001, 0x0004003b, 0x00000020, 0x0000003b,
    0x00000003, 0x0004003b, 0x00000017, 0x0000003e,
    0x00000001, 0x00040020, 0x00000047, 0x00000003,
    0x0000000b, 0x0004003b, 0x00000047, 0x00000048,
    0x00000003, 0x00040020, 0x00000049, 0x00000001,
    0x0000000b, 0x0004003b, 0x00000049, 0x0000004a,
    0x00000001, 0x0003001e, 0x0000004c, 0x00000007,
    0x00040020, 0x0000004d, 0x00000003, 0x0000004c,
    0x0004003b, 0x0000004d, 0x0000004e, 0x00000003,
    0x0004002b, 0x00000012, 0x0000004f, 0x00000000,
    0x0004002b, 0x00000012, 0x00000050, 0x00000003,
    0x00050036, 0x00000002, 0x00000004, 0x00000000,
    0x00000003, 0x000200f8, 0x00000005, 0x00050041,
    0x00000014, 0x00000015, 0x00000011, 0x00000013,
    0x0004003d, 0x0000000a, 0x00000016, 0x00000015,
    0x0004003d, 0x0000000e, 0x00000019, 0x00000018,
    0x00050051, 0x00000006, 0x0000001b, 0x00000019,
    0x00000000, 0x00050051, 0x00000006, 0x0000001c,
    0x00000019, 0x00000001, 0x00050051, 0x00000006,
    0x0000001d, 0x00000019, 0x00000002, 0x00070050,
    0x00000007, 0x0000001e, 0x0000001b, 0x0000001c,
    0x0000001d, 0x0000001a, 0x00050091, 0x00000007,
    0x0000001f, 0x00000016, 0x0000001e, 0x0003003e,
    0x00000009, 0x0000001f, 0x00050041, 0x00000014,
    0x00000023, 0x00000011, 0x00000022, 0x0004003d,
    0x0000000a, 0x00000024, 0x00000023, 0x0004003d,
    0x0000000e, 0x00000026, 0x00000025, 0x00050051,
    0x00000006, 0x00000028, 0x00000026, 0x00000000,
    0x00050051, 0x00000006, 0x00000029, 0x00000026,
    0x00000001, 0x00050051, 0x00000006, 0x0000002a,
    0x00000026, 0x00000002, 0x00070050, 0x00000007,
    0x0000002b, 0x00000028, 0x00000029, 0x0000002a,
    0x00000027, 0x00050091, 0x00000007, 0x0000002c,
    0x00000024, 0x0000002b, 0x0008004f, 0x0000000e,
    0x0000002d, 0x0000002c, 0x0000002c, 0x00000000,
    0x00000001, 0x00000002, 0x0006000c, 0x0000000e,
    0x0000002e, 0x00000001, 0x00000045, 0x0000002d,
    0x0003003e, 0x00000021, 0x0000002e, 0x00050041,
    0x00000014, 0x00000030, 0x00000011, 0x00000022,
    0x0004003d, 0x0000000a, 0x00000031, 0x00000030,
    0x0004003d, 0x0000000e, 0x00000033, 0x00000032,
    0x00050051, 0x00000006, 0x00000034, 0x00000033,
    0x00000000, 0x00050051, 0x00000006, 0x00000035,
    0x00000033, 0x00000001, 0x00050051, 0x00000006,
    0x00000036, 0x00000033, 0x00000002, 0x00070050,
    0x00000007, 0x00000037, 0x00000034, 0x00000035,
    0x00000036, 0x00000027, 0x00050091, 0x00000007,
    0x00000038, 0x00000031, 0x00000037, 0x0008004f,
    0x0000000e, 0x00000039, 0x00000038, 0x00000038,
    0x00000000, 0x00000001, 0x00000002, 0x0006000c,
    0x0000000e, 0x0000003a, 0x00000001, 0x00000045,
    0x00000039, 0x0003003e, 0x0000002f, 0x0000003a,
    0x00050041, 0x00000014, 0x0000003c, 0x00000011,
    0x00000022, 0x0004003d, 0x0000000a, 0x0000003d,
    0x0000003c, 0x0004003d, 0x0000000e, 0x0000003f,
    0x0000003e, 0x00050051, 0x00000006, 0x00000040,
    0x0000003f, 0x00000000, 0x00050051, 0x00000006,
    0x00000041, 0x0000003f, 0x00000001, 0x00050051,
    0x00000006, 0x00000042, 0x0000003f, 0x00000002,
    0x00070050, 0x00000007, 0x00000043, 0x00000040,
    0x00000041, 0x00000042, 0x00000027, 0x00050091,
    0x00000007, 0x00000044, 0x0000003d, 0x00000043,
    0x0008004f, 0x0000000e, 0x00000045, 0x00000044,
    0x00000044, 0x00000000, 0x00000001, 0x00000002,
    0x0006000c, 0x0000000e, 0x00000046, 0x00000001,
    0x00000045, 0x00000045, 0x0003003e, 0x0000003b,
    0x00000046, 0x0004003d, 0x0000000b, 0x0000004b,
    0x0000004a, 0x0003003e, 0x00000048, 0x0000004b,
    0x00050041, 0x00000014, 0x00000051, 0x00000011,
    0x00000050, 0x0004003d, 0x0000000a, 0x00000052,
    0x00000051, 0x00050041, 0x00000014, 0x00000053,
    0x00000011, 0x0000004f, 0x0004003d, 0x0000000a,
    0x00000054, 0x00000053, 0x00050092, 0x0000000a,
    0x00000055, 0x00000052, 0x00000054, 0x0004003d,
    0x00000007, 0x00000056, 0x00000009, 0x00050091,
    0x00000007, 0x00000057, 0x00000055, 0x00000056,
    0x00050041, 0x00000008, 0x00000058, 0x0000004e,
    0x0000004f, 0x0003003e, 0x00000058, 0x00000057,
    0x000100fd, 0x00010038,
};