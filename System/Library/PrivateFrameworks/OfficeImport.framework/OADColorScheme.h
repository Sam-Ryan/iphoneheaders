/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary;

@interface OADColorScheme : NSObject <NSCopying> {

	NSString* mName;
	NSMutableDictionary* mColors;

}

@property (nonatomic,copy) NSString * name; 
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)addColor:(id)arg1 index:(int)arg2 ;
-(id)colorForIndex:(int)arg1 ;
-(unsigned long long)colorCount;
-(void)validateColorScheme;
-(void)setColor:(id)arg1 index:(int)arg2 ;
@end

