//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKNetEnabledProduct.h>

@class NSString, PKArchive;

@interface PKSecureNetEnabledProduct : PKNetEnabledProduct
{
    PKArchive *_distArchive;	// 104 = 0x68
    NSString *_archivePath;	// 112 = 0x70
    NSString *_tempArchivePath;	// 120 = 0x78
}

+ (id)productInfoFilename;	// IMP=0x0000000000057ed5
- (BOOL)_setDistributionArchiveFromPath:(id)arg1;	// IMP=0x000000000005874f
- (BOOL)commitReturningError:(id *)arg1;	// IMP=0x000000000005873d
- (BOOL)_populateWithDistributionArchiveReturningError:(id *)arg1;	// IMP=0x000000000005833a
- (id)_distributionArchiveWriteURL;	// IMP=0x0000000000058299
- (id)_distributionArchivePath;	// IMP=0x0000000000058288
- (BOOL)didReceiveData:(id)arg1 fromDistributionURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005810a
- (BOOL)_isDistributionArchiveInProductOnDisk:(id)arg1;	// IMP=0x000000000005804c
- (id)_archiveForTrustEvaluation;	// IMP=0x000000000005803b
- (id)productType;	// IMP=0x000000000005802b
- (void)dealloc;	// IMP=0x0000000000057f40
- (id)initByLoadingProductAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000057ee2

@end

