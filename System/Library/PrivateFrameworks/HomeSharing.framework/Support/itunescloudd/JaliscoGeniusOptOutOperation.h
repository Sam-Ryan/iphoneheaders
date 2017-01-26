/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:15:52 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSString;

@interface JaliscoGeniusOptOutOperation : CloudLibraryOperation {

	NSString* _cuid;

}

@property (nonatomic,copy) NSString * cuid;              //@synthesize cuid=_cuid - In the implementation block
-(id)initWithCUID:(id)arg1 ;
-(NSString *)cuid;
-(void)_sendOptOutWithCUID:(id)arg1 ;
-(void)setCuid:(NSString *)arg1 ;
-(void)main;
@end

