/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol HMObjectMerge <NSObject>
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@optional
-(void)mergeWithNewObjectNoMergeCount:(id)arg1;

@required
-(NSUUID *)uniqueIdentifier;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;

@end

