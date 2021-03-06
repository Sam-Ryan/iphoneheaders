/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BRCAccountSession, CKServerChangeToken, NSDate;

@interface BRCContainerMetadataSyncPersistedState : NSObject <NSSecureCoding> {

	BRCAccountSession* _session;
	BOOL _needsContainerMetadataSync;
	BOOL _needsSharedDBSync;
	CKServerChangeToken* _serverChangeToken;
	NSDate* _lastSyncDate;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (retain) NSDate * lastSyncDate;                                          //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (assign,nonatomic) BOOL needsContainerMetadataSync;                      //@synthesize needsContainerMetadataSync=_needsContainerMetadataSync - In the implementation block
@property (assign,nonatomic) BOOL needsSharedDBSync;                               //@synthesize needsSharedDBSync=_needsSharedDBSync - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)needsContainerMetadataSync;
-(void)setNeedsContainerMetadataSync:(BOOL)arg1 ;
-(void)setNeedsSharedDBSync:(BOOL)arg1 ;
-(BOOL)needsSharedDBSync;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(NSDate *)lastSyncDate;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
@end

