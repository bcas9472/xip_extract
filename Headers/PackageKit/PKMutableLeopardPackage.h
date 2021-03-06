//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKMutablePackage.h>

@interface PKMutableLeopardPackage : PKMutablePackage
{
}

+ (id)_intendedPayloadEncodingForPackageInfo:(id)arg1;	// IMP=0x0000000000026430
+ (id)_intendedPayloadEncodingForMinimumOSVersion:(id)arg1;	// IMP=0x00000000000262b0
+ (id)_bundleAttributeDictionaryForComponent:(id)arg1;	// IMP=0x0000000000023922
- (BOOL)_writeToArchive:(id)arg1 atPath:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000020862
- (void)setModifyOwnershipUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020850
- (void)setMaskExpressions:(id)arg1;	// IMP=0x000000000002083e
- (void)setScriptRoot:(id)arg1;	// IMP=0x000000000002082c
- (void)setMapBaselineNamesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002081a
- (void)setBaselinePayloadRoot:(id)arg1;	// IMP=0x0000000000020808
- (void)setPayloadRoot:(id)arg1;	// IMP=0x00000000000207f6
- (void)setComponents:(id)arg1;	// IMP=0x00000000000207e4
- (BOOL)_writeScriptsToFile:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002647c
- (BOOL)_writePayloadToFile:(id)arg1 usingBom:(id)arg2 tempDir:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000025ddb
- (BOOL)_createUpdatePayloadAtPath:(id)arg1 fromBaseline:(id)arg2 toNew:(id)arg3 currentPrefix:(id)arg4 currentComponent:(id)arg5 componentMap:(id)arg6 tempDir:(id)arg7 totalPayloadSize:(unsigned long long *)arg8 didCreate:(char *)arg9 error:(id *)arg10;	// IMP=0x0000000000025005
- (BOOL)_writeBomToFile:(id)arg1 error:(id *)arg2 modifyOwnershipUsingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024a6f
- (void)_adjustOwnershipOnPath:(id)arg1 inBom:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000248fc
- (id)_effectivePayloadRoot;	// IMP=0x0000000000024730
- (id)_generateBomPathToRealPathDictionaryWithDestinationPath:(id)arg1;	// IMP=0x00000000000243cb
- (BOOL)_writeRoot:(id)arg1 toCompressedCPIO:(id)arg2 usingBom:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000240fa
- (void)_setModifyOwnershipUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000240ab
- (void)_setMaskExpressions:(id)arg1;	// IMP=0x000000000002405c
- (void)_setScriptRoot:(id)arg1;	// IMP=0x000000000002400d
- (void)_setMapBaselineNamesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023fbe
- (void)_setBaselinePayloadRoot:(id)arg1;	// IMP=0x0000000000023f6f
- (void)_setPayloadRoot:(id)arg1;	// IMP=0x0000000000023f20
- (void)_updatePackageInfoWithComponents;	// IMP=0x0000000000023a5b
- (void)_setComponents:(id)arg1;	// IMP=0x0000000000023a11

@end

