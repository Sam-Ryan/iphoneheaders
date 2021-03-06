/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOAddress.h>

@class NSString;

@interface TSKCOIdAddress : TSKCOAddress {

	NSString* mId;

}

@property (nonatomic,readonly) NSString * identifier; 
+(id)addressWithPath:(id)arg1 ;
+(id)addressWithId:(id)arg1 ;
+(id)addressWithIdPath:(id)arg1 ;
+(id)idFromIdPath:(id)arg1 ;
+(id)addressWithUUID:(id)arg1 ;
+(id)addressWithUUIDPath:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 message:(Address*)arg2 ;
-(id)pathElement;
-(id)initWithUnarchiver:(id)arg1 message:(const Address*)arg2 ;
-(id)initWithParent:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(NSString *)identifier;
@end

