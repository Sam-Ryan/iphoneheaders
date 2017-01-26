/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHStyleOwnerPath;

@interface TSCHStyleOwnerPropertyKey : NSObject <NSCopying> {

	TSCHStyleOwnerPath* mStyleOwnerPath;
	int mProperty;

}

@property (nonatomic,readonly) TSCHStyleOwnerPath * styleOwnerPath; 
@property (nonatomic,readonly) int property; 
+(id)propertyKeyWithStyleOwnerPath:(id)arg1 property:(int)arg2 ;
-(id)initWithStyleOwnerPath:(id)arg1 property:(int)arg2 ;
-(TSCHStyleOwnerPath *)styleOwnerPath;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)property;
@end

