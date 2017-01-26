/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSData;

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _alterationTypeFlags;
	BOOL _shouldFilterDefaultValuesForNewProperties;
	BOOL _isSparseFullChange;
	BOOL _inTrash;
	BOOL _inExpunged;
	BOOL _serverRecordIsCorrupted;
	NSString* _identifier;
	NSDate* _recordModificationDate;
	unsigned long long _changeType;
	NSDate* _dateDeleted;
	NSString* _realIdentifier;
	NSData* _recordChangeData;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDate * recordModificationDate;              //@synthesize recordModificationDate=_recordModificationDate - In the implementation block
@property (assign,nonatomic) unsigned long long changeType;              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,copy) NSDate * dateDeleted;                         //@synthesize dateDeleted=_dateDeleted - In the implementation block
@property (assign,nonatomic) BOOL inTrash;                               //@synthesize inTrash=_inTrash - In the implementation block
@property (assign,nonatomic) BOOL inExpunged;                            //@synthesize inExpunged=_inExpunged - In the implementation block
@property (nonatomic,copy) NSString * realIdentifier;                    //@synthesize realIdentifier=_realIdentifier - In the implementation block
@property (nonatomic,copy) NSData * recordChangeData;                    //@synthesize recordChangeData=_recordChangeData - In the implementation block
@property (assign,nonatomic) BOOL serverRecordIsCorrupted;               //@synthesize serverRecordIsCorrupted=_serverRecordIsCorrupted - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cplAdditionalSecureClassesForProperty:(id)arg1 ;
+(Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2 ;
+(id)newChangeWithIdentifier:(id)arg1 changeType:(unsigned long long)arg2 ;
+(id)deleteChangeWithIdentifier:(id)arg1 ;
+(id)descriptionForChangeType:(unsigned long long)arg1 ;
+(id)newRecord;
+(id)_descriptionForChangeType:(unsigned long long)arg1 isSparseFullChange:(BOOL)arg2 ;
+(id)newChangeWithType:(unsigned long long)arg1 ;
+(id)newRecordWithIdentifier:(id)arg1 ;
+(long long)maxInlineDataSize;
-(id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 usingClientCache:(id)arg3 ;
-(BOOL)_addRealChangeToChangeBatch:(id)arg1 withStoredRecord:(id)arg2 andApplyToClientCache:(id)arg3 error:(id*)arg4 ;
-(BOOL)addExpandedChangesToChangeBatch:(id)arg1 andApplyToClientCache:(id)arg2 error:(id*)arg3 ;
-(id)proposedCloudIdentifierWithError:(id*)arg1 ;
-(id)identifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)storedClassNameForCPLArchiver:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(unsigned long long)totalResourceSize;
-(long long)dequeueOrder;
-(id)resourcesDescription;
-(id)propertiesForChangeType:(unsigned long long)arg1 ;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(void)prepareForStorage;
-(void)awakeFromStorage;
-(id)cplFullDescription;
-(id)proposedLocalIdentifier;
-(id)identifierForQuarantine;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(NSString *)realIdentifier;
-(NSData *)recordChangeData;
-(void)markAsSparseFullChange;
-(BOOL)validateFullRecord;
-(id)secondaryIdentifier;
-(void)setSecondaryIdentifier:(id)arg1 ;
-(BOOL)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(unsigned long long)arg3 updatedProperty:(id*)arg4 ;
-(id)realRecordChangeFromRecordChange:(id)arg1 newRecord:(id*)arg2 updatedProperties:(id*)arg3 ;
-(unsigned long long)originalResourceSize;
-(BOOL)encodePropertiesInObject:(id)arg1 ;
-(BOOL)decodePropertiesFromObject:(id)arg1 ;
-(id)realRecordChangeFromRecordChange:(id)arg1 newRecord:(id*)arg2 ;
-(id)mergeRecordChangeWithNewRecordChange:(id)arg1 ;
-(BOOL)shouldApplyPropertiesWithSelector:(SEL)arg1 ;
-(void)setShouldFilterDefaultValuesForNewProperties:(BOOL)arg1 ;
-(BOOL)shouldFilterDefaultValuesForNewProperties;
-(BOOL)isSparseFullChange;
-(unsigned long long)alterationTypeFlags;
-(void)setAlterationTypeFlags:(unsigned long long)arg1 ;
-(void)setRealIdentifier:(NSString *)arg1 ;
-(void)setRecordChangeData:(NSData *)arg1 ;
-(BOOL)serverRecordIsCorrupted;
-(void)setServerRecordIsCorrupted:(BOOL)arg1 ;
-(void)setChangeType:(unsigned long long)arg1 ;
-(BOOL)isFullRecord;
-(BOOL)hasChangeType:(unsigned long long)arg1 ;
-(unsigned long long)changeType;
-(BOOL)inExpunged;
-(void)setInTrash:(BOOL)arg1 ;
-(void)setInExpunged:(BOOL)arg1 ;
-(void)setDateDeleted:(NSDate *)arg1 ;
-(id)resourceForType:(unsigned long long)arg1 ;
-(void)setRecordModificationDate:(NSDate *)arg1 ;
-(NSDate *)recordModificationDate;
-(BOOL)inTrash;
-(NSDate *)dateDeleted;
-(BOOL)supportsResources;
-(unsigned long long)realResourceSize;
-(id)propertiesDescription;
-(BOOL)isDelete;
@end

