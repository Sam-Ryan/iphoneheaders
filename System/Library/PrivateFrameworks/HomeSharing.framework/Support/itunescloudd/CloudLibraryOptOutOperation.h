/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:15:53 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSString;

@interface CloudLibraryOptOutOperation : CloudLibraryOperation {

	NSString* _cuid;
	NSString* _troveID;

}

@property (nonatomic,copy) NSString * cuid;                 //@synthesize cuid=_cuid - In the implementation block
@property (nonatomic,copy) NSString * troveID;              //@synthesize troveID=_troveID - In the implementation block
-(NSString *)cuid;
-(void)setCuid:(NSString *)arg1 ;
-(NSString *)troveID;
-(void)_sendOptOutWithCUID:(id)arg1 troveID:(id)arg2 ;
-(id)initWithCUID:(id)arg1 troveID:(id)arg2 ;
-(void)setTroveID:(NSString *)arg1 ;
-(void)main;
@end

