//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFSyncedFile.h>

@interface MFSyncedSmartMailboxesFile : MFSyncedFile
{
}

+ (id)syncedSmartMailboxesFile;	// IMP=0x000000000027f3af
- (id)upgradeLegacyCloudData:(id)arg1 fromLegacyVersion:(long long)arg2;	// IMP=0x000000000027fad0
- (id)resolveConflictVersion:(id)arg1 againstCurrentVersion:(id)arg2;	// IMP=0x000000000027f3f3
- (void)writeSmartMailboxes:(id)arg1;	// IMP=0x000000000027f3df
- (id)readSmartMailboxes;	// IMP=0x000000000027f3cb

@end

