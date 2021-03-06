/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKContainerID;

@interface CKDAppContainerTuple : NSObject <NSCopying> {

	NSString* _applicationBundleID;
	NSString* _sourceApplicationBundleID;
	CKContainerID* _containerID;
	NSString* _applicationContainerPath;

}

@property (nonatomic,retain) NSString * applicationBundleID;                    //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleID;              //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
@property (nonatomic,retain) CKContainerID * containerID;                       //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSString * applicationContainerPath;               //@synthesize applicationContainerPath=_applicationContainerPath - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(CKContainerID *)containerID;
-(NSString *)applicationBundleID;
-(NSString *)applicationContainerPath;
-(NSString *)sourceApplicationBundleID;
-(id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 applicationContainerPath:(id)arg3 containerID:(id)arg4 ;
-(id)initWithApplicationBundleID:(id)arg1 containerID:(id)arg2 ;
-(id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerID:(id)arg3 ;
-(id)CKPropertiesDescription;
-(void)setApplicationContainerPath:(NSString *)arg1 ;
-(id)pushTokenBundleID;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
@end

